/****************************************************************************
 * ./tmp/da1470_dsi2.h
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

#ifndef __DA1470_DSI2_H
#define __DA1470_DSI2_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_DSI2_DSI2_CFG_AUTOINSERT_EOTP_OFFSET        0x0014 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_BTA_H_TO_COUNT_OFFSET         0x0028 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_CLK_LANE_EN_OFFSET            0x0060 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_CONTINUOUS_HS_CLK_OFFSET      0x0004 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_DATA_LANE_EN_OFFSET           0x0064 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_DISABLE_BURST_OFFSET          0x0030 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_DISBL_RX_CRC_CHECK_OFFSET     0x001C /* No description available. */
#define DA1470_DSI2_DSI2_CFG_EXT_CMDS_AFT_EOTP_OFFSET      0x0018 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_HTX_TO_COUNT_OFFSET           0x0020 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_IRQ_MASK_OFFSET               0x01A8 /* Status of APB to packet interface, reading will clear IRQ status 1 and 2 */
#define DA1470_DSI2_DSI2_CFG_IRQ_MASK2_OFFSET              0x01AC /* Status of APB to packet interface part 2, read part 2 first then dsi2 host irq 2 */
#define DA1470_DSI2_DSI2_CFG_IRQ_STATUS_OFFSET             0x01A0 /* Status of APB to packet interface, reading will clear IRQ status 1 and 2 */
#define DA1470_DSI2_DSI2_CFG_IRQ_STATUS2_OFFSET            0x01A4 /* Status of APB to packet interface part 2, read part 2 first then dsi2 host irq 2 */
#define DA1470_DSI2_DSI2_CFG_LRX_H_TO_COUNT_OFFSET         0x0024 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_NUM_LANES_OFFSET              0x0000 /* configure numer of active lanes */
#define DA1470_DSI2_DSI2_CFG_PACKET_CONTROL_OFFSET         0x0184 /* Tx packet control register */
#define DA1470_DSI2_DSI2_CFG_PKT_RD_LEVEL_OFFSET           0x0194 /* Read level of APB to pkt interface fifo */
#define DA1470_DSI2_DSI2_CFG_PKT_RX_HEADER_OFFSET          0x019C /* Packet 2 APB RX header */
#define DA1470_DSI2_DSI2_CFG_PKT_RX_PAYLOAD_OFFSET         0x0198 /* Packet 2 APB RX payload */
#define DA1470_DSI2_DSI2_CFG_PKT_STATUS_OFFSET             0x018C /* Status of APB to packet interface */
#define DA1470_DSI2_DSI2_CFG_PKT_WR_LEVEL_OFFSET           0x0190 /* Write level of APB to pkt interface fifo */
#define DA1470_DSI2_DSI2_CFG_RX_ERROR_STATUS_OFFSET        0x0044 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_SEND_PACKET_OFFSET            0x0188 /* Tx send packet */
#define DA1470_DSI2_DSI2_CFG_STATUS_OUT_OFFSET             0x0040 /* Contains the status of the status register */
#define DA1470_DSI2_DSI2_CFG_TWAKEUP_OFFSET                0x002C /* No description available. */
#define DA1470_DSI2_DSI2_CFG_TX_GAP_OFFSET                 0x0010 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_TX_PAYLOAD_OFFSET             0x0180 /* TX Payload data write register */
#define DA1470_DSI2_DSI2_CFG_T_POST_OFFSET                 0x000C /* No description available. */
#define DA1470_DSI2_DSI2_CFG_T_PRE_OFFSET                  0x0008 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_BLLP_MODE_OFFSET          0x0140 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_ENABLE_OFFSET             0x0100 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_HBP_OFFSET                0x012C /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_HFP_OFFSET                0x0128 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_HSA_OFFSET                0x0130 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_HSYNC_POLARITY_OFFSET     0x0118 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_OVERRIDE_OFFSET           0x0120 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_PACKETS_P_LINE_OFFSET     0x0134 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_PIX_ALIGNMENT_OFFSET      0x010C /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_PIX_FORMAT_OFFSET         0x0110 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_PIX_PAYLOAD_SIZE_OFFSET   0x0108 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_PIX_P_PACKET_OFFSET       0x0104 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_START_DELAY_OFFSET        0x0124 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_USE_NULL_PKT_BLLP_OFFSET  0x0144 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VACTIVE_OFFSET            0x0148 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VBP_OFFSET                0x0138 /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VC_OFFSET                 0x014C /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VFP_OFFSET                0x013C /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VIDEO_MODE_OFFSET         0x011C /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VSYNC_POLARITY_OFFSET     0x0114 /* No description available. */

