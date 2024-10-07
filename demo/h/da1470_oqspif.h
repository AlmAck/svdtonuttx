/****************************************************************************
 * ./tmp/da1470_oqspif.h
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

#ifndef __DA1470_OQSPIF_H
#define __DA1470_OQSPIF_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_OQSPIF_OQSPIF_BURSTBRK_OFFSET       0x0034 /* Read break sequence in Auto mode */
#define DA1470_OQSPIF_OQSPIF_BURSTCMDA_OFFSET      0x000C /* The way of reading in Auto mode (command register A) */
#define DA1470_OQSPIF_OQSPIF_BURSTCMDB_OFFSET      0x0010 /* The way of reading in Auto mode (command register B) */
#define DA1470_OQSPIF_OQSPIF_CHCKERASE_OFFSET      0x003C /* Check erase progress in Auto mode */
#define DA1470_OQSPIF_OQSPIF_CTRLBUS_OFFSET        0x0000 /* SPI Bus control register for the Manual mode */
#define DA1470_OQSPIF_OQSPIF_CTRLMODE_OFFSET       0x0004 /* Mode Control register */
#define DA1470_OQSPIF_OQSPIF_CTR_CTRL_OFFSET       0x0100 /* Control register for the decryption engine of the OSPIC */
#define DA1470_OQSPIF_OQSPIF_CTR_EADDR_OFFSET      0x0108 /* End address of the encrypted content in the OSPI flash */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_0_3_OFFSET    0x0114 /* Key bytes 0 to 3 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_12_15_OFFSET  0x0120 /* Key bytes 12 to 15 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_16_19_OFFSET  0x0124 /* Key bytes 16 to 19 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_20_23_OFFSET  0x0128 /* Key bytes 20 to 23 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_24_27_OFFSET  0x012C /* Key bytes 24 to 27 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_28_31_OFFSET  0x0130 /* Key bytes 28 to 31 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_4_7_OFFSET    0x0118 /* Key bytes 4 to 7 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_8_11_OFFSET   0x011C /* Key bytes 8 to 11 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_NONCE_0_3_OFFSET  0x010C /* Nonce bytes 0 to 3 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_NONCE_4_7_OFFSET  0x0110 /* Nonce bytes 4 to 7 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_SADDR_OFFSET      0x0104 /* Start address of the encrypted content in the OSPI flash */
#define DA1470_OQSPIF_OQSPIF_DUMMYDATA_OFFSET      0x0020 /* Send dummy clocks to SPI Bus for the Manual mode */
#define DA1470_OQSPIF_OQSPIF_ERASECMDA_OFFSET      0x0028 /* The way of erasing in Auto mode (command register A) */
#define DA1470_OQSPIF_OQSPIF_ERASECMDB_OFFSET      0x002C /* The way of erasing in Auto mode (command register B) */
#define DA1470_OQSPIF_OQSPIF_ERASECMDC_OFFSET      0x0030 /* The way of erasing in Auto mode (command register C) */
#define DA1470_OQSPIF_OQSPIF_ERASECTRL_OFFSET      0x0024 /* OSPI Erase control register */
#define DA1470_OQSPIF_OQSPIF_GP_OFFSET             0x0040 /* OSPI General Purpose control register */
#define DA1470_OQSPIF_OQSPIF_READDATA_OFFSET       0x001C /* Read data from SPI Bus for the Manual mode */
#define DA1470_OQSPIF_OQSPIF_RECVDATA_OFFSET       0x0008 /* Received data for the Manual mode */
#define DA1470_OQSPIF_OQSPIF_STATUSCMD_OFFSET      0x0038 /* The way of reading the status of external device in Auto mode */
#define DA1470_OQSPIF_OQSPIF_STATUS_OFFSET         0x0014 /* The status register of the OSPI controller */
#define DA1470_OQSPIF_OQSPIF_WRITEDATA_OFFSET      0x0018 /* Write data to SPI Bus for the Manual mode */

/* Register addresses *******************************************************/

#define DA1470_OQSPIF_BASE                         0x36000000 /* OQSPIF registers */

