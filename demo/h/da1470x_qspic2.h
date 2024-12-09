/****************************************************************************
 * ./tmp/da1470x_qspic2.h
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

#ifndef __DA1470X_QSPIC2_H
#define __DA1470X_QSPIC2_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_QSPIC2_QSPIC2_AWRITECMD_OFFSET  0x0040 /* The way of writing in Auto mode when the external device is a serial SRAM */
#define DA1470X_QSPIC2_QSPIC2_BURSTBRK_OFFSET   0x0030 /* Read break sequence in Auto mode */
#define DA1470X_QSPIC2_QSPIC2_BURSTCMDA_OFFSET  0x000C /* The way of reading in Auto mode (command register A) */
#define DA1470X_QSPIC2_QSPIC2_BURSTCMDB_OFFSET  0x0010 /* The way of reading in Auto mode (command register B) */
#define DA1470X_QSPIC2_QSPIC2_CHCKERASE_OFFSET  0x0038 /* Check erase progress in Auto mode */
#define DA1470X_QSPIC2_QSPIC2_CTRLBUS_OFFSET    0x0000 /* SPI Bus control register for the Manual mode */
#define DA1470X_QSPIC2_QSPIC2_CTRLMODE_OFFSET   0x0004 /* Mode control register */
#define DA1470X_QSPIC2_QSPIC2_DUMMYDATA_OFFSET  0x0020 /* Send dummy clocks to SPI Bus for the Manual mode */
#define DA1470X_QSPIC2_QSPIC2_ERASECMDA_OFFSET  0x0028 /* The way of erasing in Auto mode (command register A) */
#define DA1470X_QSPIC2_QSPIC2_ERASECMDB_OFFSET  0x002C /* The way of erasing in Auto mode (command register B) */
#define DA1470X_QSPIC2_QSPIC2_ERASECTRL_OFFSET  0x0024 /* Erase control register */
#define DA1470X_QSPIC2_QSPIC2_GP_OFFSET         0x003C /* General purpose QSPIC2 register */
#define DA1470X_QSPIC2_QSPIC2_MEMBLEN_OFFSET    0x0044 /* External memory burst length configuration */
#define DA1470X_QSPIC2_QSPIC2_READDATA_OFFSET   0x001C /* Read data from SPI Bus for the Manual mode */
#define DA1470X_QSPIC2_QSPIC2_RECVDATA_OFFSET   0x0008 /* Received data for the Manual mode */
#define DA1470X_QSPIC2_QSPIC2_STATUSCMD_OFFSET  0x0034 /* The way of reading the status of external device in Auto mode */
#define DA1470X_QSPIC2_QSPIC2_STATUS_OFFSET     0x0014 /* The status register of the QSPI controller */
#define DA1470X_QSPIC2_QSPIC2_WRITEDATA_OFFSET  0x0018 /* Write data to SPI Bus for the Manual mode */

/* Register addresses *******************************************************/

#define DA1470X_QSPIC2_BASE                     0x26000000 /* QSPIC2 registers */