/* Register addresses *******************************************************/

#define DA1470_DSI2_BASE                                   0x51001300 /* DSI2 registers */

#define DA1470_DSI2_DSI2_CFG_AUTOINSERT_EOTP               (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_AUTOINSERT_EOTP_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_BTA_H_TO_COUNT                (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_BTA_H_TO_COUNT_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_CLK_LANE_EN                   (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_CLK_LANE_EN_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_CONTINUOUS_HS_CLK             (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_CONTINUOUS_HS_CLK_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_DATA_LANE_EN                  (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_DATA_LANE_EN_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_DISABLE_BURST                 (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_DISABLE_BURST_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_DISBL_RX_CRC_CHECK            (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_DISBL_RX_CRC_CHECK_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_EXT_CMDS_AFT_EOTP             (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_EXT_CMDS_AFT_EOTP_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_HTX_TO_COUNT                  (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_HTX_TO_COUNT_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_IRQ_MASK                      (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_IRQ_MASK_OFFSET) /* Status of APB to packet interface, reading will clear IRQ status 1 and 2 */
#define DA1470_DSI2_DSI2_CFG_IRQ_MASK2                     (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_IRQ_MASK2_OFFSET) /* Status of APB to packet interface part 2, read part 2 first then dsi2 host irq 2 */
#define DA1470_DSI2_DSI2_CFG_IRQ_STATUS                    (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_IRQ_STATUS_OFFSET) /* Status of APB to packet interface, reading will clear IRQ status 1 and 2 */
#define DA1470_DSI2_DSI2_CFG_IRQ_STATUS2                   (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_IRQ_STATUS2_OFFSET) /* Status of APB to packet interface part 2, read part 2 first then dsi2 host irq 2 */
#define DA1470_DSI2_DSI2_CFG_LRX_H_TO_COUNT                (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_LRX_H_TO_COUNT_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_NUM_LANES                     (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_NUM_LANES_OFFSET) /* configure numer of active lanes */
#define DA1470_DSI2_DSI2_CFG_PACKET_CONTROL                (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_PACKET_CONTROL_OFFSET) /* Tx packet control register */
#define DA1470_DSI2_DSI2_CFG_PKT_RD_LEVEL                  (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_PKT_RD_LEVEL_OFFSET) /* Read level of APB to pkt interface fifo */
#define DA1470_DSI2_DSI2_CFG_PKT_RX_HEADER                 (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_PKT_RX_HEADER_OFFSET) /* Packet 2 APB RX header */
#define DA1470_DSI2_DSI2_CFG_PKT_RX_PAYLOAD                (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_PKT_RX_PAYLOAD_OFFSET) /* Packet 2 APB RX payload */
#define DA1470_DSI2_DSI2_CFG_PKT_STATUS                    (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_PKT_STATUS_OFFSET) /* Status of APB to packet interface */
#define DA1470_DSI2_DSI2_CFG_PKT_WR_LEVEL                  (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_PKT_WR_LEVEL_OFFSET) /* Write level of APB to pkt interface fifo */
#define DA1470_DSI2_DSI2_CFG_RX_ERROR_STATUS               (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_RX_ERROR_STATUS_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_SEND_PACKET                   (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_SEND_PACKET_OFFSET) /* Tx send packet */
#define DA1470_DSI2_DSI2_CFG_STATUS_OUT                    (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_STATUS_OUT_OFFSET) /* Contains the status of the status register */
#define DA1470_DSI2_DSI2_CFG_TWAKEUP                       (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_TWAKEUP_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_TX_GAP                        (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_TX_GAP_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_TX_PAYLOAD                    (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_TX_PAYLOAD_OFFSET) /* TX Payload data write register */
#define DA1470_DSI2_DSI2_CFG_T_POST                        (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_T_POST_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_T_PRE                         (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_T_PRE_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_BLLP_MODE                 (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_BLLP_MODE_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_ENABLE                    (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_ENABLE_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_HBP                       (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_HBP_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_HFP                       (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_HFP_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_HSA                       (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_HSA_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_HSYNC_POLARITY            (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_HSYNC_POLARITY_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_OVERRIDE                  (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_OVERRIDE_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_PACKETS_P_LINE            (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_PACKETS_P_LINE_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_PIX_ALIGNMENT             (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_PIX_ALIGNMENT_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_PIX_FORMAT                (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_PIX_FORMAT_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_PIX_PAYLOAD_SIZE          (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_PIX_PAYLOAD_SIZE_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_PIX_P_PACKET              (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_PIX_P_PACKET_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_START_DELAY               (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_START_DELAY_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_USE_NULL_PKT_BLLP         (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_USE_NULL_PKT_BLLP_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VACTIVE                   (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_VACTIVE_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VBP                       (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_VBP_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VC                        (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_VC_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VFP                       (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_VFP_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VIDEO_MODE                (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_VIDEO_MODE_OFFSET) /* No description available. */
#define DA1470_DSI2_DSI2_CFG_VID_VSYNC_POLARITY            (DA1470_DSI2_BASE + DA1470_DSI2_DSI2_CFG_VID_VSYNC_POLARITY_OFFSET) /* No description available. */