#define DA1470_OQSPIF_OQSPIF_BURSTBRK              (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_BURSTBRK_OFFSET) /* Read break sequence in Auto mode */
#define DA1470_OQSPIF_OQSPIF_BURSTCMDA             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_BURSTCMDA_OFFSET) /* The way of reading in Auto mode (command register A) */
#define DA1470_OQSPIF_OQSPIF_BURSTCMDB             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_BURSTCMDB_OFFSET) /* The way of reading in Auto mode (command register B) */
#define DA1470_OQSPIF_OQSPIF_CHCKERASE             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CHCKERASE_OFFSET) /* Check erase progress in Auto mode */
#define DA1470_OQSPIF_OQSPIF_CTRLBUS               (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTRLBUS_OFFSET) /* SPI Bus control register for the Manual mode */
#define DA1470_OQSPIF_OQSPIF_CTRLMODE              (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTRLMODE_OFFSET) /* Mode Control register */
#define DA1470_OQSPIF_OQSPIF_CTR_CTRL              (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_CTRL_OFFSET) /* Control register for the decryption engine of the OSPIC */
#define DA1470_OQSPIF_OQSPIF_CTR_EADDR             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_EADDR_OFFSET) /* End address of the encrypted content in the OSPI flash */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_0_3           (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_KEY_0_3_OFFSET) /* Key bytes 0 to 3 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_12_15         (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_KEY_12_15_OFFSET) /* Key bytes 12 to 15 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_16_19         (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_KEY_16_19_OFFSET) /* Key bytes 16 to 19 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_20_23         (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_KEY_20_23_OFFSET) /* Key bytes 20 to 23 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_24_27         (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_KEY_24_27_OFFSET) /* Key bytes 24 to 27 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_28_31         (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_KEY_28_31_OFFSET) /* Key bytes 28 to 31 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_4_7           (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_KEY_4_7_OFFSET) /* Key bytes 4 to 7 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_KEY_8_11          (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_KEY_8_11_OFFSET) /* Key bytes 8 to 11 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_NONCE_0_3         (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_NONCE_0_3_OFFSET) /* Nonce bytes 0 to 3 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_NONCE_4_7         (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_NONCE_4_7_OFFSET) /* Nonce bytes 4 to 7 for the AES-CTR algorithm */
#define DA1470_OQSPIF_OQSPIF_CTR_SADDR             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_CTR_SADDR_OFFSET) /* Start address of the encrypted content in the OSPI flash */
#define DA1470_OQSPIF_OQSPIF_DUMMYDATA             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_DUMMYDATA_OFFSET) /* Send dummy clocks to SPI Bus for the Manual mode */
#define DA1470_OQSPIF_OQSPIF_ERASECMDA             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_ERASECMDA_OFFSET) /* The way of erasing in Auto mode (command register A) */
#define DA1470_OQSPIF_OQSPIF_ERASECMDB             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_ERASECMDB_OFFSET) /* The way of erasing in Auto mode (command register B) */
#define DA1470_OQSPIF_OQSPIF_ERASECMDC             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_ERASECMDC_OFFSET) /* The way of erasing in Auto mode (command register C) */
#define DA1470_OQSPIF_OQSPIF_ERASECTRL             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_ERASECTRL_OFFSET) /* OSPI Erase control register */
#define DA1470_OQSPIF_OQSPIF_GP                    (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_GP_OFFSET) /* OSPI General Purpose control register */
#define DA1470_OQSPIF_OQSPIF_READDATA              (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_READDATA_OFFSET) /* Read data from SPI Bus for the Manual mode */
#define DA1470_OQSPIF_OQSPIF_RECVDATA              (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_RECVDATA_OFFSET) /* Received data for the Manual mode */
#define DA1470_OQSPIF_OQSPIF_STATUSCMD             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_STATUSCMD_OFFSET) /* The way of reading the status of external device in Auto mode */
#define DA1470_OQSPIF_OQSPIF_STATUS                (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_STATUS_OFFSET) /* The status register of the OSPI controller */
#define DA1470_OQSPIF_OQSPIF_WRITEDATA             (DA1470_OQSPIF_BASE + DA1470_OQSPIF_OQSPIF_WRITEDATA_OFFSET) /* Write data to SPI Bus for the Manual mode */

