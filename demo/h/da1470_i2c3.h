/****************************************************************************
 * ./tmp/da1470_i2c3.h
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

#ifndef __DA1470_I2C3_H
#define __DA1470_I2C3_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_I2C3_I2C3_ACK_GENERAL_CALL_OFFSET  0x0098 /* I2C ACK General Call Register */
#define DA1470_I2C3_I2C3_CLR_ACTIVITY_OFFSET      0x005C /* Clear ACTIVITY Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_GEN_CALL_OFFSET      0x0068 /* Clear GEN_CALL Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_INTR_OFFSET          0x0040 /* Clear Combined and Individual Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_RD_REQ_OFFSET        0x0050 /* Clear RD_REQ Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_RX_DONE_OFFSET       0x0058 /* Clear RX_DONE Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_RX_OVER_OFFSET       0x0048 /* Clear RX_OVER Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_RX_UNDER_OFFSET      0x0044 /* Clear RX_UNDER Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_START_DET_OFFSET     0x0064 /* Clear START_DET Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_STOP_DET_OFFSET      0x0060 /* Clear STOP_DET Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_TX_ABRT_OFFSET       0x0054 /* Clear TX_ABRT Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_TX_OVER_OFFSET       0x004C /* Clear TX_OVER Interrupt Register */
#define DA1470_I2C3_I2C3_CON_OFFSET               0x0000 /* I2C Control Register */
#define DA1470_I2C3_I2C3_DATA_CMD_OFFSET          0x0010 /* I2C Rx/Tx Data Buffer and Command Register */
#define DA1470_I2C3_I2C3_DMA_CR_OFFSET            0x0088 /* DMA Control Register */
#define DA1470_I2C3_I2C3_DMA_RDLR_OFFSET          0x0090 /* I2C Receive Data Level Register */
#define DA1470_I2C3_I2C3_DMA_TDLR_OFFSET          0x008C /* DMA Transmit Data Level Register */
#define DA1470_I2C3_I2C3_ENABLE_OFFSET            0x006C /* I2C Enable Register */
#define DA1470_I2C3_I2C3_ENABLE_STATUS_OFFSET     0x009C /* I2C Enable Status Register */
#define DA1470_I2C3_I2C3_FS_SCL_HCNT_OFFSET       0x001C /* Fast Speed I2C Clock SCL High Count Register */
#define DA1470_I2C3_I2C3_FS_SCL_LCNT_OFFSET       0x0020 /* Fast Speed I2C Clock SCL Low Count Register */
#define DA1470_I2C3_I2C3_HS_MADDR_OFFSET          0x000C /* I2C High Speed Master Mode Code Address Register */
#define DA1470_I2C3_I2C3_HS_SCL_HCNT_OFFSET       0x0024 /* High Speed I2C Clock SCL High Count Register */
#define DA1470_I2C3_I2C3_HS_SCL_LCNT_OFFSET       0x0028 /* High Speed I2C Clock SCL Low Count Register */
#define DA1470_I2C3_I2C3_IC_FS_SPKLEN_OFFSET      0x00A0 /* I2C SS and FS spike suppression limit Size */
#define DA1470_I2C3_I2C3_IC_HS_SPKLEN_OFFSET      0x00A4 /* I2C HS spike suppression limit Size */
#define DA1470_I2C3_I2C3_INTR_MASK_OFFSET         0x0030 /* I2C Interrupt Mask Register */
#define DA1470_I2C3_I2C3_INTR_STAT_OFFSET         0x002C /* I2C Interrupt Status Register */
#define DA1470_I2C3_I2C3_RAW_INTR_STAT_OFFSET     0x0034 /* I2C Raw Interrupt Status Register */
#define DA1470_I2C3_I2C3_RXFLR_OFFSET             0x0078 /* I2C Receive FIFO Level Register */
#define DA1470_I2C3_I2C3_RX_TL_OFFSET             0x0038 /* I2C Receive FIFO Threshold Register */
#define DA1470_I2C3_I2C3_SAR_OFFSET               0x0008 /* I2C Slave Address Register */
#define DA1470_I2C3_I2C3_SDA_HOLD_OFFSET          0x007C /* I2C SDA Hold Time Length Register */
#define DA1470_I2C3_I2C3_SDA_SETUP_OFFSET         0x0094 /* I2C SDA Setup Register */
#define DA1470_I2C3_I2C3_SS_SCL_HCNT_OFFSET       0x0014 /* Standard Speed I2C Clock SCL High Count Register */
#define DA1470_I2C3_I2C3_SS_SCL_LCNT_OFFSET       0x0018 /* Standard Speed I2C Clock SCL Low Count Register */
#define DA1470_I2C3_I2C3_STATUS_OFFSET            0x0070 /* I2C Status Register */
#define DA1470_I2C3_I2C3_TAR_OFFSET               0x0004 /* I2C Target Address Register */
#define DA1470_I2C3_I2C3_TXFLR_OFFSET             0x0074 /* I2C Transmit FIFO Level Register */
#define DA1470_I2C3_I2C3_TX_ABRT_SOURCE_OFFSET    0x0080 /* I2C Transmit Abort Source Register */
#define DA1470_I2C3_I2C3_TX_TL_OFFSET             0x003C /* I2C Transmit FIFO Threshold Register */