/* Register bit definitions *************************************************/


/* DSI2_CFG_AUTOINSERT_EOTP Register */

#define DSI2_AUTOINSERT_EOTP                               (1U << 0) /* Enables the Host Controller to automatically insert an EoTp short packet when sw */

/* DSI2_CFG_BTA_H_TO_COUNT Register */

#define DSI2_BTA_H_TO_COUNT_MASK                           (0xFFFFFF << 0) /* Host Bust Turn Around (BTA) Timout. Sets the value of the DSI-2 Host Bus Turn Ar */
#define DSI2_BTA_H_TO_COUNT_POS                            (0) /* Host Bust Turn Around (BTA) Timout. Sets the value of the DSI-2 Host Bus Turn Ar */

/* DSI2_CFG_CLK_LANE_EN Register */

#define DSI2_CLK_LANE_EN                                   (1U << 0) /* Forces PHY Enable n signals to 1'b1 when register is set to 1. See the DSI-2 Con */

/* DSI2_CFG_CONTINUOUS_HS_CLK Register */

#define DSI2_CONTINUOUS_HS_CLK                             (1U << 0) /* Sets the Host Controller into non-continuous MIPI clock mode. When in non-contin */

/* DSI2_CFG_DATA_LANE_EN Register */

#define DSI2_DATA_LANE_EN_MASK                             (0x3 << 0) /* Forces PHY Enable n signals to 1'b1 when register is set to 1. See the DSI-2 Con */
#define DSI2_DATA_LANE_EN_POS                              (0) /* Forces PHY Enable n signals to 1'b1 when register is set to 1. See the DSI-2 Con */

/* DSI2_CFG_DISABLE_BURST Register */

#define DSI2_DISABLE_BURST                                 (1U << 0) /* Disables packets combined into a burst. Normal DSI-2 operation is to combine pac */

/* DSI2_CFG_DISBL_RX_CRC_CHECK Register */

#define DSI2_DISABLE_RX_CRC_CHECK                          (1U << 0) /* Prevents the Host from checking the payload CRC in long packets sent from the Pe */

/* DSI2_CFG_EXT_CMDS_AFT_EOTP Register */

#define DSI2_EXTRA_CMDS_AFTER_EOTP_MASK                    (0xFF << 0) /* Configures the DSI-2 Host Controller to send extra End Of Transmission Packets a */
#define DSI2_EXTRA_CMDS_AFTER_EOTP_POS                     (0) /* Configures the DSI-2 Host Controller to send extra End Of Transmission Packets a */

/* DSI2_CFG_HTX_TO_COUNT Register */

#define DSI2_HTX_TO_COUNT_MASK                             (0xFFFFFF << 0) /* Host HS TX Timeout count, HS TX Timeout. Sets the value of the DSI-2 host High S */
#define DSI2_HTX_TO_COUNT_POS                              (0) /* Host HS TX Timeout count, HS TX Timeout. Sets the value of the DSI-2 host High S */