/* Register bit definitions *************************************************/


/* OQSPIF_BURSTBRK Register */

#define OSPIC_BRK_EN                               (1U << 23) /* Controls the application of a special command (read burst break sequence) that i */
#define OSPIC_SEC_HF_DS                            (1U << 22) /* Disable output during the transmission of the second half (OSPIC_BRK_WRD[3:0]).  */
#define OSPIC_BRK_TX_MD_MASK                       (0x3 << 20) /* The mode of the OSPI Bus during the transmission of the burst break sequence. 0x */
#define OSPIC_BRK_TX_MD_POS                        (20) /* The mode of the OSPI Bus during the transmission of the burst break sequence. 0x */
#define OSPIC_BRK_SZ_MASK                          (0xF << 16) /* The size of Burst Break Sequence 0: One byte (Send OSPIC_BRK_WRD[15:8]) 1: Two b */
#define OSPIC_BRK_SZ_POS                           (16) /* The size of Burst Break Sequence 0: One byte (Send OSPIC_BRK_WRD[15:8]) 1: Two b */
#define OSPIC_BRK_WRD_MASK                         (0xFFFF << 0) /* This is the value of a special command (read burst break sequence) that is appli */
#define OSPIC_BRK_WRD_POS                          (0) /* This is the value of a special command (read burst break sequence) that is appli */

/* OQSPIF_BURSTCMDA Register */

#define OSPIC_DMY_TX_MD_MASK                       (0x3 << 30) /* It describes the mode of the SPI bus during the Dummy bytes phase. 0x0: Single S */
#define OSPIC_DMY_TX_MD_POS                        (30) /* It describes the mode of the SPI bus during the Dummy bytes phase. 0x0: Single S */
#define OSPIC_EXT_TX_MD_MASK                       (0x3 << 28) /* It describes the mode of the SPI bus during the Extra Byte phase. 0x0: Single SP */
#define OSPIC_EXT_TX_MD_POS                        (28) /* It describes the mode of the SPI bus during the Extra Byte phase. 0x0: Single SP */
#define OSPIC_ADR_TX_MD_MASK                       (0x3 << 26) /* It describes the mode of the SPI bus during the address phase. 0x0: Single SPI 0 */
#define OSPIC_ADR_TX_MD_POS                        (26) /* It describes the mode of the SPI bus during the address phase. 0x0: Single SPI 0 */
#define OSPIC_INST_TX_MD_MASK                      (0x3 << 24) /* It describes the mode of the SPI bus during the instruction phase. 0x0: Single S */
#define OSPIC_INST_TX_MD_POS                       (24) /* It describes the mode of the SPI bus during the instruction phase. 0x0: Single S */
#define OSPIC_EXT_BYTE_MASK                        (0xFF << 16) /* The value of an extra byte which will be transferred after address (only if OSPI */
#define OSPIC_EXT_BYTE_POS                         (16) /* The value of an extra byte which will be transferred after address (only if OSPI */
#define OSPIC_INST_WB_MASK                         (0xFF << 8) /* Instruction Value for Wrapping Burst. This value is the selected instruction whe */
#define OSPIC_INST_WB_POS                          (8) /* Instruction Value for Wrapping Burst. This value is the selected instruction whe */
#define OSPIC_INST_MASK                            (0xFF << 0) /* Instruction Value for Incremental Burst or Single read access. This value is the */
#define OSPIC_INST_POS                             (0) /* Instruction Value for Incremental Burst or Single read access. This value is the */

/* OQSPIF_BURSTCMDB Register */