/* Register addresses *******************************************************/

#define DA1470_I2C3_BASE                          0x50020500 /* I2C3 registers */

#define DA1470_I2C3_I2C3_ACK_GENERAL_CALL         (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_ACK_GENERAL_CALL_OFFSET) /* I2C ACK General Call Register */
#define DA1470_I2C3_I2C3_CLR_ACTIVITY             (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_ACTIVITY_OFFSET) /* Clear ACTIVITY Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_GEN_CALL             (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_GEN_CALL_OFFSET) /* Clear GEN_CALL Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_INTR                 (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_INTR_OFFSET) /* Clear Combined and Individual Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_RD_REQ               (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_RD_REQ_OFFSET) /* Clear RD_REQ Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_RX_DONE              (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_RX_DONE_OFFSET) /* Clear RX_DONE Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_RX_OVER              (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_RX_OVER_OFFSET) /* Clear RX_OVER Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_RX_UNDER             (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_RX_UNDER_OFFSET) /* Clear RX_UNDER Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_START_DET            (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_START_DET_OFFSET) /* Clear START_DET Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_STOP_DET             (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_STOP_DET_OFFSET) /* Clear STOP_DET Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_TX_ABRT              (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_TX_ABRT_OFFSET) /* Clear TX_ABRT Interrupt Register */
#define DA1470_I2C3_I2C3_CLR_TX_OVER              (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CLR_TX_OVER_OFFSET) /* Clear TX_OVER Interrupt Register */
#define DA1470_I2C3_I2C3_CON                      (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_CON_OFFSET) /* I2C Control Register */
#define DA1470_I2C3_I2C3_DATA_CMD                 (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_DATA_CMD_OFFSET) /* I2C Rx/Tx Data Buffer and Command Register */
#define DA1470_I2C3_I2C3_DMA_CR                   (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_DMA_CR_OFFSET) /* DMA Control Register */
#define DA1470_I2C3_I2C3_DMA_RDLR                 (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_DMA_RDLR_OFFSET) /* I2C Receive Data Level Register */
#define DA1470_I2C3_I2C3_DMA_TDLR                 (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_DMA_TDLR_OFFSET) /* DMA Transmit Data Level Register */
#define DA1470_I2C3_I2C3_ENABLE                   (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_ENABLE_OFFSET) /* I2C Enable Register */
#define DA1470_I2C3_I2C3_ENABLE_STATUS            (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_ENABLE_STATUS_OFFSET) /* I2C Enable Status Register */
#define DA1470_I2C3_I2C3_FS_SCL_HCNT              (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_FS_SCL_HCNT_OFFSET) /* Fast Speed I2C Clock SCL High Count Register */
#define DA1470_I2C3_I2C3_FS_SCL_LCNT              (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_FS_SCL_LCNT_OFFSET) /* Fast Speed I2C Clock SCL Low Count Register */
#define DA1470_I2C3_I2C3_HS_MADDR                 (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_HS_MADDR_OFFSET) /* I2C High Speed Master Mode Code Address Register */
#define DA1470_I2C3_I2C3_HS_SCL_HCNT              (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_HS_SCL_HCNT_OFFSET) /* High Speed I2C Clock SCL High Count Register */
#define DA1470_I2C3_I2C3_HS_SCL_LCNT              (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_HS_SCL_LCNT_OFFSET) /* High Speed I2C Clock SCL Low Count Register */
#define DA1470_I2C3_I2C3_IC_FS_SPKLEN             (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_IC_FS_SPKLEN_OFFSET) /* I2C SS and FS spike suppression limit Size */
#define DA1470_I2C3_I2C3_IC_HS_SPKLEN             (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_IC_HS_SPKLEN_OFFSET) /* I2C HS spike suppression limit Size */
#define DA1470_I2C3_I2C3_INTR_MASK                (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_INTR_MASK_OFFSET) /* I2C Interrupt Mask Register */
#define DA1470_I2C3_I2C3_INTR_STAT                (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_INTR_STAT_OFFSET) /* I2C Interrupt Status Register */
#define DA1470_I2C3_I2C3_RAW_INTR_STAT            (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_RAW_INTR_STAT_OFFSET) /* I2C Raw Interrupt Status Register */
#define DA1470_I2C3_I2C3_RXFLR                    (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_RXFLR_OFFSET) /* I2C Receive FIFO Level Register */
#define DA1470_I2C3_I2C3_RX_TL                    (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_RX_TL_OFFSET) /* I2C Receive FIFO Threshold Register */
#define DA1470_I2C3_I2C3_SAR                      (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_SAR_OFFSET) /* I2C Slave Address Register */
#define DA1470_I2C3_I2C3_SDA_HOLD                 (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_SDA_HOLD_OFFSET) /* I2C SDA Hold Time Length Register */
#define DA1470_I2C3_I2C3_SDA_SETUP                (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_SDA_SETUP_OFFSET) /* I2C SDA Setup Register */
#define DA1470_I2C3_I2C3_SS_SCL_HCNT              (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_SS_SCL_HCNT_OFFSET) /* Standard Speed I2C Clock SCL High Count Register */
#define DA1470_I2C3_I2C3_SS_SCL_LCNT              (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_SS_SCL_LCNT_OFFSET) /* Standard Speed I2C Clock SCL Low Count Register */
#define DA1470_I2C3_I2C3_STATUS                   (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_STATUS_OFFSET) /* I2C Status Register */
#define DA1470_I2C3_I2C3_TAR                      (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_TAR_OFFSET) /* I2C Target Address Register */
#define DA1470_I2C3_I2C3_TXFLR                    (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_TXFLR_OFFSET) /* I2C Transmit FIFO Level Register */
#define DA1470_I2C3_I2C3_TX_ABRT_SOURCE           (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_TX_ABRT_SOURCE_OFFSET) /* I2C Transmit Abort Source Register */
#define DA1470_I2C3_I2C3_TX_TL                    (DA1470_I2C3_BASE + DA1470_I2C3_I2C3_TX_TL_OFFSET) /* I2C Transmit FIFO Threshold Register */