/* DSI2_CFG_IRQ_MASK Register */

#define DSI2_IRQ_HS_TX_TIMEOUT                             (1U << 31) /* host bta timeout, host controller host bta timeout port */
#define DSI2_IRQ_LP_RX_TIMEOUT                             (1U << 30) /* low power rx timeout, host controller lp rx timeout port */
#define DSI2_IRQ_HOST_BTA_TIMEOUT                          (1U << 29) /* high speed tx timeout, host controller hs tx timeout port */
#define DSI2_IRQ_MAP_DIRECTORY_MASK                        (0xFFFFF << 9) /* map directory to dsi host controller status out port bit descriptions */
#define DSI2_IRQ_MAP_DIRECTORY_POS                         (9) /* map directory to dsi host controller status out port bit descriptions */
#define DSI2_IRQ_RX_PACKET_RCVD                            (1U << 8) /* All RX packet payload data has been received */
#define DSI2_IRQ_RX_HEADER_RCVD                            (1U << 7) /* RX packet header has been received */
#define DSI2_IRQ_RX_FIFO_UNDERFLOW                         (1U << 6) /* RX fifo underflow */
#define DSI2_IRQ_RX_FIFO_OVERFLOW                          (1U << 5) /* RX fifo overflow */
#define DSI2_IRQ_TX_FIFO_UNDERFLOW                         (1U << 4) /* TX fifo underflow */
#define DSI2_IRQ_TX_FIFO_OVERFLOW                          (1U << 3) /* TX fifo overflow */
#define DSI2_IRQ_DPHY_DIRECTION                            (1U << 2) /* DPHY direction 0 - TX had control 1 - RX has control */
#define DSI2_IRQ_TX_DONE                                   (1U << 1) /* TX packet done */
#define DSI2_IRQ_STATE_NOT_IDLE                            (1U << 0) /* State machine not idle */

/* DSI2_CFG_IRQ_MASK2 Register */

#define DSI2_IRQ_CRC_ERROR                                 (1U << 2) /* CRC error */
#define DSI2_IRQ_MULTI_BIT_ECC_ERROR                       (1U << 1) /* TX packet done */
#define DSI2_IRQ_SINGLE_BIT_ECC_ERROR                      (1U << 0) /* Single bit ecc error */

/* DSI2_CFG_IRQ_STATUS Register */

#define DSI2_IRQ_HS_TX_TIMEOUT                             (1U << 31) /* host bta timeout, host controller host bta timeout port */
#define DSI2_IRQ_LP_RX_TIMEOUT                             (1U << 30) /* low power rx timeout, host controller lp rx timeout port */
#define DSI2_IRQ_HOST_BTA_TIMEOUT                          (1U << 29) /* high speed tx timeout, host controller hs tx timeout port */
#define DSI2_IRQ_MAP_DIRECTORY_MASK                        (0xFFFFF << 9) /* map directory to dsi host controller status out port bit descriptions */
#define DSI2_IRQ_MAP_DIRECTORY_POS                         (9) /* map directory to dsi host controller status out port bit descriptions */
#define DSI2_IRQ_RX_PACKET_RCVD                            (1U << 8) /* All RX packet payload data has been received */
#define DSI2_IRQ_RX_HEADER_RCVD                            (1U << 7) /* RX packet header has been received */
#define DSI2_IRQ_RX_FIFO_UNDERFLOW                         (1U << 6) /* RX fifo underflow */
#define DSI2_IRQ_RX_FIFO_OVERFLOW                          (1U << 5) /* RX fifo overflow */
#define DSI2_IRQ_TX_FIFO_UNDERFLOW                         (1U << 4) /* TX fifo underflow */
#define DSI2_IRQ_TX_FIFO_OVERFLOW                          (1U << 3) /* TX fifo overflow */
#define DSI2_IRQ_DPHY_DIRECTION                            (1U << 2) /* DPHY direction 0 - TX had control 1 - RX has control */
#define DSI2_IRQ_TX_DONE                                   (1U << 1) /* TX packet done */
#define DSI2_IRQ_STATE_NOT_IDLE                            (1U << 0) /* State machine not idle */

/* DSI2_CFG_IRQ_STATUS2 Register */

