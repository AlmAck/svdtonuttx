# SVD to NuttX Header Converter

This repository contains a Python script [`svdtonuttx.py`] that parses an SVD (System View Description) file to extract peripheral information and generates corresponding header (.h) files formatted according to the NuttX RTOS coding standards.
This project is inspired from [svdtoheaders](https://github.com/robertlipe/svdtoheaders).

## Features

- Parses SVD files to extract peripheral information.
- Generates header files with register offsets, addresses, and bitfield masks and shifts.
- Allows for a custom prefix to be specified for consistent naming conventions.
- Aligns definitions and comments for better readability.

## Requirements

- Python 3.x
- An SVD file compatible with the script (check that it uses standard tags like [`bitOffset`], [`bitWidth`], [`lsb`], [`msb`], or [`bitRange`] for bitfield definitions).

## Usage

```sh
python3 svdtonuttx.py <svd_path> <output_dir> <custom_prefix>
```

### Arguments

- `<svd_path>`: Path to the input SVD file.
- `<output_dir>`: Directory where the generated header files will be saved.
- `<custom_prefix>`: Custom prefix to be used in the output files (e.g., 'NRF53').

### Example

```sh
python3 svdtonuttx.py STM32F4xx.svd ./headers STM32F4
```

## Script Details

### Functions

- [`format_comment(comment)`]: Formats and shortens comments to fit in one line if necessary.
- [`cleanse(description)`]: Cleans up the description for better readability in comments.
- [`humanBytes(bytes)`]: Converts size in bytes to a more human-readable format.
- [`write_header_to_file(file_handle, file_path)`]: Writes a standardized header to an open file handle.
- [`align_definitions_and_comments(file_path, value_column=2)`]: Adjusts the alignment of values and comments in the file to specified columns based on the maximum key length.
- [`export_memory_map(svd_path, output_dir, custom_prefix)`]: Generates defines for peripheral base addresses and additional info from SVD, and writes to [`memorymap.h`].
- [`svd_to_header(svd_path, output_dir, custom_prefix)`]: Creates a header file for each peripheral.
- [`process_svd(svd_path, output_dir, custom_prefix)`]: Processes the SVD file and generates the necessary headers and memory map.
- [`main()`]: Parses command-line arguments and initiates the SVD processing.

## License

This script is provided "as is", without warranty of any kind, express or implied. The author is not responsible for any damage or data loss caused by the use of this script. You are free to modify and distribute it as long as you retain this notice.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request with your changes.

## Contact

For any questions or issues, please open an issue on GitHub.