/* Register bit definitions *************************************************/


/* I2C3_ACK_GENERAL_CALL Register */

#define I2C3_ACK_GEN_CALL                         (1U << 0) /* ACK General Call. When set to 1, I2C Ctrl responds with a ACK (by asserting ic_d */

/* I2C3_CLR_ACTIVITY Register */

#define I2C3_CLR_ACTIVITY                         (1U << 0) /* Reading this register clears the ACTIVITY interrupt if the I2C is not active any */

/* I2C3_CLR_GEN_CALL Register */

#define I2C3_CLR_GEN_CALL                         (1U << 0) /* Read this register to clear the GEN_CALL interrupt (bit 11) of I2C_RAW_INTR_STAT */

/* I2C3_CLR_INTR Register */

#define I2C3_CLR_INTR                             (1U << 0) /* Read this register to clear the combined interrupt, all individual interrupts, a */

/* I2C3_CLR_RD_REQ Register */

#define I2C3_CLR_RD_REQ                           (1U << 0) /* Read this register to clear the RD_REQ interrupt (bit 5) of the I2C_RAW_INTR_STA */

/* I2C3_CLR_RX_DONE Register */

#define I2C3_CLR_RX_DONE                          (1U << 0) /* Read this register to clear the RX_DONE interrupt (bit 7) of the I2C_RAW_INTR_ST */

/* I2C3_CLR_RX_OVER Register */

#define I2C3_CLR_RX_OVER                          (1U << 0) /* Read this register to clear the RX_OVER interrupt (bit 1) of the I2C_RAW_INTR_ST */

/* I2C3_CLR_RX_UNDER Register */

#define I2C3_CLR_RX_UNDER                         (1U << 0) /* Read this register to clear the RX_UNDER interrupt (bit 0) of the I2C_RAW_INTR_S */