#define DSI2_IRQ_CRC_ERROR                                 (1U << 2) /* CRC error */
#define DSI2_IRQ_MULTI_BIT_ECC_ERROR                       (1U << 1) /* TX packet done */
#define DSI2_IRQ_SINGLE_BIT_ECC_ERROR                      (1U << 0) /* Single bit ecc error */

/* DSI2_CFG_LRX_H_TO_COUNT Register */

#define DSI2_LRX_H_TO_COUNT_MASK                           (0xFFFFFF << 0) /* Host Low Power RX Timeout, LP_RX-H Timeout. Sets the value of the DSI-2 Low Powe */
#define DSI2_LRX_H_TO_COUNT_POS                            (0) /* Host Low Power RX Timeout, LP_RX-H Timeout. Sets the value of the DSI-2 Low Powe */

/* DSI2_CFG_NUM_LANES Register */

#define DSI2_NUM_LANES_MASK                                (0xF << 0) /* Sets the number of active lanes that are to be used for transmitting data. 4'b00 */
#define DSI2_NUM_LANES_POS                                 (0) /* Sets the number of active lanes that are to be used for transmitting data. 4'b00 */

/* DSI2_CFG_PACKET_CONTROL Register */

#define DSI2_PKT_BTA_ONLY                                  (1U << 26) /* Perform BTA only, no packet tx */
#define DSI2_PKT_BTA_AFTER_SENT                            (1U << 25) /* Perform BTA after packet is sent */
#define DSI2_PKT_LP_OR_HS                                  (1U << 24) /* low power or high speed */
#define DSI2_PKT_HEADER_DTYPE_MASK                         (0x3F << 18) /* Packet header DSI Data Type */
#define DSI2_PKT_HEADER_DTYPE_POS                          (18) /* Packet header DSI Data Type */
#define DSI2_PKT_VC_MASK                                   (0x3 << 16) /* Virtual channel */
#define DSI2_PKT_VC_POS                                    (16) /* Virtual channel */
#define DSI2_PKT_WC_MASK                                   (0xFFFF << 0) /* Packet word count */
#define DSI2_PKT_WC_POS                                    (0) /* Packet word count */

/* DSI2_CFG_PKT_RD_LEVEL Register */

#define DSI2_PKT_FIFO_RD_LEVEL_MASK                        (0xFFFF << 0) /* Read level of APB to pkt interface fifo */
#define DSI2_PKT_FIFO_RD_LEVEL_POS                         (0) /* Read level of APB to pkt interface fifo */

/* DSI2_CFG_PKT_RX_HEADER Register */

#define DSI2_PKT_RX_HEADER_DTYPE_MASK                      (0x3F << 18) /* Packet header DSI Data Type */
#define DSI2_PKT_RX_HEADER_DTYPE_POS                       (18) /* Packet header DSI Data Type */
#define DSI2_PKT_RX_VC_MASK                                (0x3 << 16) /* Virtual channel */
#define DSI2_PKT_RX_VC_POS                                 (16) /* Virtual channel */
#define DSI2_PKT_RX_WC_MASK                                (0xFFFF << 0) /* Packet word count */
#define DSI2_PKT_RX_WC_POS                                 (0) /* Packet word count */

/* DSI2_CFG_PKT_RX_PAYLOAD Register */

#define DSI2_PKT_PKT_RX_PAYLOAD_MASK                       (0xFFFFFFFF << 0) /* APB to pkt interface RX payload read */
#define DSI2_PKT_PKT_RX_PAYLOAD_POS                        (0) /* APB to pkt interface RX payload read */

/* DSI2_CFG_PKT_STATUS Register */

#define DSI2_PKT_RX_PACKET_RCVD                            (1U << 8) /* All RX packet payload data has been received */
#define DSI2_PKT_RX_HEADER_RCVD                            (1U << 7) /* RX packet header has been received */
#define DSI2_PKT_RX_FIFO_UNDERFLOW                         (1U << 6) /* RX fifo underflow */
#define DSI2_PKT_RX_FIFO_OVERFLOW                          (1U << 5) /* RX fifo overflow */
#define DSI2_PKT_TX_FIFO_UNDERFLOW                         (1U << 4) /* TX fifo underflow */
#define DSI2_PKT_TX_FIFO_OVERFLOW                          (1U << 3) /* TX fifo overflow */
#define DSI2_PKT_DPHY_DIRECTION                            (1U << 2) /* DPHY direction 0 - TX had control 1 - RX has control */
#define DSI2_PKT_TX_DONE                                   (1U << 1) /* TX packet done */
#define DSI2_PKT_STATE_NOT_IDLE                            (1U << 0) /* State machine not idle */