#define DA1470X_QSPIC2_QSPIC2_AWRITECMD         (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_AWRITECMD_OFFSET) /* The way of writing in Auto mode when the external device is a serial SRAM */
#define DA1470X_QSPIC2_QSPIC2_BURSTBRK          (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_BURSTBRK_OFFSET) /* Read break sequence in Auto mode */
#define DA1470X_QSPIC2_QSPIC2_BURSTCMDA         (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_BURSTCMDA_OFFSET) /* The way of reading in Auto mode (command register A) */
#define DA1470X_QSPIC2_QSPIC2_BURSTCMDB         (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_BURSTCMDB_OFFSET) /* The way of reading in Auto mode (command register B) */
#define DA1470X_QSPIC2_QSPIC2_CHCKERASE         (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_CHCKERASE_OFFSET) /* Check erase progress in Auto mode */
#define DA1470X_QSPIC2_QSPIC2_CTRLBUS           (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_CTRLBUS_OFFSET) /* SPI Bus control register for the Manual mode */
#define DA1470X_QSPIC2_QSPIC2_CTRLMODE          (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_CTRLMODE_OFFSET) /* Mode control register */
#define DA1470X_QSPIC2_QSPIC2_DUMMYDATA         (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_DUMMYDATA_OFFSET) /* Send dummy clocks to SPI Bus for the Manual mode */
#define DA1470X_QSPIC2_QSPIC2_ERASECMDA         (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_ERASECMDA_OFFSET) /* The way of erasing in Auto mode (command register A) */
#define DA1470X_QSPIC2_QSPIC2_ERASECMDB         (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_ERASECMDB_OFFSET) /* The way of erasing in Auto mode (command register B) */
#define DA1470X_QSPIC2_QSPIC2_ERASECTRL         (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_ERASECTRL_OFFSET) /* Erase control register */
#define DA1470X_QSPIC2_QSPIC2_GP                (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_GP_OFFSET) /* General purpose QSPIC2 register */
#define DA1470X_QSPIC2_QSPIC2_MEMBLEN           (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_MEMBLEN_OFFSET) /* External memory burst length configuration */
#define DA1470X_QSPIC2_QSPIC2_READDATA          (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_READDATA_OFFSET) /* Read data from SPI Bus for the Manual mode */
#define DA1470X_QSPIC2_QSPIC2_RECVDATA          (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_RECVDATA_OFFSET) /* Received data for the Manual mode */
#define DA1470X_QSPIC2_QSPIC2_STATUSCMD         (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_STATUSCMD_OFFSET) /* The way of reading the status of external device in Auto mode */
#define DA1470X_QSPIC2_QSPIC2_STATUS            (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_STATUS_OFFSET) /* The status register of the QSPI controller */
#define DA1470X_QSPIC2_QSPIC2_WRITEDATA         (DA1470X_QSPIC2_BASE + DA1470X_QSPIC2_QSPIC2_WRITEDATA_OFFSET) /* Write data to SPI Bus for the Manual mode */

/* Register bit definitions *************************************************/


/* QSPIC2_AWRITECMD Register */

#define QSPIC2_QSPIC_WR_CS_HIGH_MIN_MASK        (0x1F << 14) /* After the execution of the write command, the QSPI_CS remains high for at least  */
#define QSPIC2_QSPIC_WR_CS_HIGH_MIN_POS         (14) /* After the execution of the write command, the QSPI_CS remains high for at least  */
#define QSPIC2_QSPIC_WR_DAT_TX_MD_MASK          (0x3 << 12) /* The mode of the SPI Bus during the data phase of the write command. 0x0: Single  */
#define QSPIC2_QSPIC_WR_DAT_TX_MD_POS           (12) /* The mode of the SPI Bus during the data phase of the write command. 0x0: Single  */
#define QSPIC2_QSPIC_WR_ADR_TX_MD_MASK          (0x3 << 10) /* The mode of the SPI Bus during the adress phase of the write command. 0x0: Singl */
#define QSPIC2_QSPIC_WR_ADR_TX_MD_POS           (10) /* The mode of the SPI Bus during the adress phase of the write command. 0x0: Singl */
#define QSPIC2_QSPIC_WR_INST_TX_MD_MASK         (0x3 << 8) /* The mode of the SPI Bus during the instruction phase of the write command. 0x0:  */
#define QSPIC2_QSPIC_WR_INST_TX_MD_POS          (8) /* The mode of the SPI Bus during the instruction phase of the write command. 0x0:  */
#define QSPIC2_QSPIC_WR_INST_MASK               (0xFF << 0) /* This is the value of the instruction that is used, in order to be programmed the */
#define QSPIC2_QSPIC_WR_INST_POS                (0) /* This is the value of the instruction that is used, in order to be programmed the */

/* QSPIC2_BURSTBRK Register */