#define OSPIC_CS_HIGH_MIN_MASK                     (0x7 << 16) /* Between the transmissions of two different instructions to the flash memory, the */
#define OSPIC_CS_HIGH_MIN_POS                      (16) /* Between the transmissions of two different instructions to the flash memory, the */
#define OSPIC_WRAP_SIZE_MASK                       (0x3 << 14) /* It describes the selected data size of a wrapping burst (OSPIC_WRAP_MD). 0x0: by */
#define OSPIC_WRAP_SIZE_POS                        (14) /* It describes the selected data size of a wrapping burst (OSPIC_WRAP_MD). 0x0: by */
#define OSPIC_WRAP_LEN_MASK                        (0x3 << 12) /* It describes the selected length of a wrapping burst (OSPIC_WRAP_MD). 0x0: 4 bea */
#define OSPIC_WRAP_LEN_POS                         (12) /* It describes the selected length of a wrapping burst (OSPIC_WRAP_MD). 0x0: 4 bea */
#define OSPIC_WRAP_MD                              (1U << 11) /* Wrap mode 0: The OSPIC_INST is the selected instruction at any access. 1: The OS */
#define OSPIC_INST_MD                              (1U << 10) /* Instruction mode 0: Transmit instruction at any burst access. 1: Transmit instru */
#define OSPIC_DMY_EN                               (1U << 9) /* Dummy bytes enable 0: Don't send the dummy bytes 1: Send the dummy bytes. The nu */
#define OSPIC_DMY_NUM_MASK                         (0x1F << 4) /* Number of dummy bytes (minus 1). Can be set 1 up to 32 dummy bytes (values 0 up  */
#define OSPIC_DMY_NUM_POS                          (4) /* Number of dummy bytes (minus 1). Can be set 1 up to 32 dummy bytes (values 0 up  */
#define OSPIC_EXT_HF_DS                            (1U << 3) /* Extra half disable output 0: if OSPIC_EXT_BYTE_EN=1, is transmitted the complete */
#define OSPIC_EXT_BYTE_EN                          (1U << 2) /* Extra byte enable 0: Don't send the OSPIC_EXT_BYTE 1: Send the OSPIC_EXT_BYTE */
#define OSPIC_DAT_RX_MD_MASK                       (0x3 << 0) /* It describes the mode of the SPI bus during the data phase. 0x0: Single SPI 0x1: */
#define OSPIC_DAT_RX_MD_POS                        (0) /* It describes the mode of the SPI bus during the data phase. 0x0: Single SPI 0x1: */

/* OQSPIF_CHCKERASE Register */

#define OSPIC_CHCKERASE_MASK                       (0xFFFFFFFF << 0) /* Writing any value to this register during erasing, forces the controller to read */
#define OSPIC_CHCKERASE_POS                        (0) /* Writing any value to this register during erasing, forces the controller to read */

/* OQSPIF_CTRLBUS Register */

#define OSPIC_DIS_CS                               (1U << 5) /* Write 1 to disable the chip select (active low) when the controller is in Manual */
#define OSPIC_EN_CS                                (1U << 4) /* Write 1 to enable the chip select (active low) when the controller is in Manual  */
#define OSPIC_SET_OCTAL                            (1U << 3) /* Write 1 to set the bus mode in Octal mode when the controller is in Manual mode. */
#define OSPIC_SET_QUAD                             (1U << 2) /* Write 1 to set the bus mode in Quad mode when the controller is in Manual mode. */
#define OSPIC_SET_DUAL                             (1U << 1) /* Write 1 to set the bus mode in Dual mode when the controller is in Manual mode. */
#define OSPIC_SET_SINGLE                           (1U << 0) /* Write 1 to set the bus mode in Single SPI mode when the controller is in Manual  */

/* OQSPIF_CTRLMODE Register */