/* DSI2_CFG_PKT_WR_LEVEL Register */

#define DSI2_PKT_FIFO_WR_LEVEL_MASK                        (0xFFFF << 0) /* Write level of APB to pkt interface fifo */
#define DSI2_PKT_FIFO_WR_LEVEL_POS                         (0) /* Write level of APB to pkt interface fifo */

/* DSI2_CFG_RX_ERROR_STATUS Register */

#define DSI2_BTA_TIMEOUT                                   (1U << 10) /* BTA timeout */
#define DSI2_REV_LP_DATA_RX_TIMEOUT                        (1U << 9) /* Reverse Low Power Data receive timeout */
#define DSI2_HS_FWD_TX_TIMEOUT                             (1U << 8) /* High Speed forward TX timeout */
#define DSI2_CRC_ERR                                       (1U << 7) /* CRC error */
#define DSI2_ECC_SINGLE_BIT_ERR_POS_MASK                   (0xF << 3) /* Bit position for ECC single bit error */
#define DSI2_ECC_SINGLE_BIT_ERR_POS_POS                    (3) /* Bit position for ECC single bit error */
#define DSI2_ECC_MULTI_BIT_ERR                             (1U << 1) /* ECC multi bit error */
#define DSI2_ECC_SINGLE_BIT_ERR                            (1U << 0) /* ECC single bit error */

/* DSI2_CFG_SEND_PACKET Register */

#define DSI2_CFG_SEND_PACKET                               (1U << 0) /* Tx send packet, writing to this register causes the packet described in dsi2 hos */

/* DSI2_CFG_STATUS_OUT Register */

#define DSI2_LAST_RCVD_TRIGGER_MASK                        (0xF << 16) /* Last received Trigger. Current status of the RxTriggerEsc[3:0] from the TX DPHY. */
#define DSI2_LAST_RCVD_TRIGGER_POS                         (16) /* Last received Trigger. Current status of the RxTriggerEsc[3:0] from the TX DPHY. */
#define DSI2_DSI2_PROT_VIOLATION                           (1U << 15) /* Protocol violation error from peripheral error report, cleared upon read */
#define DSI2_INVALID_TRANS_LENGTH                          (1U << 13) /* Transmission length error from peripheral error report, cleared upon read */
#define DSI2_DSI2_VC_ID_INVALID                            (1U << 12) /* Invalid VC from peripheral error report, cleared upon read */
#define DSI2_DSI2_DT_NOT_RECOGNIZED                        (1U << 11) /* Invalid data type from peripheral error report, cleared upon read */
#define DSI2_LP_CHECKSUM_ERROR                             (1U << 10) /* Checksum error (long packet only) from peripheral error report, cleared upon rea */
#define DSI2_ECC_MULTI_BIT_ERROR                           (1U << 9) /* ECC multi-bit error from peripheral error report (not corrected), cleared upon r */
#define DSI2_ECC_1BIT_ERROR                                (1U << 8) /* ECC single bit error from peripheral error report (and corrected), cleared upon  */
#define DSI2_CONTENTION_DETECTED                           (1U << 7) /* Contention Detection from peripheral error report, cleared upon read */
#define DSI2_FALSE_CTRL_ERROR                              (1U << 6) /* False Control Error from peripheral error report, cleared upon read */
#define DSI2_PERIPH_TIMEOUT_ERROR                          (1U << 5) /* Peripheral Timeout error from peripheral error report, cleared upon read */
#define DSI2_LP_TRANS_SYNC_ERROR                           (1U << 4) /* Low Power Transmit Sync error from peripheral error report, cleared upon read */
#define DSI2_ESC_MODE_ENTRY_CMD_ERROR                      (1U << 3) /* Escape Mode Entry Command Error from peripheral error report, cleared upon read */
#define DSI2_EOT_SYNC_ERROR                                (1U << 2) /* End of Transmission Sync Error from peripheral error report, cleared upon read */
#define DSI2_SOT_SYNC_ERROR                                (1U << 1) /* Start of Transmission Sync Error from peripheral error report, cleared upon read */
#define DSI2_SOT_ERROR                                     (1U << 0) /* Start of Transmission Error from peripheral error report, cleared upon read */