/* I2C3_CLR_START_DET Register */

#define I2C3_CLR_START_DET                        (1U << 0) /* Read this register to clear the START_DET interrupt (bit 10) of the IC_RAW_INTR_ */

/* I2C3_CLR_STOP_DET Register */

#define I2C3_CLR_STOP_DET                         (1U << 0) /* Read this register to clear the STOP_DET interrupt (bit 9) of the IC_RAW_INTR_ST */

/* I2C3_CLR_TX_ABRT Register */

#define I2C3_CLR_TX_ABRT                          (1U << 0) /* Read this register to clear the TX_ABRT interrupt (bit 6) of the IC_RAW_INTR_STA */

/* I2C3_CLR_TX_OVER Register */

#define I2C3_CLR_TX_OVER                          (1U << 0) /* Read this register to clear the TX_OVER interrupt (bit 3) of the I2C_RAW_INTR_ST */

/* I2C3_CON Register */

#define I2C3_I2C_STOP_DET_IF_MASTER_ACTIVE        (1U << 10) /* In Master mode: 1 = issues the STOP_DET interrupt only when master is active. 0  */
#define I2C3_I2C_RX_FIFO_FULL_HLD_CTRL            (1U << 9) /* This bit controls whether DW_apb_i2c should hold the bus when the Rx FIFO is phy */
#define I2C3_I2C_TX_EMPTY_CTRL                    (1U << 8) /* This bit controls the generation of the TX_EMPTY interrupt, as described in the  */
#define I2C3_I2C_STOP_DET_IFADDRESSED             (1U << 7) /* 1 = slave issues STOP_DET intr only if addressed 0 = slave issues STOP_DET intr  */
#define I2C3_I2C_SLAVE_DISABLE                    (1U << 6) /* Slave enabled or disabled after reset is applied, which means software does not  */
#define I2C3_I2C_RESTART_EN                       (1U << 5) /* Determines whether RESTART conditions may be sent when acting as a master 0= dis */
#define I2C3_I2C_10BITADDR_MASTER                 (1U << 4) /* Controls whether the controller starts its transfers in 7- or 10-bit addressing  */
#define I2C3_I2C_10BITADDR_SLAVE                  (1U << 3) /* When acting as a slave, this bit controls whether the controller responds to 7-  */
#define I2C3_I2C_SPEED_MASK                       (0x3 << 1) /* These bits control at which speed the controller operates. 1= standard mode (100 */
#define I2C3_I2C_SPEED_POS                        (1) /* These bits control at which speed the controller operates. 1= standard mode (100 */
#define I2C3_I2C_MASTER_MODE                      (1U << 0) /* This bit controls whether the controller master is enabled. 0= master disabled 1 */

/* I2C3_DATA_CMD Register */

#define I2C3_I2C_RESTART                          (1U << 10) /* This bit controls whether a RESTART is issued before the byte is sent or receive */
#define I2C3_I2C_STOP                             (1U << 9) /* This bit controls whether a STOP is issued after the byte is sent or received. 1 */
#define I2C3_I2C_CMD                              (1U << 8) /* This bit controls whether a read or a write is performed. This bit does not cont */
#define I2C3_I2C_DAT_MASK                         (0xFF << 0) /* This register contains the data to be transmitted or received on the I2C bus. If */
#define I2C3_I2C_DAT_POS                          (0) /* This register contains the data to be transmitted or received on the I2C bus. If */

/* I2C3_DMA_CR Register */

#define I2C3_TDMAE                                (1U << 1) /* Transmit DMA Enable. //This bit enables/disables the transmit FIFO DMA channel.  */
#define I2C3_RDMAE                                (1U << 0) /* Receive DMA Enable. This bit enables/disables the receive FIFO DMA channel. 0 =  */

/* I2C3_DMA_RDLR Register */

#define I2C3_DMARDL_MASK                          (0x1F << 0) /* Receive Data Level. This bit field controls the level at which a DMA request is  */
#define I2C3_DMARDL_POS                           (0) /* Receive Data Level. This bit field controls the level at which a DMA request is  */

/* I2C3_DMA_TDLR Register */

#define I2C3_DMATDL_MASK                          (0x1F << 0) /* Transmit Data Level. This bit field controls the level at which a DMA request is */
#define I2C3_DMATDL_POS                           (0) /* Transmit Data Level. This bit field controls the level at which a DMA request is */