#define OSPIC_IO_UH_DAT_MASK                       (0xF << 28) /* The value of OSPI_IO4-7 pads if OSPI_IO_UH_OEN is 1 */
#define OSPIC_IO_UH_DAT_POS                        (28) /* The value of OSPI_IO4-7 pads if OSPI_IO_UH_OEN is 1 */
#define OSPIC_IO_UH_OEN                            (1U << 27) /* Forces the output enable for the upper half of the OSPI bus (OSPI_IO4-7). Set th */
#define OSPIC_INC_LIM_EN                           (1U << 18) /* This bit has meaning only for the read in auto mode and only when the read acces */
#define OSPIC_RD_ERR_EN                            (1U << 17) /* Controls the generation of AHB bus error response when a read is performed in th */
#define OSPIC_MAN_DIRCHG_MD                        (1U << 16) /* Selection of the direction change method in manual mode. 0 : the bus direction g */
#define OSPIC_DMY_MD                               (1U << 15) /* Defines the clock cycle where the bus will turn in Hi-z during the transmission  */
#define OSPIC_CMD_X2_EN                            (1U << 14) /* Defines the number of bytes that consist the instruction code in the command seq */
#define OSPIC_USE_32BA                             (1U << 13) /* Controls the length of the address that the external memory device uses. 0: The  */
#define OSPIC_BUF_LIM_EN                           (1U << 12) /* This bit has meaning only for the read in auto mode. Defines the behavior of the */
#define OSPIC_PCLK_MD_MASK                         (0x7 << 9) /* Read pipe clock delay relative to the falling edge of OSPI_SCK. Refer to OSPI Ti */
#define OSPIC_PCLK_MD_POS                          (9) /* Read pipe clock delay relative to the falling edge of OSPI_SCK. Refer to OSPI Ti */
#define OSPIC_RPIPE_EN                             (1U << 8) /* Controls the use of the data read pipe. 0: The read pipe is disabled; the sampli */
#define OSPIC_RXD_NEG                              (1U << 7) /* Defines the clock edge that is used for the capturing of the received data, when */
#define OSPIC_HRDY_MD                              (1U << 6) /* This configuration bit is useful when the frequency of the OSPI clock is much lo */
#define OSPIC_IO3_DAT                              (1U << 5) /* The value of OSPI_IO3 pad if OSPI_IO3_OEN is 1 */
#define OSPIC_IO2_DAT                              (1U << 4) /* The value of OSPI_IO2 pad if OSPI_IO2_OEN is 1 */
#define OSPIC_IO3_OEN                              (1U << 3) /* Forces the output enable of the OSPI_IO3. Set this bit to 1 only in SPI or Dual  */
#define OSPIC_IO2_OEN                              (1U << 2) /* Forces the output enable of the OSPI_IO2. Set this bit to 1 only in SPI or Dual  */
#define OSPIC_CLK_MD                               (1U << 1) /* Mode of the generated OSPI_SCK clock 0: Use Mode 0 for the OSPI_CLK. The OSPI_SC */
#define OSPIC_AUTO_MD                              (1U << 0) /* Mode of operation 0: The Manual Mode is selected. 1: The Auto Mode is selected.  */

/* OQSPIF_CTR_CTRL Register */

#define OSPIC_CTR_EN                               (1U << 0) /* Controls the AES-CTR decryption feature of the OSPIC, which enables the decrypti */

/* OQSPIF_CTR_EADDR Register */

#define OSPIC_CTR_EADDR_MASK                       (0x3FFFFF << 10) /* Defines the bits [31:10] of the end address in the flash memory, where an encryp */
#define OSPIC_CTR_EADDR_POS                        (10) /* Defines the bits [31:10] of the end address in the flash memory, where an encryp */

/* OQSPIF_CTR_KEY_0_3 Register */

#define OSPIC_CTR_KEY_0_3_MASK                     (0xFFFFFFFF << 0) /* Defines the key that is used by the AES-CTR algorithm, when the on-the-fly decry */
#define OSPIC_CTR_KEY_0_3_POS                      (0) /* Defines the key that is used by the AES-CTR algorithm, when the on-the-fly decry */

/* OQSPIF_CTR_KEY_12_15 Register */

#define OSPIC_CTR_KEY_12_15_MASK                   (0xFFFFFFFF << 0) /* See the description in the OSPIC_CTR_KEY_0_3. */
#define OSPIC_CTR_KEY_12_15_POS                    (0) /* See the description in the OSPIC_CTR_KEY_0_3. */

/* OQSPIF_CTR_KEY_16_19 Register */

#define OSPIC_CTR_KEY_16_19_MASK                   (0xFFFFFFFF << 0) /* See the description in the OSPIC_CTR_KEY_0_3. */
#define OSPIC_CTR_KEY_16_19_POS                    (0) /* See the description in the OSPIC_CTR_KEY_0_3. */

/* OQSPIF_CTR_KEY_20_23 Register */

#define OSPIC_CTR_KEY_20_23_MASK                   (0xFFFFFFFF << 0) /* See the description in the OSPIC_CTR_KEY_0_3. */
#define OSPIC_CTR_KEY_20_23_POS                    (0) /* See the description in the OSPIC_CTR_KEY_0_3. */