#define QSPIC2_QSPIC_SEC_HF_DS                  (1U << 20) /* Disable output during the transmission of the second half (QSPIC_BRK_WRD[3:0]).  */
#define QSPIC2_QSPIC_BRK_TX_MD_MASK             (0x3 << 18) /* The mode of the SPI Bus during the transmission of the read break sequence. 0x0: */
#define QSPIC2_QSPIC_BRK_TX_MD_POS              (18) /* The mode of the SPI Bus during the transmission of the read break sequence. 0x0: */
#define QSPIC2_QSPIC_BRK_SZ                     (1U << 17) /* The size of the read break sequence. 0: One byte (Send QSPIC_BRK_WRD[15:8]) 1: T */
#define QSPIC2_QSPIC_BRK_EN                     (1U << 16) /* Controls the application of a special command (read break sequence) that is used */
#define QSPIC2_QSPIC_BRK_WRD_MASK               (0xFFFF << 0) /* This is the value of a special command (read break sequence) that is applied by  */
#define QSPIC2_QSPIC_BRK_WRD_POS                (0) /* This is the value of a special command (read break sequence) that is applied by  */

/* QSPIC2_BURSTCMDA Register */

#define QSPIC2_QSPIC_DMY_TX_MD_MASK             (0x3 << 30) /* It describes the mode of the SPI bus during the Dummy bytes phase. 0x0: Single S */
#define QSPIC2_QSPIC_DMY_TX_MD_POS              (30) /* It describes the mode of the SPI bus during the Dummy bytes phase. 0x0: Single S */
#define QSPIC2_QSPIC_EXT_TX_MD_MASK             (0x3 << 28) /* It describes the mode of the SPI bus during the Extra Byte phase. 0x0: Single SP */
#define QSPIC2_QSPIC_EXT_TX_MD_POS              (28) /* It describes the mode of the SPI bus during the Extra Byte phase. 0x0: Single SP */
#define QSPIC2_QSPIC_ADR_TX_MD_MASK             (0x3 << 26) /* It describes the mode of the SPI bus during the address phase. 0x0: Single SPI 0 */
#define QSPIC2_QSPIC_ADR_TX_MD_POS              (26) /* It describes the mode of the SPI bus during the address phase. 0x0: Single SPI 0 */
#define QSPIC2_QSPIC_INST_TX_MD_MASK            (0x3 << 24) /* It describes the mode of the SPI bus during the instruction phase. 0x0: Single S */
#define QSPIC2_QSPIC_INST_TX_MD_POS             (24) /* It describes the mode of the SPI bus during the instruction phase. 0x0: Single S */
#define QSPIC2_QSPIC_EXT_BYTE_MASK              (0xFF << 16) /* The value of an extra byte which will be transferred after address (only if QSPI */
#define QSPIC2_QSPIC_EXT_BYTE_POS               (16) /* The value of an extra byte which will be transferred after address (only if QSPI */
#define QSPIC2_QSPIC_INST_WB_MASK               (0xFF << 8) /* Instruction Value for Wrapping Burst. This value is the selected instruction whe */
#define QSPIC2_QSPIC_INST_WB_POS                (8) /* Instruction Value for Wrapping Burst. This value is the selected instruction whe */
#define QSPIC2_QSPIC_INST_MASK                  (0xFF << 0) /* Instruction Value for Incremental Burst or Single read access. This value is the */
#define QSPIC2_QSPIC_INST_POS                   (0) /* Instruction Value for Incremental Burst or Single read access. This value is the */

/* QSPIC2_BURSTCMDB Register */