/* I2C3_ENABLE Register */

#define I2C3_I2C_TX_CMD_BLOCK                     (1U << 2) /* In Master mode: 1 = Blocks the transmission of data on I2C bus even if Tx FIFO h */
#define I2C3_I2C_ABORT                            (1U << 1) /* The software can abort the I2C transfer in master mode by setting this bit. The  */
#define I2C3_I2C_EN                               (1U << 0) /* Controls whether the controller is enabled. 0 = Disables the controller (TX and  */

/* I2C3_ENABLE_STATUS Register */

#define I2C3_SLV_RX_DATA_LOST                     (1U << 2) /* Slave Received Data Lost. This bit indicates if a Slave-Receiver operation has b */
#define I2C3_SLV_DISABLED_WHILE_BUSY              (1U << 1) /* Slave Disabled While Busy (Transmit, Receive). This bit indicates if a potential */
#define I2C3_IC_EN                                (1U << 0) /* ic_en Status. This bit always reflects the value driven on the output port ic_en */

/* I2C3_FS_SCL_HCNT Register */

#define I2C3_IC_FS_SCL_HCNT_MASK                  (0xFFFF << 0) /* This register must be set before any I2C bus transaction can take place to ensur */
#define I2C3_IC_FS_SCL_HCNT_POS                   (0) /* This register must be set before any I2C bus transaction can take place to ensur */

/* I2C3_FS_SCL_LCNT Register */

#define I2C3_IC_FS_SCL_LCNT_MASK                  (0xFFFF << 0) /* This register must be set before any I2C bus transaction can take place to ensur */
#define I2C3_IC_FS_SCL_LCNT_POS                   (0) /* This register must be set before any I2C bus transaction can take place to ensur */

/* I2C3_HS_MADDR Register */

#define I2C3_I2C_IC_HS_MAR_MASK                   (0x7 << 0) /* This bit field holds the value of the I2C HS mode master code. HS-mode master co */
#define I2C3_I2C_IC_HS_MAR_POS                    (0) /* This bit field holds the value of the I2C HS mode master code. HS-mode master co */

/* I2C3_HS_SCL_HCNT Register */

#define I2C3_IC_HS_SCL_HCNT_MASK                  (0xFFFF << 0) /* This register must be set before any I2C bus transaction can take place to ensur */
#define I2C3_IC_HS_SCL_HCNT_POS                   (0) /* This register must be set before any I2C bus transaction can take place to ensur */

/* I2C3_HS_SCL_LCNT Register */

#define I2C3_IC_HS_SCL_LCNT_MASK                  (0xFFFF << 0) /* This register must be set before any I2C bus transaction can take place to ensur */
#define I2C3_IC_HS_SCL_LCNT_POS                   (0) /* This register must be set before any I2C bus transaction can take place to ensur */

/* I2C3_IC_FS_SPKLEN Register */

#define I2C3_I2C_FS_SPKLEN_MASK                   (0xFF << 0) /* This register must be set before any I2C bus transaction can take place to ensur */
#define I2C3_I2C_FS_SPKLEN_POS                    (0) /* This register must be set before any I2C bus transaction can take place to ensur */

/* I2C3_IC_HS_SPKLEN Register */

#define I2C3_I2C_HS_SPKLEN_MASK                   (0xFF << 0) /* This register must be set before any I2C bus transaction can take place to ensur */
#define I2C3_I2C_HS_SPKLEN_POS                    (0) /* This register must be set before any I2C bus transaction can take place to ensur */

/* I2C3_INTR_MASK Register */

#define I2C3_M_SCL_STUCK_AT_LOW                   (1U << 14) /* M_SCL_STUCK_AT_LOW Register field Reserved bits */
#define I2C3_M_MASTER_ON_HOLD                     (1U << 13) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_RESTART_DET                        (1U << 12) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_GEN_CALL                           (1U << 11) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_START_DET                          (1U << 10) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_STOP_DET                           (1U << 9) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_ACTIVITY                           (1U << 8) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_RX_DONE                            (1U << 7) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_TX_ABRT                            (1U << 6) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_RD_REQ                             (1U << 5) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_TX_EMPTY                           (1U << 4) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_TX_OVER                            (1U << 3) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_RX_FULL                            (1U << 2) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_RX_OVER                            (1U << 1) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */
#define I2C3_M_RX_UNDER                           (1U << 0) /* These bits mask their corresponding interrupt status bits in the I2C_INTR_STAT r */