/* OQSPIF_CTR_KEY_24_27 Register */

#define OSPIC_CTR_KEY_24_27_MASK                   (0xFFFFFFFF << 0) /* See the description in the OSPIC_CTR_KEY_0_3. */
#define OSPIC_CTR_KEY_24_27_POS                    (0) /* See the description in the OSPIC_CTR_KEY_0_3. */

/* OQSPIF_CTR_KEY_28_31 Register */

#define OSPIC_CTR_KEY_28_31_MASK                   (0xFFFFFFFF << 0) /* See the description in the OSPIC_CTR_KEY_0_3. */
#define OSPIC_CTR_KEY_28_31_POS                    (0) /* See the description in the OSPIC_CTR_KEY_0_3. */

/* OQSPIF_CTR_KEY_4_7 Register */

#define OSPIC_CTR_KEY_4_7_MASK                     (0xFFFFFFFF << 0) /* See the description in the OSPIC_CTR_KEY_0_3. */
#define OSPIC_CTR_KEY_4_7_POS                      (0) /* See the description in the OSPIC_CTR_KEY_0_3. */

/* OQSPIF_CTR_KEY_8_11 Register */

#define OSPIC_CTR_KEY_8_11_MASK                    (0xFFFFFFFF << 0) /* See the description in the OSPIC_CTR_KEY_0_3. */
#define OSPIC_CTR_KEY_8_11_POS                     (0) /* See the description in the OSPIC_CTR_KEY_0_3. */

/* OQSPIF_CTR_NONCE_0_3 Register */

#define OSPIC_CTR_NONCE_0_3_MASK                   (0xFFFFFFFF << 0) /* Defines the 8 bytes of the nonce value (N0 - N7) that is used by the AES-CTR alg */
#define OSPIC_CTR_NONCE_0_3_POS                    (0) /* Defines the 8 bytes of the nonce value (N0 - N7) that is used by the AES-CTR alg */

/* OQSPIF_CTR_NONCE_4_7 Register */

#define OSPIC_CTR_NONCE_4_7_MASK                   (0xFFFFFFFF << 0) /* See the description in the OSPIC_NONCE_0_3. */
#define OSPIC_CTR_NONCE_4_7_POS                    (0) /* See the description in the OSPIC_NONCE_0_3. */

/* OQSPIF_CTR_SADDR Register */

#define OSPIC_CTR_SADDR_MASK                       (0x3FFFFF << 10) /* Defines the bits [31:10] of the start address in the flash memory, where an encr */
#define OSPIC_CTR_SADDR_POS                        (10) /* Defines the bits [31:10] of the start address in the flash memory, where an encr */

/* OQSPIF_DUMMYDATA Register */

#define OSPIC_DUMMYDATA_MASK                       (0xFFFFFFFF << 0) /* Writing to this register generates a number of clock pulses to the SPI bus. Duri */
#define OSPIC_DUMMYDATA_POS                        (0) /* Writing to this register generates a number of clock pulses to the SPI bus. Duri */

/* OQSPIF_ERASECMDA Register */

#define OSPIC_RES_INST_MASK                        (0xFF << 24) /* The code value of the erase resume instruction */
#define OSPIC_RES_INST_POS                         (24) /* The code value of the erase resume instruction */
#define OSPIC_SUS_INST_MASK                        (0xFF << 16) /* The code value of the erase suspend instruction. */
#define OSPIC_SUS_INST_POS                         (16) /* The code value of the erase suspend instruction. */
#define OSPIC_WEN_INST_MASK                        (0xFF << 8) /* The code value of the write enable instruction. */
#define OSPIC_WEN_INST_POS                         (8) /* The code value of the write enable instruction. */
#define OSPIC_ERS_INST_MASK                        (0xFF << 0) /* The code value of the erase instruction. */
#define OSPIC_ERS_INST_POS                         (0) /* The code value of the erase instruction. */

/* OQSPIF_ERASECMDB Register */