/* DSI2_CFG_TWAKEUP Register */

#define DSI2_TWAKEUP_MASK                                  (0x7FFFF << 0) /* PHY Twakeup timing parameter. Sets the number of clk_esc clock periods to keep a */
#define DSI2_TWAKEUP_POS                                   (0) /* PHY Twakeup timing parameter. Sets the number of clk_esc clock periods to keep a */

/* DSI2_CFG_TX_GAP Register */

#define DSI2_TX_GAP_MASK                                   (0xFF << 0) /* Sets the number of byte clock periods (clk input) that the controller will wait  */
#define DSI2_TX_GAP_POS                                    (0) /* Sets the number of byte clock periods (clk input) that the controller will wait  */

/* DSI2_CFG_TX_PAYLOAD Register */

#define DSI2_CFG_TX_PAYLOAD_MASK                           (0xFFFFFFFF << 0) /* Tx Payload data write register. Writes to this registers load the payload fo wit */
#define DSI2_CFG_TX_PAYLOAD_POS                            (0) /* Tx Payload data write register. Writes to this registers load the payload fo wit */

/* DSI2_CFG_T_POST Register */

#define DSI2_T_POST_MASK                                   (0xFF << 0) /* Sets the number of byte clock periods (clk input) to wait before putting the clo */
#define DSI2_T_POST_POS                                    (0) /* Sets the number of byte clock periods (clk input) to wait before putting the clo */

/* DSI2_CFG_T_PRE Register */

#define DSI2_T_PRE_MASK                                    (0xFF << 0) /* Sets the number of byte clock periods (clk input) that the controller will wait  */
#define DSI2_T_PRE_POS                                     (0) /* Sets the number of byte clock periods (clk input) that the controller will wait  */

/* DSI2_CFG_VID_BLLP_MODE Register */

#define DSI2_VID_BLLP_MODE                                 (1U << 0) /* Optimize bllp periods to Low Power mode when possible 0 blanking packets are sen */

/* DSI2_CFG_VID_ENABLE Register */

#define DSI2_VID_ENABLE                                    (1U << 0) /* Enables the video interface 0 = video interface off; all packets go through rx p */

/* DSI2_CFG_VID_HBP Register */

#define DSI2_VID_HBP_MASK                                  (0xFFFF << 0) /* Sets the DSI-2 packet payload size, in bytes, of the horizontal back porch blank */
#define DSI2_VID_HBP_POS                                   (0) /* Sets the DSI-2 packet payload size, in bytes, of the horizontal back porch blank */

/* DSI2_CFG_VID_HFP Register */

#define DSI2_VID_HFP_MASK                                  (0xFFFF << 0) /* Sets the DSI-2 packet payload size, in bytes, of the horizontal front porch blan */
#define DSI2_VID_HFP_POS                                   (0) /* Sets the DSI-2 packet payload size, in bytes, of the horizontal front porch blan */

/* DSI2_CFG_VID_HSA Register */

#define DSI2_VID_HSA_MASK                                  (0xFFFF << 0) /* Sets the DSI-2 packet payload size, in bytes, of the horizontal sync width fille */
#define DSI2_VID_HSA_POS                                   (0) /* Sets the DSI-2 packet payload size, in bytes, of the horizontal sync width fille */

/* DSI2_CFG_VID_HSYNC_POLARITY Register */

#define DSI2_VID_HSYNC_POLARITY                            (1U << 0) /* Sets Polarity of vid_hsync input, 0 active low, 1 active high */

/* DSI2_CFG_VID_OVERRIDE Register */

#define DSI2_VID_OVERRIDE                                  (1U << 0) /* Overrides internal counters and uses values on configuration inputs. 1b0 Sync ti */

/* DSI2_CFG_VID_PACKETS_P_LINE Register */

#define DSI2_VID_PACKETS_P_LINE_MASK                       (0x7 << 0) /* Sets the number of packets that will be sent for a video line. Default reset val */
#define DSI2_VID_PACKETS_P_LINE_POS                        (0) /* Sets the number of packets that will be sent for a video line. Default reset val */