/* I2C3_INTR_STAT Register */

#define I2C3_R_SCL_STUCK_AT_LOW                   (1U << 14) /* 1 = R_SCL_STUCK_AT_LOW interrupt is active 0 = R_SCL_STUCK_AT_LOW interrupt is i */
#define I2C3_R_MASTER_ON_HOLD                     (1U << 13) /* Indicates whether master is holding the bus and TX FIFO is empty. Enabled only w */
#define I2C3_R_RESTART_DET                        (1U << 12) /* Indicates whether a RESTART condition has occurred on the I2C interface when DW_ */
#define I2C3_R_GEN_CALL                           (1U << 11) /* Set only when a General Call address is received and it is acknowledged. It stay */
#define I2C3_R_START_DET                          (1U << 10) /* Indicates whether a START or RESTART condition has occurred on the I2C interface */
#define I2C3_R_STOP_DET                           (1U << 9) /* Indicates whether a STOP condition has occurred on the I2C interface regardless  */
#define I2C3_R_ACTIVITY                           (1U << 8) /* This bit captures I2C Ctrl activity and stays set until it is cleared. There are */
#define I2C3_R_RX_DONE                            (1U << 7) /* When the controller is acting as a slave-transmitter, this bit is set to 1 if th */
#define I2C3_R_TX_ABRT                            (1U << 6) /* This bit indicates if the controller, as an I2C transmitter, is unable to comple */
#define I2C3_R_RD_REQ                             (1U << 5) /* This bit is set to 1 when the controller is acting as a slave and another I2C ma */
#define I2C3_R_TX_EMPTY                           (1U << 4) /* This bit is set to 1 when the transmit buffer is at or below the threshold value */
#define I2C3_R_TX_OVER                            (1U << 3) /* Set during transmit if the transmit buffer is filled to 32 and the processor att */
#define I2C3_R_RX_FULL                            (1U << 2) /* Set when the receive buffer reaches or goes above the RX_TL threshold in the I2C */
#define I2C3_R_RX_OVER                            (1U << 1) /* Set if the receive buffer is completely filled to 32 and an additional byte is r */
#define I2C3_R_RX_UNDER                           (1U << 0) /* Set if the processor attempts to read the receive buffer when it is empty by rea */

/* I2C3_RAW_INTR_STAT Register */

#define I2C3_SCL_STUCK_AT_LOW                     (1U << 14) /* CL_STUCK_AT_LOW Register field Reserved bits */
#define I2C3_MASTER_ON_HOLD                       (1U << 13) /* ndicates whether master is holding the bus and TX FIFO is empty. Enabled only wh */
#define I2C3_RESTART_DET                          (1U << 12) /* Indicates whether a RESTART condition has occurred on the I2C interface when DW_ */
#define I2C3_GEN_CALL                             (1U << 11) /* Set only when a General Call address is received and it is acknowledged. It stay */
#define I2C3_START_DET                            (1U << 10) /* Indicates whether a START or RESTART condition has occurred on the I2C interface */
#define I2C3_STOP_DET                             (1U << 9) /* Indicates whether a STOP condition has occurred on the I2C interface regardless  */
#define I2C3_ACTIVITY                             (1U << 8) /* This bit captures I2C Ctrl activity and stays set until it is cleared. There are */
#define I2C3_RX_DONE                              (1U << 7) /* When the controller is acting as a slave-transmitter, this bit is set to 1 if th */
#define I2C3_TX_ABRT                              (1U << 6) /* This bit indicates if the controller, as an I2C transmitter, is unable to comple */
#define I2C3_RD_REQ                               (1U << 5) /* This bit is set to 1 when I2C Ctrl is acting as a slave and another I2C master i */
#define I2C3_TX_EMPTY                             (1U << 4) /* This bit is set to 1 when the transmit buffer is at or below the threshold value */
#define I2C3_TX_OVER                              (1U << 3) /* Set during transmit if the transmit buffer is filled to 32 and the processor att */
#define I2C3_RX_FULL                              (1U << 2) /* Set when the receive buffer reaches or goes above the RX_TL threshold in the I2C */
#define I2C3_RX_OVER                              (1U << 1) /* Set if the receive buffer is completely filled to 32 and an additional byte is r */
#define I2C3_RX_UNDER                             (1U << 0) /* Set if the processor attempts to read the receive buffer when it is empty by rea */