#define QSPIC2_QSPIC_DMY_FORCE                  (1U << 15) /* By setting this bit, the number of dummy bytes is forced to be equal to 3. In th */
#define QSPIC2_QSPIC_CS_HIGH_MIN_MASK           (0x7 << 12) /* Between the transmission of two different instructions to the flash memory, the  */
#define QSPIC2_QSPIC_CS_HIGH_MIN_POS            (12) /* Between the transmission of two different instructions to the flash memory, the  */
#define QSPIC2_QSPIC_WRAP_SIZE_MASK             (0x3 << 10) /* It describes the selected data size of a wrapping burst (QSPIC_WRAP_MD). 0x0: By */
#define QSPIC2_QSPIC_WRAP_SIZE_POS              (10) /* It describes the selected data size of a wrapping burst (QSPIC_WRAP_MD). 0x0: By */
#define QSPIC2_QSPIC_WRAP_LEN_MASK              (0x3 << 8) /* It describes the selected length of a wrapping burst (QSPIC_WRAP_MD). 0x0: 4 bea */
#define QSPIC2_QSPIC_WRAP_LEN_POS               (8) /* It describes the selected length of a wrapping burst (QSPIC_WRAP_MD). 0x0: 4 bea */
#define QSPIC2_QSPIC_WRAP_MD                    (1U << 7) /* Wrap mode 0: The QSPIC_INST is the selected instruction at any access. 1: The QS */
#define QSPIC2_QSPIC_INST_MD                    (1U << 6) /* Instruction mode 0: Transmit instruction at any burst access. 1: Transmit instru */
#define QSPIC2_QSPIC_DMY_NUM_MASK               (0x3 << 4) /* Number of Dummy Bytes  0x0: Zero Dummy Bytes (Don't Send Dummy Bytes) 0x1: Send  */
#define QSPIC2_QSPIC_DMY_NUM_POS                (4) /* Number of Dummy Bytes  0x0: Zero Dummy Bytes (Don't Send Dummy Bytes) 0x1: Send  */
#define QSPIC2_QSPIC_EXT_HF_DS                  (1U << 3) /* Extra Half Disable Output 0: if QSPIC_EXT_BYTE_EN=1 then transmit the complete Q */
#define QSPIC2_QSPIC_EXT_BYTE_EN                (1U << 2) /* Extra Byte Enable 0: Don't Send QSPIC_EXT_BYTE 1: Send QSPIC_EXT_BYTE */
#define QSPIC2_QSPIC_DAT_RX_MD_MASK             (0x3 << 0) /* It describes the mode of the SPI bus during the data phase. 0x0: Single SPI 0x1: */
#define QSPIC2_QSPIC_DAT_RX_MD_POS              (0) /* It describes the mode of the SPI bus during the data phase. 0x0: Single SPI 0x1: */

/* QSPIC2_CHCKERASE Register */

#define QSPIC2_QSPIC_CHCKERASE_MASK             (0xFFFFFFFF << 0) /* Writing any value to this register during erasing, forces the controller to read */
#define QSPIC2_QSPIC_CHCKERASE_POS              (0) /* Writing any value to this register during erasing, forces the controller to read */

/* QSPIC2_CTRLBUS Register */

#define QSPIC2_QSPIC_DIS_CS                     (1U << 4) /* Write 1 to disable the chip select (active low) when the controller is in Manual */
#define QSPIC2_QSPIC_EN_CS                      (1U << 3) /* Write 1 to enable the chip select (active low) when the controller is in Manual  */
#define QSPIC2_QSPIC_SET_QUAD                   (1U << 2) /* Write 1 to set the bus mode in Quad mode when the controller is in Manual mode. */
#define QSPIC2_QSPIC_SET_DUAL                   (1U << 1) /* Write 1 to set the bus mode in Dual mode when the controller is in Manual mode. */
#define QSPIC2_QSPIC_SET_SINGLE                 (1U << 0) /* Write 1 to set the bus mode in Single SPI mode when the controller is in Manual  */

/* QSPIC2_CTRLMODE Register */