#define OSPIC_RESSUS_DLY_MASK                      (0xFF << 24) /* Defines a timer that counts the minimum allowed delay between an erase suspend c */
#define OSPIC_RESSUS_DLY_POS                       (24) /* Defines a timer that counts the minimum allowed delay between an erase suspend c */
#define OSPIC_ERSRES_HLD_MASK                      (0xF << 16) /* The controller must stay without flash memory reading requests for this number o */
#define OSPIC_ERSRES_HLD_POS                       (16) /* The controller must stay without flash memory reading requests for this number o */
#define OSPIC_ERS_CS_HI_MASK                       (0x1F << 10) /* After the execution of instructions: write enable, erase, erase suspend and eras */
#define OSPIC_ERS_CS_HI_POS                        (10) /* After the execution of instructions: write enable, erase, erase suspend and eras */
#define OSPIC_EAD_TX_MD_MASK                       (0x3 << 8) /* The mode of the OSPI Bus during the address phase of the erase instruction 0x0:  */
#define OSPIC_EAD_TX_MD_POS                        (8) /* The mode of the OSPI Bus during the address phase of the erase instruction 0x0:  */
#define OSPIC_RES_TX_MD_MASK                       (0x3 << 6) /* The mode of the OSPI Bus during the transmission of the resume instruction 0x0:  */
#define OSPIC_RES_TX_MD_POS                        (6) /* The mode of the OSPI Bus during the transmission of the resume instruction 0x0:  */
#define OSPIC_SUS_TX_MD_MASK                       (0x3 << 4) /* The mode of the OSPI Bus during the transmission of the suspend instruction. 0x0 */
#define OSPIC_SUS_TX_MD_POS                        (4) /* The mode of the OSPI Bus during the transmission of the suspend instruction. 0x0 */
#define OSPIC_WEN_TX_MD_MASK                       (0x3 << 2) /* The mode of the OSPI Bus during the transmission of the write enable instruction */
#define OSPIC_WEN_TX_MD_POS                        (2) /* The mode of the OSPI Bus during the transmission of the write enable instruction */
#define OSPIC_ERS_TX_MD_MASK                       (0x3 << 0) /* The mode of the OSPI Bus during the instruction phase of the erase instruction 0 */
#define OSPIC_ERS_TX_MD_POS                        (0) /* The mode of the OSPI Bus during the instruction phase of the erase instruction 0 */

/* OQSPIF_ERASECMDC Register */

#define OSPIC_SUSSTS_DLY_MASK                      (0x3F << 0) /* Defines a timer that counts the minimum allowed delay between an erase suspend c */
#define OSPIC_SUSSTS_DLY_POS                       (0) /* Defines a timer that counts the minimum allowed delay between an erase suspend c */

/* OQSPIF_ERASECTRL Register */

#define OSPIC_ERS_RES_DIS                          (1U << 28) /* This configuration bit has meaning when an erase has been suspended. Normally th */
#define OSPIC_ERS_STATE_MASK                       (0x7 << 25) /* It shows the progress of sector/block erasing (read only). 0x0: No Erase. 0x1: P */
#define OSPIC_ERS_STATE_POS                        (25) /* It shows the progress of sector/block erasing (read only). 0x0: No Erase. 0x1: P */
#define OSPIC_ERASE_EN                             (1U << 24) /* During Manual mode (OSPIC_AUTO_MD = 0). This bit is in read only mode. During Au */
#define OSPIC_ERS_ADDR_MASK                        (0xFFFFF << 4) /* Defines the address of the block/sector that is requested to be erased. If OSPIC */
#define OSPIC_ERS_ADDR_POS                         (4) /* Defines the address of the block/sector that is requested to be erased. If OSPIC */

/* OQSPIF_GP Register */

#define OSPIC_PADS_SLEW_MASK                       (0x3 << 3) /* QSPI pads slew rate control. Indicative values under certain conditions: 0: Rise */
#define OSPIC_PADS_SLEW_POS                        (3) /* QSPI pads slew rate control. Indicative values under certain conditions: 0: Rise */
#define OSPIC_PADS_DRV_MASK                        (0x3 << 1) /* QSPI pads drive current 0: 4 mA 1: 8 mA 2: 12 mA 3: 16 mA */
#define OSPIC_PADS_DRV_POS                         (1) /* QSPI pads drive current 0: 4 mA 1: 8 mA 2: 12 mA 3: 16 mA */