/* I2C3_RXFLR Register */

#define I2C3_RXFLR_MASK                           (0x3F << 0) /* Receive FIFO Level. Contains the number of valid data entries in the receive FIF */
#define I2C3_RXFLR_POS                            (0) /* Receive FIFO Level. Contains the number of valid data entries in the receive FIF */

/* I2C3_RX_TL Register */

#define I2C3_RX_TL_MASK                           (0x1F << 0) /* Receive FIFO Threshold Level Controls the level of entries (or above) that trigg */
#define I2C3_RX_TL_POS                            (0) /* Receive FIFO Threshold Level Controls the level of entries (or above) that trigg */

/* I2C3_SAR Register */

#define I2C3_IC_SAR_MASK                          (0x3FF << 0) /* The IC_SAR holds the slave address when the I2C is operating as a slave. For 7-b */
#define I2C3_IC_SAR_POS                           (0) /* The IC_SAR holds the slave address when the I2C is operating as a slave. For 7-b */

/* I2C3_SDA_HOLD Register */

#define I2C3_I2C_SDA_RX_HOLD_MASK                 (0xFF << 16) /* Sets the required SDA hold time in units of ic_clk period, when receiver. */
#define I2C3_I2C_SDA_RX_HOLD_POS                  (16) /* Sets the required SDA hold time in units of ic_clk period, when receiver. */
#define I2C3_I2C_SDA_TX_HOLD_MASK                 (0xFFFF << 0) /* Sets the required SDA hold time in units of ic_clk period, when transmitter. */
#define I2C3_I2C_SDA_TX_HOLD_POS                  (0) /* Sets the required SDA hold time in units of ic_clk period, when transmitter. */

/* I2C3_SDA_SETUP Register */

#define I2C3_SDA_SETUP_MASK                       (0xFF << 0) /* SDA Setup. This register controls the amount of time delay (number of I2C clock  */
#define I2C3_SDA_SETUP_POS                        (0) /* SDA Setup. This register controls the amount of time delay (number of I2C clock  */

/* I2C3_SS_SCL_HCNT Register */

#define I2C3_IC_SS_SCL_HCNT_MASK                  (0xFFFF << 0) /* This register must be set before any I2C bus transaction can take place to ensur */
#define I2C3_IC_SS_SCL_HCNT_POS                   (0) /* This register must be set before any I2C bus transaction can take place to ensur */

/* I2C3_SS_SCL_LCNT Register */

#define I2C3_IC_SS_SCL_LCNT_MASK                  (0xFFFF << 0) /* This register must be set before any I2C bus transaction can take place to ensur */
#define I2C3_IC_SS_SCL_LCNT_POS                   (0) /* This register must be set before any I2C bus transaction can take place to ensur */

/* I2C3_STATUS Register */

#define I2C3_LV_HOLD_RX_FIFO_FULL                 (1U << 10) /* This bit indicates the BUS Hold in Slave mode due to Rx FIFO is Full and an addi */
#define I2C3_SLV_HOLD_TX_FIFO_EMPTY               (1U << 9) /* This bit indicates the BUS Hold in Slave mode for the Read request when the Tx F */
#define I2C3_MST_HOLD_RX_FIFO_FULL                (1U << 8) /* This bit indicates the BUS Hold in Master mode due to Rx FIFO is Full and additi */
#define I2C3_MST_HOLD_TX_FIFO_EMPTY               (1U << 7) /* the DW_apb_i2c master stalls the write transfer when Tx FIFO is empty, and the t */
#define I2C3_SLV_ACTIVITY                         (1U << 6) /* Slave FSM Activity Status. When the Slave Finite State Machine (FSM) is not in t */
#define I2C3_MST_ACTIVITY                         (1U << 5) /* Master FSM Activity Status. When the Master Finite State Machine (FSM) is not in */
#define I2C3_RFF                                  (1U << 4) /* Receive FIFO Completely Full. When the receive FIFO is completely full, this bit */
#define I2C3_RFNE                                 (1U << 3) /* Receive FIFO Not Empty. This bit is set when the receive FIFO contains one or mo */
#define I2C3_TFE                                  (1U << 2) /* Transmit FIFO Completely Empty. When the transmit FIFO is completely empty, this */
#define I2C3_TFNF                                 (1U << 1) /* Transmit FIFO Not Full. Set when the transmit FIFO contains one or more empty lo */
#define I2C3_I2C_ACTIVITY                         (1U << 0) /* I2C Activity Status. */