#define QSPIC2_QSPIC_CLK_FREE_EN                (1U << 16) /* Controls the behavior of the QSPI_SCK when the QSPI_CS is high and the QSPIC_CS_ */
#define QSPIC2_QSPIC_CS_MD                      (1U << 15) /* Controls the clock edge with which is produced the QSPI_CS signal. 0: The QSPI_C */
#define QSPIC2_QSPIC_SRAM_EN                    (1U << 14) /* Defines the type of the external device that is connected on the QSPIC controlle */
#define QSPIC2_QSPIC_USE_32BA                   (1U << 13) /* Controls the length of the address that the external memory device uses. 0: The  */
#define QSPIC2_QSPIC_FORCENSEQ_EN               (1U << 12) /* Controls the way with which is addressed by the QSPI controller a burst request  */
#define QSPIC2_QSPIC_PCLK_MD_MASK               (0x7 << 9) /* Controls the read pipe clock delay relative to the falling edge of QSPI_SCK. Ref */
#define QSPIC2_QSPIC_PCLK_MD_POS                (9) /* Controls the read pipe clock delay relative to the falling edge of QSPI_SCK. Ref */
#define QSPIC2_QSPIC_RPIPE_EN                   (1U << 8) /* Controls the use of the data read pipe. 0: The read pipe is disabled, the sampli */
#define QSPIC2_QSPIC_RXD_NEG                    (1U << 7) /* Defines the clock edge that is used for the capturing of the received data, when */
#define QSPIC2_QSPIC_HRDY_MD                    (1U << 6) /* This configuration bit is useful when the frequency of the QSPI clock is much lo */
#define QSPIC2_QSPIC_IO3_DAT                    (1U << 5) /* The value of QSPI_IO3 pad if QSPI_IO3_OEN is 1 */
#define QSPIC2_QSPIC_IO2_DAT                    (1U << 4) /* The value of QSPI_IO2 pad if QSPI_IO2_OEN is 1 */
#define QSPIC2_QSPIC_IO3_OEN                    (1U << 3) /* QSPI_IO3 output enable. Use this only in SPI or Dual SPI mode to control /HOLD s */
#define QSPIC2_QSPIC_IO2_OEN                    (1U << 2) /* QSPI_IO2 output enable. Use this only in SPI or Dual SPI mode to control /WP sig */
#define QSPIC2_QSPIC_CLK_MD                     (1U << 1) /* Mode of the generated QSPI_SCK clock  0: Use Mode 0 for the QSPI_CLK. The QSPI_S */
#define QSPIC2_QSPIC_AUTO_MD                    (1U << 0) /* Mode of operation 0: The Manual Mode is selected. 1: The Auto Mode is selected.  */

/* QSPIC2_DUMMYDATA Register */

#define QSPIC2_QSPIC_DUMMYDATA_MASK             (0xFFFFFFFF << 0) /* Writing to this register generates a number of clock pulses to the SPI bus. Duri */
#define QSPIC2_QSPIC_DUMMYDATA_POS              (0) /* Writing to this register generates a number of clock pulses to the SPI bus. Duri */

/* QSPIC2_ERASECMDA Register */

#define QSPIC2_QSPIC_RES_INST_MASK              (0xFF << 24) /* The code value of the erase resume instruction */
#define QSPIC2_QSPIC_RES_INST_POS               (24) /* The code value of the erase resume instruction */
#define QSPIC2_QSPIC_SUS_INST_MASK              (0xFF << 16) /* The code value of the erase suspend instruction. */
#define QSPIC2_QSPIC_SUS_INST_POS               (16) /* The code value of the erase suspend instruction. */
#define QSPIC2_QSPIC_WEN_INST_MASK              (0xFF << 8) /* The code value of the write enable instruction. */
#define QSPIC2_QSPIC_WEN_INST_POS               (8) /* The code value of the write enable instruction. */
#define QSPIC2_QSPIC_ERS_INST_MASK              (0xFF << 0) /* The code value of the erase instruction. */
#define QSPIC2_QSPIC_ERS_INST_POS               (0) /* The code value of the erase instruction. */

/* QSPIC2_ERASECMDB Register */