/* DSI2_CFG_VID_PIX_ALIGNMENT Register */

#define DSI2_VID_PIX_ALIGNMENT                             (1U << 0) /* Some RGB modes can be aligned either MSB or LSB onto the video_pX[35:0] inputs.  */

/* DSI2_CFG_VID_PIX_FORMAT Register */

#define DSI2_VID_PIX_FORMAT_MASK                           (0x3F << 0) /* Sets the DSI-2 packet type of the pixels. Value is the actual data type sent acr */
#define DSI2_VID_PIX_FORMAT_POS                            (0) /* Sets the DSI-2 packet type of the pixels. Value is the actual data type sent acr */

/* DSI2_CFG_VID_PIX_PAYLOAD_SIZE Register */

#define DSI2_VID_PIX_PAYLOAD_SIZE_MASK                     (0xFFFF << 0) /* The number of bytes in a video payload packet. Normally this can be set to zero  */
#define DSI2_VID_PIX_PAYLOAD_SIZE_POS                      (0) /* The number of bytes in a video payload packet. Normally this can be set to zero  */

/* DSI2_CFG_VID_PIX_P_PACKET Register */

#define DSI2_VID_PIX_P_PACKET_MASK                         (0xFFFF << 0) /* Sets the number of pixels that are sent in a packet for each video line. If cfg_ */
#define DSI2_VID_PIX_P_PACKET_POS                          (0) /* Sets the number of pixels that are sent in a packet for each video line. If cfg_ */

/* DSI2_CFG_VID_START_DELAY Register */

#define DSI2_VID_START_DELAY_MASK                          (0xFFFF << 0) /* In order to optimize DSI-2 utility, the video interface buffers a certain number */
#define DSI2_VID_START_DELAY_POS                           (0) /* In order to optimize DSI-2 utility, the video interface buffers a certain number */

/* DSI2_CFG_VID_USE_NULL_PKT_BLLP Register */

#define DSI2_VID_USE_NULL_PKT_BLLP                         (1U << 0) /* Selects type of blanking packet to be sent during bllp region 0 - Blanking packe */

/* DSI2_CFG_VID_VACTIVE Register */

#define DSI2_VID_VACTIVE_MASK                              (0xFFFF << 0) /* Sets the number of lines in the vertical active area. This input is ignored if c */
#define DSI2_VID_VACTIVE_POS                               (0) /* Sets the number of lines in the vertical active area. This input is ignored if c */

/* DSI2_CFG_VID_VBP Register */

#define DSI2_VID_VBP_MASK                                  (0xFFFF << 0) /* Sets the number of lines in the vertical back porch. This input is ignored if cf */
#define DSI2_VID_VBP_POS                                   (0) /* Sets the number of lines in the vertical back porch. This input is ignored if cf */

/* DSI2_CFG_VID_VC Register */

#define DSI2_VID_VC_MASK                                   (0x3 << 0) /* Sets the Virtual Channel (VC) of packets that will be sent to the receive packet */
#define DSI2_VID_VC_POS                                    (0) /* Sets the Virtual Channel (VC) of packets that will be sent to the receive packet */

/* DSI2_CFG_VID_VFP Register */

#define DSI2_VID_VFP_MASK                                  (0xFFFF << 0) /* Sets the number of lines in the vertical front porch. This input is ignored if c */
#define DSI2_VID_VFP_POS                                   (0) /* Sets the number of lines in the vertical front porch. This input is ignored if c */

/* DSI2_CFG_VID_VIDEO_MODE Register */

#define DSI2_VID_VID_VIDEO_MODE_MASK                       (0x3 << 0) /* Select DSI-2 video mode that the host VID module should generate packets for. 2b */
#define DSI2_VID_VID_VIDEO_MODE_POS                        (0) /* Select DSI-2 video mode that the host VID module should generate packets for. 2b */

/* DSI2_CFG_VID_VSYNC_POLARITY Register */

#define DSI2_VID_VSYNC_POLARITY                            (1U << 0) /* Sets polarity of vid_vsync input, 0 active low, 1 active high */

#endif /* __DA1470_DSI2_H */