/* I2C3_TAR Register */

#define I2C3_SPECIAL                              (1U << 11) /* On read This bit indicates whether software performs a General Call or START BYT */
#define I2C3_GC_OR_START                          (1U << 10) /* On read If bit 11 (SPECIAL) is set to 1, then this bit indicates whether a Gener */
#define I2C3_IC_TAR_MASK                          (0x3FF << 0) /* This is the target address for any master transaction. When transmitting a Gener */
#define I2C3_IC_TAR_POS                           (0) /* This is the target address for any master transaction. When transmitting a Gener */

/* I2C3_TXFLR Register */

#define I2C3_TXFLR_MASK                           (0x3F << 0) /* Transmit FIFO Level. Contains the number of valid data entries in the transmit F */
#define I2C3_TXFLR_POS                            (0) /* Transmit FIFO Level. Contains the number of valid data entries in the transmit F */

/* I2C3_TX_ABRT_SOURCE Register */

#define I2C3_ABRT_USER_ABRT                       (1U << 16) /* Master-Transmitter : This is a master-mode-only bit. Master has detected the tra */
#define I2C3_ABRT_SLVRD_INTX                      (1U << 15) /* Slave-Transmitter : When the processor side responds to a slave mode request for */
#define I2C3_ABRT_SLV_ARBLOST                     (1U << 14) /* Slave-Transmitter : Slave lost the bus while transmitting data to a remote maste */
#define I2C3_ABRT_SLVFLUSH_TXFIFO                 (1U << 13) /* Slave-Transmitter : Slave has received a read command and some data exists in th */
#define I2C3_ARB_LOST                             (1U << 12) /* Master-Transmitter or Slave-Transmitter : Master has lost arbitration, or if I2C */
#define I2C3_ABRT_MASTER_DIS                      (1U << 11) /* Master-Transmitter or Master-Receiver : User tries to initiate a Master operatio */
#define I2C3_ABRT_10B_RD_NORSTRT                  (1U << 10) /* Master-Receiver : The restart is disabled (IC_RESTART_EN bit (I2C_CON[5]) = 0) a */
#define I2C3_ABRT_SBYTE_NORSTRT                   (1U << 9) /* Master : To clear Bit 9, the source of the ABRT_SBYTE_NORSTRT must be fixed firs */
#define I2C3_ABRT_HS_NORSTRT                      (1U << 8) /* Master-Transmitter or Master-Receiver : The restart is disabled (IC_RESTART_EN b */
#define I2C3_ABRT_SBYTE_ACKDET                    (1U << 7) /* Master : Master has sent a START Byte and the START Byte was acknowledged (wrong */
#define I2C3_ABRT_HS_ACKDET                       (1U << 6) /* Master : Master is in High Speed mode and the High Speed Master code was acknowl */
#define I2C3_ABRT_GCALL_READ                      (1U << 5) /* Master-Transmitter : The controller in master mode sent a General Call but the u */
#define I2C3_ABRT_GCALL_NOACK                     (1U << 4) /* Master-Transmitter : the controller in master mode sent a General Call and no sl */
#define I2C3_ABRT_TXDATA_NOACK                    (1U << 3) /* Master-Transmitter : This is a master-mode only bit. Master has received an ackn */
#define I2C3_ABRT_10ADDR2_NOACK                   (1U << 2) /* Master-Transmitter or Master-Receiver : Master is in 10-bit address mode and the */
#define I2C3_ABRT_10ADDR1_NOACK                   (1U << 1) /* Master-Transmitter or Master-Receiver : Master is in 10-bit address mode and the */
#define I2C3_ABRT_7B_ADDR_NOACK                   (1U << 0) /* Master-Transmitter or Master-Receiver : Master is in 7-bit addressing mode and t */

/* I2C3_TX_TL Register */

#define I2C3_TX_TL_MASK                           (0x1F << 0) /* Transmit FIFO Threshold Level Controls the level of entries (or below) that trig */
#define I2C3_TX_TL_POS                            (0) /* Transmit FIFO Threshold Level Controls the level of entries (or below) that trig */

#endif /* __DA1470_I2C3_H */