#define QSPIC2_QSPIC_RESSUS_DLY_MASK            (0x3F << 24) /* Defines a timer that counts the minimum allowed delay between an erase suspend c */
#define QSPIC2_QSPIC_RESSUS_DLY_POS             (24) /* Defines a timer that counts the minimum allowed delay between an erase suspend c */
#define QSPIC2_QSPIC_ERSRES_HLD_MASK            (0xF << 16) /* The controller must stay without flash memory reading requests for this number o */
#define QSPIC2_QSPIC_ERSRES_HLD_POS             (16) /* The controller must stay without flash memory reading requests for this number o */
#define QSPIC2_QSPIC_ERS_CS_HI_MASK             (0x1F << 10) /* After the execution of instructions: write enable, erase, erase suspend and eras */
#define QSPIC2_QSPIC_ERS_CS_HI_POS              (10) /* After the execution of instructions: write enable, erase, erase suspend and eras */
#define QSPIC2_QSPIC_EAD_TX_MD_MASK             (0x3 << 8) /* The mode of the SPI Bus during the address phase of the erase instruction 0x0: S */
#define QSPIC2_QSPIC_EAD_TX_MD_POS              (8) /* The mode of the SPI Bus during the address phase of the erase instruction 0x0: S */
#define QSPIC2_QSPIC_RES_TX_MD_MASK             (0x3 << 6) /* The mode of the SPI Bus during the transmission of the resume instruction 0x0: S */
#define QSPIC2_QSPIC_RES_TX_MD_POS              (6) /* The mode of the SPI Bus during the transmission of the resume instruction 0x0: S */
#define QSPIC2_QSPIC_SUS_TX_MD_MASK             (0x3 << 4) /* The mode of the SPI Bus during the transmission of the suspend instruction. 0x0: */
#define QSPIC2_QSPIC_SUS_TX_MD_POS              (4) /* The mode of the SPI Bus during the transmission of the suspend instruction. 0x0: */
#define QSPIC2_QSPIC_WEN_TX_MD_MASK             (0x3 << 2) /* The mode of the SPI Bus during the transmission of the write enable instruction. */
#define QSPIC2_QSPIC_WEN_TX_MD_POS              (2) /* The mode of the SPI Bus during the transmission of the write enable instruction. */
#define QSPIC2_QSPIC_ERS_TX_MD_MASK             (0x3 << 0) /* The mode of the SPI Bus during the instruction phase of the erase instruction 0x */
#define QSPIC2_QSPIC_ERS_TX_MD_POS              (0) /* The mode of the SPI Bus during the instruction phase of the erase instruction 0x */

/* QSPIC2_ERASECTRL Register */

#define QSPIC2_QSPIC_ERS_STATE_MASK             (0x7 << 25) /* It shows the progress of sector/block erasing (read only). 0x0: No Erase. 0x1: P */
#define QSPIC2_QSPIC_ERS_STATE_POS              (25) /* It shows the progress of sector/block erasing (read only). 0x0: No Erase. 0x1: P */
#define QSPIC2_QSPIC_ERASE_EN                   (1U << 24) /* This bit has meaning only when the external device is a serial FLASH (QSPIC_SRAM */
#define QSPIC2_QSPIC_ERS_ADDR_MASK              (0xFFFFF << 4) /* Defines the address of the block/sector that is requested to be erased. If QSPIC */
#define QSPIC2_QSPIC_ERS_ADDR_POS               (4) /* Defines the address of the block/sector that is requested to be erased. If QSPIC */

/* QSPIC2_GP Register */

#define QSPIC2_QSPIC_PADS_SLEW_MASK             (0x3 << 3) /* QSPI pads slew rate control. Indicative values under certain conditions: 0x0 : R */
#define QSPIC2_QSPIC_PADS_SLEW_POS              (3) /* QSPI pads slew rate control. Indicative values under certain conditions: 0x0 : R */
#define QSPIC2_QSPIC_PADS_DRV_MASK              (0x3 << 1) /* QSPI pads drive current 0x0 : 4 mA 0x1 : 8 mA 0x2 : 12 mA 0x3 : 16 mA */
#define QSPIC2_QSPIC_PADS_DRV_POS               (1) /* QSPI pads drive current 0x0 : 4 mA 0x1 : 8 mA 0x2 : 12 mA 0x3 : 16 mA */

/* QSPIC2_MEMBLEN Register */