/* OQSPIF_READDATA Register */

#define OSPIC_READDATA_MASK                        (0xFFFFFFFF << 0) /* A read access at this register generates a data transfer from the external memor */
#define OSPIC_READDATA_POS                         (0) /* A read access at this register generates a data transfer from the external memor */

/* OQSPIF_RECVDATA Register */

#define OSPIC_RECVDATA_MASK                        (0xFFFFFFFF << 0) /* This register contains the received data when the OSPIC_READDATA_REG register is */
#define OSPIC_RECVDATA_POS                         (0) /* This register contains the received data when the OSPIC_READDATA_REG register is */

/* OQSPIF_STATUSCMD Register */

#define OSPIC_RSTAT_DMY_ZERO                       (1U << 30) /* Defines the value of that is transferred on the OSPI bus during the phase of the */
#define OSPIC_RSTAT_DMY_TX_MD_MASK                 (0x3 << 28) /* It describes the mode of the OSPI bus during the dummy bytes phase. 0x0: Single  */
#define OSPIC_RSTAT_DMY_TX_MD_POS                  (28) /* It describes the mode of the OSPI bus during the dummy bytes phase. 0x0: Single  */
#define OSPIC_RSTAT_DMY_NUM_MASK                   (0xF << 24) /* Number of dummy bytes (minus 1). Can be set 1 up to 16 dummy bytes (values 0 up  */
#define OSPIC_RSTAT_DMY_NUM_POS                    (24) /* Number of dummy bytes (minus 1). Can be set 1 up to 16 dummy bytes (values 0 up  */
#define OSPIC_RSTAT_DMY_EN                         (1U << 23) /* Enables the transmission of dummy bytes, immediately after the instruction code  */
#define OSPIC_STSDLY_SEL                           (1U << 22) /* Defines the timer which is used to count the delay that it has to wait before to */
#define OSPIC_RESSTS_DLY_MASK                      (0x3F << 16) /* Defines a timer that counts the minimum required delay between the reading of th */
#define OSPIC_RESSTS_DLY_POS                       (16) /* Defines a timer that counts the minimum required delay between the reading of th */
#define OSPIC_BUSY_VAL                             (1U << 15) /* Defines the value of the Busy bit which means that the flash is busy. 0: The fla */
#define OSPIC_BUSY_POS_MASK                        (0x7 << 12) /* It describes who from the bits of status represents the Busy bit (7 - 0). */
#define OSPIC_BUSY_POS_POS                         (12) /* It describes who from the bits of status represents the Busy bit (7 - 0). */
#define OSPIC_RSTAT_RX_MD_MASK                     (0x3 << 10) /* The mode of the OSPI Bus during the receive status phase of the read status inst */
#define OSPIC_RSTAT_RX_MD_POS                      (10) /* The mode of the OSPI Bus during the receive status phase of the read status inst */
#define OSPIC_RSTAT_TX_MD_MASK                     (0x3 << 8) /* The mode of the OSPI Bus during the instruction phase of the read status instruc */
#define OSPIC_RSTAT_TX_MD_POS                      (8) /* The mode of the OSPI Bus during the instruction phase of the read status instruc */
#define OSPIC_RSTAT_INST_MASK                      (0xFF << 0) /* The code value of the read status instruction. It is transmitted during the inst */
#define OSPIC_RSTAT_INST_POS                       (0) /* The code value of the read status instruction. It is transmitted during the inst */

/* OQSPIF_STATUS Register */

#define OSPIC_BUSY                                 (1U << 0) /* The status of the SPI Bus.  0: The SPI Bus is idle 1: The SPI Bus is active. Rea */

/* OQSPIF_WRITEDATA Register */

#define OSPIC_WRITEDATA_MASK                       (0xFFFFFFFF << 0) /* Writing to this register is generating a data transfer from the controller to th */
#define OSPIC_WRITEDATA_POS                        (0) /* Writing to this register is generating a data transfer from the controller to th */

#endif /* __DA1470_OQSPIF_H */
