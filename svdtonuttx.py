#!/usr/bin/env python3
"""
===============================================================================
Script:     svdtonuttx.py
Author:     AlmAck
Date:       2024-09-23
Version:    1.0
Description:
    This script parses an SVD (System View Description) file to extract
    peripheral information and generates corresponding header (.h) files
    formatted according to the NuttX RTOS coding standards.

    The generated header files contain definitions for register offsets,
    addresses, and bitfield masks and shifts for each peripheral described
    in the SVD file. A custom prefix can be specified to prepend to the
    generated definitions, allowing for consistent naming conventions.

Usage:
    python3 svdtonuttx.py <svd_path> <output_dir> <custom_prefix>

    - <svd_path>:       Path to the input SVD file.
    - <output_dir>:     Directory where the generated header files will be saved.
    - <custom_prefix>:  Custom prefix to be used in the output files (e.g., 'NRF53').

Example:
    python3 svdtonuttx.py STM32F4xx.svd ./headers STM32F4

Requirements:
    - Python 3.x
    - An SVD file compatible with the script (check that it uses standard tags
      like 'bitOffset', 'bitWidth', 'lsb', 'msb', or 'bitRange' for bitfield
      definitions).

License:
    This script is provided "as is", without warranty of any kind, express or
    implied. The author is not responsible for any damage or data loss caused
    by the use of this script. You are free to modify and distribute it as
    long as you retain this notice.

===============================================================================
"""

import os
import re
import sys
import argparse
from cmsis_svd.parser import SVDParser

def format_comment(comment):
    """ Format and shorten comments to fit in one line if necessary. """
    if comment:
        return comment.replace("\n", " ").strip()[:80]  # Trim to 80 characters for brevity
    return "No description available."

def cleanse(description):
    """ Clean up the description for better readability in comments. """
    return description.replace("\n", " ").strip()

def humanBytes(bytes):
    """Convert size in bytes to a more human-readable format."""
    if (bytes >= 1024**2):
        return str((int(bytes / 1024**2 ))) + "MB"
    if (bytes >= 1024):
        return str((int(bytes / 1024))) + "KB"
    return ("1KB")

def write_header_to_file(file_handle, file_path):
    """Write a standardized header to an open file handle."""
    header_content = """
/****************************************************************************
 * {}
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/
""".strip()

    # Format the header with the file path and write it to the open file handle
    file_handle.write(header_content.format(file_path))
    file_handle.write("\n\n")
    file_handle.flush()  # Ensure the content is written to the file


def align_definitions_and_comments(file_path, value_column=2):
    """Adjust the alignment of values and comments in the file to specified columns based on the maximum key length."""
    with open(file_path, 'r') as file:
        content = file.readlines()

    corrected_content = []
    max_key_length = 0

    # First pass: Determine the maximum key length
    for line in content:
        if line.lstrip().startswith('/*') or line.lstrip().startswith(' *'):
            continue # Skip headers
        
        definition_part = line.rstrip()
        definition_parts = definition_part.split()

        if len(definition_parts) >= 2:
            # Consider the first two parts as the key for this example
            key = definition_parts[0] + " " + definition_parts[1]
            max_key_length = max(max_key_length, len(key))

    # Second pass: Adjust alignments using the maximum key length
    for line in content:
        if line.lstrip().startswith('/*') or line.lstrip().startswith(' *'):
            corrected_line = line  # Skip headers
        elif "/*" in line:
            parts = line.split("/*", 1)
            definition_part = parts[0].rstrip()
            comment = "/*" + parts[1]

            definition_parts = definition_part.split()
            if len(definition_parts) >= 2:
                key = definition_parts[0] + " " + definition_parts[1]
                value = ' '.join(definition_parts[2:])

                # Align based on the maximum key length
                space_to_value = value_column + (max_key_length - len(key))
                space_to_value = max(space_to_value, 1)

                corrected_line = f"{key}{' ' * space_to_value}{value}{' '}{comment}"
            else:
                corrected_line = line  # Handle lines that don't conform to expected structure
        else:
            corrected_line = line
        corrected_content.append(corrected_line)

    # Write the adjusted content back to the file
    with open(file_path, 'w') as file:
        file.writelines(corrected_content)