#define QSPIC2_QSPIC_T_CEM_CC_MASK              (0x3FF << 4) /* Defines the maximum allowed time tCEM for which the QSPIC_CS can stay active (QS */
#define QSPIC2_QSPIC_T_CEM_CC_POS               (4) /* Defines the maximum allowed time tCEM for which the QSPIC_CS can stay active (QS */
#define QSPIC2_QSPIC_T_CEM_EN                   (1U << 3) /* This bit enables the controlling of the maximum time tCEM for which the QSPI_CS  */
#define QSPIC2_QSPIC_MEMBLEN_MASK               (0x7 << 0) /* In this register is defined the expected behavior of the external memory device  */
#define QSPIC2_QSPIC_MEMBLEN_POS                (0) /* In this register is defined the expected behavior of the external memory device  */

/* QSPIC2_READDATA Register */

#define QSPIC2_QSPIC_READDATA_MASK              (0xFFFFFFFF << 0) /* A read access at this register generates a data transfer from the external memor */
#define QSPIC2_QSPIC_READDATA_POS               (0) /* A read access at this register generates a data transfer from the external memor */

/* QSPIC2_RECVDATA Register */

#define QSPIC2_QSPIC_RECVDATA_MASK              (0xFFFFFFFF << 0) /* This register contains the received data when the QSPIC_READDATA_REG register is */
#define QSPIC2_QSPIC_RECVDATA_POS               (0) /* This register contains the received data when the QSPIC_READDATA_REG register is */

/* QSPIC2_STATUSCMD Register */

#define QSPIC2_QSPIC_STSDLY_SEL                 (1U << 22) /* Defines the timer which is used to count the delay that it has to wait before to */
#define QSPIC2_QSPIC_RESSTS_DLY_MASK            (0x3F << 16) /* Defines a timer that counts the minimum required delay between the reading of th */
#define QSPIC2_QSPIC_RESSTS_DLY_POS             (16) /* Defines a timer that counts the minimum required delay between the reading of th */
#define QSPIC2_QSPIC_BUSY_VAL                   (1U << 15) /* Defines the value of the Busy bit which means that the flash is busy. 0: The fla */
#define QSPIC2_QSPIC_BUSY_POS_MASK              (0x7 << 12) /* Defines the bit of the Flash status register which represents the Busy bit (0x7  */
#define QSPIC2_QSPIC_BUSY_POS_POS               (12) /* Defines the bit of the Flash status register which represents the Busy bit (0x7  */
#define QSPIC2_QSPIC_RSTAT_RX_MD_MASK           (0x3 << 10) /* The mode of the SPI Bus during the reception phase of the read status instructio */
#define QSPIC2_QSPIC_RSTAT_RX_MD_POS            (10) /* The mode of the SPI Bus during the reception phase of the read status instructio */
#define QSPIC2_QSPIC_RSTAT_TX_MD_MASK           (0x3 << 8) /* The mode of the SPI Bus during the instruction phase of the read status instruct */
#define QSPIC2_QSPIC_RSTAT_TX_MD_POS            (8) /* The mode of the SPI Bus during the instruction phase of the read status instruct */
#define QSPIC2_QSPIC_RSTAT_INST_MASK            (0xFF << 0) /* The code value of the read status instruction. It is transmitted during the inst */
#define QSPIC2_QSPIC_RSTAT_INST_POS             (0) /* The code value of the read status instruction. It is transmitted during the inst */

/* QSPIC2_STATUS Register */

#define QSPIC2_QSPIC_BUSY                       (1U << 0) /* The status of the SPI Bus.  0: The SPI Bus is idle 1: The SPI Bus is active. Rea */

/* QSPIC2_WRITEDATA Register */

#define QSPIC2_QSPIC_WRITEDATA_MASK             (0xFFFFFFFF << 0) /* Writing to this register is generating a data transfer from the controller to th */
#define QSPIC2_QSPIC_WRITEDATA_POS              (0) /* Writing to this register is generating a data transfer from the controller to th */

#endif /* __DA1470X_QSPIC2_H */