def export_memory_map(svd_path, output_dir, custom_prefix):
    """ Generate defines for peripheral base addresses and additional info from SVD, and write to memorymap.h. """
    parser = SVDParser.for_xml_file(svd_path)
    device = parser.get_device()

    filepath = os.path.join(output_dir, f"{custom_prefix.lower()}_memorymap.h")
    with open(filepath, 'w') as file:        
        write_header_to_file(file, filepath)
        
        file.write(f"#ifndef __{custom_prefix.upper()}_MEMORYMAP_H\n")
        file.write(f"#define __{custom_prefix.upper()}_MEMORYMAP_H\n\n")

        for peripheral in device.peripherals:
            if peripheral.base_address:
                name = peripheral.name
                base_address = peripheral.base_address
                size = 0  # Default size when not available

                address_block = getattr(peripheral, '_address_block', None)
                if address_block:
                    size = address_block.size
                    end_address = base_address + size - 1
                else:
                    end_address = base_address  # Default if size is unknown
        
                symname = f"{custom_prefix.upper()}{peripheral.name.upper()}_BASE"
                define = f"#define {symname:<20} 0x{base_address:08X}"

                description = cleanse(peripheral.description) if peripheral.description else name
                cmt = f" /* 0x{base_address:08X}-0x{end_address:08X}: {humanBytes(size)} {description} */"
                file.write(define + cmt + "\n")

        file.write(f"\n#endif // __{custom_prefix.upper()}_MEMORYMAP_H\n")

    align_definitions_and_comments(filepath)
    print(f"Generated: {filepath}")

def svd_to_header(svd_path, output_dir, custom_prefix):
    # Load and parse the SVD file
    parser = SVDParser.for_xml_file(svd_path)
    device = parser.get_device()
    generated_files = []

    # Create a header file for each peripheral
    for peripheral in device.peripherals:
        filename = f"{custom_prefix.lower()}_{peripheral.name.lower()}.h"
        filepath = os.path.join(output_dir, filename)
        generated_files.append(filepath)
        with open(filepath, 'w') as file:
            write_header_to_file(file, filepath)
            
            file.write(f"#ifndef __{custom_prefix.upper()}_{peripheral.name.upper()}_H\n")
            file.write(f"#define __{custom_prefix.upper()}_{peripheral.name.upper()}_H\n\n")

            # Section for register offsets
            file.write("/* Register offsets *********************************************************/\n\n")
            for register in peripheral.registers:
                reg_name = register.name.replace("_REG", "")
                reg_comment = format_comment(register.description)
                file.write(f"#define {custom_prefix.upper()}_{peripheral.name.upper()}_{reg_name}_OFFSET 0x{register.address_offset:04X} /* {reg_comment} */\n")

            file.write("\n")

            # Section for register addresses
            file.write("/* Register addresses *******************************************************/\n\n")
            # Base address definition with descriptive comment
            base_comment = format_comment(peripheral.description)
            file.write(f"#define {custom_prefix.upper()}_{peripheral.name.upper()}_BASE 0x{peripheral.base_address:04X} /* {base_comment} */\n\n")


            for register in peripheral.registers:
                reg_name = register.name.replace("_REG", "")
                reg_addr_comment = format_comment(register.description)
                file.write(f"#define {custom_prefix.upper()}_{peripheral.name.upper()}_{reg_name} ({custom_prefix.upper()}_{peripheral.name.upper()}_BASE + {custom_prefix.upper()}_{peripheral.name.upper()}_{reg_name}_OFFSET) /* {reg_addr_comment} */\n")

            file.write("\n")

            # Section for register bit definitions
            file.write("/* Register bit definitions *************************************************/\n\n")
            for register in peripheral.registers:
                for field in register.fields:
                    field_name = f"{register.name.replace('_REG', '')}_{field.name}"
                    field_comment = format_comment(field.description)
                    if field.bit_width == 1:
                        file.write(f"#define {peripheral.name.upper()}_{field_name} (1U << {field.bit_offset})) /* {field_comment} */\n")
                    else:
                        mask = (1 << field.bit_width) - 1
                        file.write(f"#define {peripheral.name.upper()}_{field_name}_MASK (0x{mask:X} << {field.bit_offset})) /* {field_comment} */\n")
                        file.write(f"#define {peripheral.name.upper()}_{field_name}_POS ({field.bit_offset})) /* {field_comment} */\n")

            file.write(f"\n#endif /* __{custom_prefix.upper()}_{peripheral.name.upper()}_H */\n")

        print(f"Generated: {filepath}")
        
        # Correct indentation in all generated files
        for file_path in generated_files:
            align_definitions_and_comments(file_path)


def process_svd(svd_path, output_dir, custom_prefix):
    svd_to_header(svd_path, output_dir, custom_prefix)
    export_memory_map(svd_path, output_dir, custom_prefix)

def main():
    parser = argparse.ArgumentParser(description="Convert SVD files to header and export memory map.")
    parser.add_argument("svd_path", help="The path to the SVD file.")
    parser.add_argument("output_dir", help="The directory to store the output files.")
    parser.add_argument("custom_prefix", help="The custom prefix to be used in the output files (example NRF53)")
    
    args = parser.parse_args()
    
    process_svd(args.svd_path, args.output_dir, args.custom_prefix)

if __name__ == "__main__":
    main()
