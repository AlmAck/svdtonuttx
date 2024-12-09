/****************************************************************************
 * ./tmp/da1470x_usb.h
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

#ifndef __DA1470X_USB_H
#define __DA1470X_USB_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_USB_USB_ALTEV_OFFSET          0x0020 /* Alternate Event Register */
#define DA1470X_USB_USB_ALTMSK_OFFSET         0x0024 /* Alternate Mask Register */
#define DA1470X_USB_USB_CHARGER_STAT_OFFSET   0x01AC /* USB Charger Status Register */
#define DA1470X_USB_USB_DMA_CTRL_OFFSET       0x01A0 /* USB DMA control register */
#define DA1470X_USB_USB_EP0_NAK_OFFSET        0x0090 /* EP0 INNAK and OUTNAK Register */
#define DA1470X_USB_USB_EPC0_OFFSET           0x0080 /* Endpoint Control 0 Register */
#define DA1470X_USB_USB_EPC1_OFFSET           0x00A0 /* Endpoint Control Register 1 */
#define DA1470X_USB_USB_EPC2_OFFSET           0x00B0 /* Endpoint Control Register 2 */
#define DA1470X_USB_USB_EPC3_OFFSET           0x00C0 /* Endpoint Control Register 3 */
#define DA1470X_USB_USB_EPC4_OFFSET           0x00D0 /* Endpoint Control Register 4 */
#define DA1470X_USB_USB_EPC5_OFFSET           0x00E0 /* Endpoint Control Register 5 */
#define DA1470X_USB_USB_EPC6_OFFSET           0x00F0 /* Endpoint Control Register 6 */
#define DA1470X_USB_USB_FAR_OFFSET            0x0010 /* Function Address Register */
#define DA1470X_USB_USB_FNH_OFFSET            0x0048 /* Frame Number High Byte Register */
#define DA1470X_USB_USB_FNL_OFFSET            0x004C /* Frame Number Low Byte Register */
#define DA1470X_USB_USB_FWEV_OFFSET           0x0040 /* FIFO Warning Event Register */
#define DA1470X_USB_USB_FWMSK_OFFSET          0x0044 /* FIFO Warning Mask Register */
#define DA1470X_USB_USB_MAEV_OFFSET           0x0018 /* Main Event Register */
#define DA1470X_USB_USB_MAMSK_OFFSET          0x001C /* Main Mask Register */
#define DA1470X_USB_USB_MCTRL_OFFSET          0x0000 /* Main Control Register) */
#define DA1470X_USB_USB_NAKEV_OFFSET          0x0038 /* NAK Event Register */
#define DA1470X_USB_USB_NAKMSK_OFFSET         0x003C /* NAK Mask Register */
#define DA1470X_USB_USB_NFSR_OFFSET           0x0014 /* Node Functional State Register */
#define DA1470X_USB_USB_RXC0_OFFSET           0x009C /* Receive Command 0 Register */
#define DA1470X_USB_USB_RXC1_OFFSET           0x00BC /* Receive Command Register 1 */
#define DA1470X_USB_USB_RXC2_OFFSET           0x00DC /* Receive Command Register 2 */
#define DA1470X_USB_USB_RXC3_OFFSET           0x00FC /* Receive Command Register 3 */
#define DA1470X_USB_USB_RXD0_OFFSET           0x0094 /* Receive Data 0 Register */
#define DA1470X_USB_USB_RXD1_OFFSET           0x00B4 /* Receive Data Register,1 */
#define DA1470X_USB_USB_RXD2_OFFSET           0x00D4 /* Receive Data Register 2 */
#define DA1470X_USB_USB_RXD3_OFFSET           0x00F4 /* Receive Data Register 3 */
#define DA1470X_USB_USB_RXEV_OFFSET           0x0030 /* Receive Event Register */
#define DA1470X_USB_USB_RXMSK_OFFSET          0x0034 /* Receive Mask Register */
#define DA1470X_USB_USB_RXS0_OFFSET           0x0098 /* Receive Status 0 Register */
#define DA1470X_USB_USB_RXS1_OFFSET           0x00B8 /* Receive Status Register 1 */
#define DA1470X_USB_USB_RXS2_OFFSET           0x00D8 /* Receive Status Register 2 */
#define DA1470X_USB_USB_RXS3_OFFSET           0x00F8 /* Receive Status Register 3 */
#define DA1470X_USB_USB_TCR_OFFSET            0x0008 /* Transceiver configuration Register */
#define DA1470X_USB_USB_TXC0_OFFSET           0x008C /* Transmit command 0 Register */
#define DA1470X_USB_USB_TXC1_OFFSET           0x00AC /* Transmit Command Register 1 */
#define DA1470X_USB_USB_TXC2_OFFSET           0x00CC /* Transmit Command Register 2 */
#define DA1470X_USB_USB_TXC3_OFFSET           0x00EC /* Transmit Command Register 3 */
#define DA1470X_USB_USB_TXD0_OFFSET           0x0084 /* Transmit Data 0 Register */
#define DA1470X_USB_USB_TXD1_OFFSET           0x00A4 /* Transmit Data Register 1 */
#define DA1470X_USB_USB_TXD2_OFFSET           0x00C4 /* Transmit Data Register 2 */
#define DA1470X_USB_USB_TXD3_OFFSET           0x00E4 /* Transmit Data Register 3 */
#define DA1470X_USB_USB_TXEV_OFFSET           0x0028 /* Transmit Event Register */
#define DA1470X_USB_USB_TXMSK_OFFSET          0x002C /* Transmit Mask Register */
#define DA1470X_USB_USB_TXS0_OFFSET           0x0088 /* Transmit Status 0 Register */
#define DA1470X_USB_USB_TXS1_OFFSET           0x00A8 /* Transmit Status Register 1 */
#define DA1470X_USB_USB_TXS2_OFFSET           0x00C8 /* Transmit Status Register 2 */
#define DA1470X_USB_USB_TXS3_OFFSET           0x00E8 /* Transmit Status Register 3 */
#define DA1470X_USB_USB_UTR_OFFSET            0x000C /* USB test Register (for test purpose only) */
#define DA1470X_USB_USB_UX20CDR_OFFSET        0x007C /* Transceiver 2.0 Configuration and Diagnostics Register(for test purpose only) */
#define DA1470X_USB_USB_XCVDIAG_OFFSET        0x0004 /* Transceiver diagnostic Register (for test purpose only) */

/* Register addresses *******************************************************/

#define DA1470X_USB_BASE                      0x51000000 /* USB registers */

#define DA1470X_USB_USB_ALTEV                 (DA1470X_USB_BASE + DA1470X_USB_USB_ALTEV_OFFSET) /* Alternate Event Register */
#define DA1470X_USB_USB_ALTMSK                (DA1470X_USB_BASE + DA1470X_USB_USB_ALTMSK_OFFSET) /* Alternate Mask Register */
#define DA1470X_USB_USB_CHARGER_STAT          (DA1470X_USB_BASE + DA1470X_USB_USB_CHARGER_STAT_OFFSET) /* USB Charger Status Register */
#define DA1470X_USB_USB_DMA_CTRL              (DA1470X_USB_BASE + DA1470X_USB_USB_DMA_CTRL_OFFSET) /* USB DMA control register */
#define DA1470X_USB_USB_EP0_NAK               (DA1470X_USB_BASE + DA1470X_USB_USB_EP0_NAK_OFFSET) /* EP0 INNAK and OUTNAK Register */
#define DA1470X_USB_USB_EPC0                  (DA1470X_USB_BASE + DA1470X_USB_USB_EPC0_OFFSET) /* Endpoint Control 0 Register */
#define DA1470X_USB_USB_EPC1                  (DA1470X_USB_BASE + DA1470X_USB_USB_EPC1_OFFSET) /* Endpoint Control Register 1 */
#define DA1470X_USB_USB_EPC2                  (DA1470X_USB_BASE + DA1470X_USB_USB_EPC2_OFFSET) /* Endpoint Control Register 2 */
#define DA1470X_USB_USB_EPC3                  (DA1470X_USB_BASE + DA1470X_USB_USB_EPC3_OFFSET) /* Endpoint Control Register 3 */
#define DA1470X_USB_USB_EPC4                  (DA1470X_USB_BASE + DA1470X_USB_USB_EPC4_OFFSET) /* Endpoint Control Register 4 */
#define DA1470X_USB_USB_EPC5                  (DA1470X_USB_BASE + DA1470X_USB_USB_EPC5_OFFSET) /* Endpoint Control Register 5 */
#define DA1470X_USB_USB_EPC6                  (DA1470X_USB_BASE + DA1470X_USB_USB_EPC6_OFFSET) /* Endpoint Control Register 6 */
#define DA1470X_USB_USB_FAR                   (DA1470X_USB_BASE + DA1470X_USB_USB_FAR_OFFSET) /* Function Address Register */
#define DA1470X_USB_USB_FNH                   (DA1470X_USB_BASE + DA1470X_USB_USB_FNH_OFFSET) /* Frame Number High Byte Register */
#define DA1470X_USB_USB_FNL                   (DA1470X_USB_BASE + DA1470X_USB_USB_FNL_OFFSET) /* Frame Number Low Byte Register */
#define DA1470X_USB_USB_FWEV                  (DA1470X_USB_BASE + DA1470X_USB_USB_FWEV_OFFSET) /* FIFO Warning Event Register */
#define DA1470X_USB_USB_FWMSK                 (DA1470X_USB_BASE + DA1470X_USB_USB_FWMSK_OFFSET) /* FIFO Warning Mask Register */
#define DA1470X_USB_USB_MAEV                  (DA1470X_USB_BASE + DA1470X_USB_USB_MAEV_OFFSET) /* Main Event Register */
#define DA1470X_USB_USB_MAMSK                 (DA1470X_USB_BASE + DA1470X_USB_USB_MAMSK_OFFSET) /* Main Mask Register */
#define DA1470X_USB_USB_MCTRL                 (DA1470X_USB_BASE + DA1470X_USB_USB_MCTRL_OFFSET) /* Main Control Register) */
#define DA1470X_USB_USB_NAKEV                 (DA1470X_USB_BASE + DA1470X_USB_USB_NAKEV_OFFSET) /* NAK Event Register */
#define DA1470X_USB_USB_NAKMSK                (DA1470X_USB_BASE + DA1470X_USB_USB_NAKMSK_OFFSET) /* NAK Mask Register */
#define DA1470X_USB_USB_NFSR                  (DA1470X_USB_BASE + DA1470X_USB_USB_NFSR_OFFSET) /* Node Functional State Register */
#define DA1470X_USB_USB_RXC0                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXC0_OFFSET) /* Receive Command 0 Register */
#define DA1470X_USB_USB_RXC1                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXC1_OFFSET) /* Receive Command Register 1 */
#define DA1470X_USB_USB_RXC2                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXC2_OFFSET) /* Receive Command Register 2 */
#define DA1470X_USB_USB_RXC3                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXC3_OFFSET) /* Receive Command Register 3 */
#define DA1470X_USB_USB_RXD0                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXD0_OFFSET) /* Receive Data 0 Register */
#define DA1470X_USB_USB_RXD1                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXD1_OFFSET) /* Receive Data Register,1 */
#define DA1470X_USB_USB_RXD2                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXD2_OFFSET) /* Receive Data Register 2 */
#define DA1470X_USB_USB_RXD3                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXD3_OFFSET) /* Receive Data Register 3 */
#define DA1470X_USB_USB_RXEV                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXEV_OFFSET) /* Receive Event Register */
#define DA1470X_USB_USB_RXMSK                 (DA1470X_USB_BASE + DA1470X_USB_USB_RXMSK_OFFSET) /* Receive Mask Register */
#define DA1470X_USB_USB_RXS0                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXS0_OFFSET) /* Receive Status 0 Register */
#define DA1470X_USB_USB_RXS1                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXS1_OFFSET) /* Receive Status Register 1 */
#define DA1470X_USB_USB_RXS2                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXS2_OFFSET) /* Receive Status Register 2 */
#define DA1470X_USB_USB_RXS3                  (DA1470X_USB_BASE + DA1470X_USB_USB_RXS3_OFFSET) /* Receive Status Register 3 */
#define DA1470X_USB_USB_TCR                   (DA1470X_USB_BASE + DA1470X_USB_USB_TCR_OFFSET) /* Transceiver configuration Register */
#define DA1470X_USB_USB_TXC0                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXC0_OFFSET) /* Transmit command 0 Register */
#define DA1470X_USB_USB_TXC1                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXC1_OFFSET) /* Transmit Command Register 1 */
#define DA1470X_USB_USB_TXC2                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXC2_OFFSET) /* Transmit Command Register 2 */
#define DA1470X_USB_USB_TXC3                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXC3_OFFSET) /* Transmit Command Register 3 */
#define DA1470X_USB_USB_TXD0                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXD0_OFFSET) /* Transmit Data 0 Register */
#define DA1470X_USB_USB_TXD1                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXD1_OFFSET) /* Transmit Data Register 1 */
#define DA1470X_USB_USB_TXD2                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXD2_OFFSET) /* Transmit Data Register 2 */
#define DA1470X_USB_USB_TXD3                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXD3_OFFSET) /* Transmit Data Register 3 */
#define DA1470X_USB_USB_TXEV                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXEV_OFFSET) /* Transmit Event Register */
#define DA1470X_USB_USB_TXMSK                 (DA1470X_USB_BASE + DA1470X_USB_USB_TXMSK_OFFSET) /* Transmit Mask Register */
#define DA1470X_USB_USB_TXS0                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXS0_OFFSET) /* Transmit Status 0 Register */
#define DA1470X_USB_USB_TXS1                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXS1_OFFSET) /* Transmit Status Register 1 */
#define DA1470X_USB_USB_TXS2                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXS2_OFFSET) /* Transmit Status Register 2 */
#define DA1470X_USB_USB_TXS3                  (DA1470X_USB_BASE + DA1470X_USB_USB_TXS3_OFFSET) /* Transmit Status Register 3 */
#define DA1470X_USB_USB_UTR                   (DA1470X_USB_BASE + DA1470X_USB_USB_UTR_OFFSET) /* USB test Register (for test purpose only) */
#define DA1470X_USB_USB_UX20CDR               (DA1470X_USB_BASE + DA1470X_USB_USB_UX20CDR_OFFSET) /* Transceiver 2.0 Configuration and Diagnostics Register(for test purpose only) */
#define DA1470X_USB_USB_XCVDIAG               (DA1470X_USB_BASE + DA1470X_USB_USB_XCVDIAG_OFFSET) /* Transceiver diagnostic Register (for test purpose only) */

/* Register bit definitions *************************************************/


/* USB_ALTEV Register */

#define USB_USB_RESUME                        (1U << 7) /* Resume Resume signalling is detected on the USB when the device is in Suspend st */
#define USB_USB_RESET                         (1U << 6) /* Reset This bit is set to 1, when 2.5 ms of SEO have been detected on the upstrea */
#define USB_USB_SD5                           (1U << 5) /* Suspend Detect 5 ms This bit is set to 1 after 5 ms of IDLE have been detected o */
#define USB_USB_SD3                           (1U << 4) /* Suspend Detect 3 ms This bit is set to 1 after 3 ms of IDLE have been detected o */
#define USB_USB_EOP                           (1U << 3) /* End of Packet A valid EOP sequence was been detected on the USB. It is used when */

/* USB_ALTMSK Register */

#define USB_USB_M_RESUME                      (1U << 7) /* A bit set to 1 in this register enables automatic setting of the ALT bit in the  */
#define USB_USB_M_RESET                       (1U << 6) /* Same Bit Definition as ALTEV Register */
#define USB_USB_M_SD5                         (1U << 5) /* Same Bit Definition as ALTEV Register */
#define USB_USB_M_SD3                         (1U << 4) /* Same Bit Definition as ALTEV Register */
#define USB_USB_M_EOP                         (1U << 3) /* Same Bit Definition as ALTEV Register */

/* USB_CHARGER_STAT Register */

#define USB_USB_DM_VAL2                       (1U << 5) /* 0: USBm < 2.3 V 1: USBm > 2.5 V */
#define USB_USB_DP_VAL2                       (1U << 4) /* 0: USBp < 2.3 V 1: USBp > 2.5 V */
#define USB_USB_DM_VAL                        (1U << 3) /* 0: USBm < 0.8 V 1: USBm > 1.5 V (PS2 or Proprietary Charger) */
#define USB_USB_DP_VAL                        (1U << 2) /* 0: USBp < 0.8 V 1: USBp > 1.5 V */
#define USB_USB_CHG_DET                       (1U << 1) /* 0: Standard downstream or nothing connected. 1: Charging Downstream Port (CDP) o */
#define USB_USB_DCP_DET                       (1U << 0) /* 0: Charging downstream port is detected. 1: Dedicated charger is detected. Contr */

/* USB_DMA_CTRL Register */

#define USB_USB_DMA_EN                        (1U << 6) /* 0 = USB DMA control off. (Normal operation) 1 = USB_DMA on. DMA channels 0 and 1 */
#define USB_USB_DMA_TX_MASK                   (0x7 << 3) /* 000 = DMA channels 1 is connected Tx USB Endpoint 1 001 = DMA channels 1 is conn */
#define USB_USB_DMA_TX_POS                    (3) /* 000 = DMA channels 1 is connected Tx USB Endpoint 1 001 = DMA channels 1 is conn */
#define USB_USB_DMA_RX_MASK                   (0x7 << 0) /* 000 = DMA channels 0 is connected Rx USB Endpoint 2 001 = DMA channels 0 is conn */
#define USB_USB_DMA_RX_POS                    (0) /* 000 = DMA channels 0 is connected Rx USB Endpoint 2 001 = DMA channels 0 is conn */

/* USB_EP0_NAK Register */

#define USB_USB_EP0_OUTNAK                    (1U << 1) /* End point 0 OUT NAK This bit n is set to 1 when a NAK handshake is generated for */
#define USB_USB_EP0_INNAK                     (1U << 0) /* End point 0 IN NAK This bit is set to 1 when a NAK handshake is generated for an */

/* USB_EPC0 Register */

#define USB_USB_STALL                         (1U << 7) /* Stall Setting this bit to 1 causes the chip to generate STALL handshakes under t */
#define USB_USB_DEF                           (1U << 6) /* Default Address When set to 1, the device responds to the default address regard */
#define USB_USB_EP_MASK                       (0xF << 0) /* Endpoint Address This field holds the 4-bit Endpoint address. For Endpoint 0, th */
#define USB_USB_EP_POS                        (0) /* Endpoint Address This field holds the 4-bit Endpoint address. For Endpoint 0, th */

/* USB_EPC1 Register */

#define USB_USB_STALL                         (1U << 7) /* Stall Setting this bit to 1 causes the chip to generate STALL handshakes under t */
#define USB_USB_ISO                           (1U << 5) /* Isochronous When this bit is set to 1, the endpoint is isochronous. This implies */
#define USB_USB_EP_EN                         (1U << 4) /* Endpoint Enable When this bit is set to 1, the EP[3:0] field is used in address  */
#define USB_USB_EP_MASK                       (0xF << 0) /* Endpoint Address This 4-bit field holds the endpoint address. */
#define USB_USB_EP_POS                        (0) /* Endpoint Address This 4-bit field holds the endpoint address. */

/* USB_EPC2 Register */

#define USB_USB_STALL                         (1U << 7) /* Stall Setting this bit to 1 causes the chip to generate STALL handshakes under t */
#define USB_USB_ISO                           (1U << 5) /* Isochronous When this bit is set to 1, the endpoint is isochronous. This implies */
#define USB_USB_EP_EN                         (1U << 4) /* Endpoint Enable When this bit is set to 1, the EP[3:0] field is used in address  */
#define USB_USB_EP_MASK                       (0xF << 0) /* Endpoint Address This 4-bit field holds the endpoint address. */
#define USB_USB_EP_POS                        (0) /* Endpoint Address This 4-bit field holds the endpoint address. */

/* USB_EPC3 Register */

#define USB_USB_STALL                         (1U << 7) /* Stall Setting this bit to 1 causes the chip to generate STALL handshakes under t */
#define USB_USB_ISO                           (1U << 5) /* Isochronous When this bit is set to 1, the endpoint is isochronous. This implies */
#define USB_USB_EP_EN                         (1U << 4) /* Endpoint Enable When this bit is set to 1, the EP[3:0] field is used in address  */
#define USB_USB_EP_MASK                       (0xF << 0) /* Endpoint Address This 4-bit field holds the endpoint address. */
#define USB_USB_EP_POS                        (0) /* Endpoint Address This 4-bit field holds the endpoint address. */

/* USB_EPC4 Register */

#define USB_USB_STALL                         (1U << 7) /* Stall Setting this bit to 1 causes the chip to generate STALL handshakes under t */
#define USB_USB_ISO                           (1U << 5) /* Isochronous When this bit is set to 1, the endpoint is isochronous. This implies */
#define USB_USB_EP_EN                         (1U << 4) /* Endpoint Enable When this bit is set to 1, the EP[3:0] field is used in address  */
#define USB_USB_EP_MASK                       (0xF << 0) /* Endpoint Address This 4-bit field holds the endpoint address. */
#define USB_USB_EP_POS                        (0) /* Endpoint Address This 4-bit field holds the endpoint address. */

/* USB_EPC5 Register */

#define USB_USB_STALL                         (1U << 7) /* Stall Setting this bit to 1 causes the chip to generate STALL handshakes under t */
#define USB_USB_ISO                           (1U << 5) /* Isochronous When this bit is set to 1, the endpoint is isochronous. This implies */
#define USB_USB_EP_EN                         (1U << 4) /* Endpoint Enable When this bit is set to 1, the EP[3:0] field is used in address  */
#define USB_USB_EP_MASK                       (0xF << 0) /* Endpoint Address This 4-bit field holds the endpoint address. */
#define USB_USB_EP_POS                        (0) /* Endpoint Address This 4-bit field holds the endpoint address. */

/* USB_EPC6 Register */

#define USB_USB_STALL                         (1U << 7) /* Stall Setting this bit to 1 causes the chip to generate STALL handshakes under t */
#define USB_USB_ISO                           (1U << 5) /* Isochronous When this bit is set to 1, the endpoint is isochronous. This implies */
#define USB_USB_EP_EN                         (1U << 4) /* Endpoint Enable When this bit is set to 1, the EP[3:0] field is used in address  */
#define USB_USB_EP_MASK                       (0xF << 0) /* Endpoint Address This 4-bit field holds the endpoint address. */
#define USB_USB_EP_POS                        (0) /* Endpoint Address This 4-bit field holds the endpoint address. */

/* USB_FAR Register */

#define USB_USB_AD_EN                         (1U << 7) /* Address Enable When set to 1, USB address field bits 6-0 are used in address com */
#define USB_USB_AD_MASK                       (0x7F << 0) /* Address This field holds the 7-bit function address used to transmit and receive */
#define USB_USB_AD_POS                        (0) /* Address This field holds the 7-bit function address used to transmit and receive */

/* USB_FNH Register */

#define USB_USB_MF                            (1U << 7) /* Missed SOF Flag This flag is set to 1, when the frame number in a valid received */
#define USB_USB_UL                            (1U << 6) /* Unlock Flag This bit indicates that at least two frames were received without an */
#define USB_USB_RFC                           (1U << 5) /* Reset Frame Count Writing a 1 to this bit resets the frame number to 00016, afte */
#define USB_USB_FN_10_8_MASK                  (0x7 << 0) /* Frame Number This 3-bit field contains the three most significant bits (MSB) of  */
#define USB_USB_FN_10_8_POS                   (0) /* Frame Number This 3-bit field contains the three most significant bits (MSB) of  */

/* USB_FNL Register */

#define USB_USB_FN_MASK                       (0xFF << 0) /* The Frame Number Low Byte Register holds the low byte of the frame number. To en */
#define USB_USB_FN_POS                        (0) /* The Frame Number Low Byte Register holds the low byte of the frame number. To en */

/* USB_FWEV Register */

#define USB_USB_RXWARN31_MASK                 (0x7 << 4) /* Receive Warning n: 3:1 The bit n is set to 1 when the respective receive endpoin */
#define USB_USB_RXWARN31_POS                  (4) /* Receive Warning n: 3:1 The bit n is set to 1 when the respective receive endpoin */
#define USB_USB_TXWARN31_MASK                 (0x7 << 0) /* Transmit Warning n: 3:1 The bit n is set to 1 when the respective transmit endpo */
#define USB_USB_TXWARN31_POS                  (0) /* Transmit Warning n: 3:1 The bit n is set to 1 when the respective transmit endpo */

/* USB_FWMSK Register */

#define USB_USB_M_RXWARN31_MASK               (0x7 << 4) /* The FIFO Warning Mask Register selects, which FWEV bits are reported in the MAEV */
#define USB_USB_M_RXWARN31_POS                (4) /* The FIFO Warning Mask Register selects, which FWEV bits are reported in the MAEV */
#define USB_USB_M_TXWARN31_MASK               (0x7 << 0) /* The FIFO Warning Mask Register selects, which FWEV bits are reported in the MAEV */
#define USB_USB_M_TXWARN31_POS                (0) /* The FIFO Warning Mask Register selects, which FWEV bits are reported in the MAEV */

/* USB_MAEV Register */

#define USB_USB_CH_EV                         (1U << 11) /* USB Charger event This bit is set if one of the bits in USB_CHARGER_STAT_REG[2-0 */
#define USB_USB_EP0_NAK                       (1U << 10) /* Endpoint 0 NAK Event This bit is an OR of EP0_NAK_REG[EP0_OUTNAK] and EP0_NAK_RE */
#define USB_USB_EP0_RX                        (1U << 9) /* Endpoint 0 Receive Event This bit is a copy of the RXS0[RX_LAST] and is cleared  */
#define USB_USB_EP0_TX                        (1U << 8) /* Endpoint 0 Transmit Event This bit is a copy of the TXS0[TX_DONE] bit and is cle */
#define USB_USB_INTR                          (1U << 7) /* Master Interrupt Enable This bit is hardwired to 0 in the Main Event (MAEV) regi */
#define USB_USB_RX_EV                         (1U << 6) /* Receive Event This bit is set to 1 if any of the unmasked bits in the Receive Ev */
#define USB_USB_ULD                           (1U << 5) /* Unlocked/Locked Detected This bit is set to 1, when the frame timer has either e */
#define USB_USB_NAK                           (1U << 4) /* Negative Acknowledge Event This bit indicates that one of the unmasked NAK Event */
#define USB_USB_FRAME                         (1U << 3) /* Frame Event This bit is set to 1, if the frame counter is updated with a new val */
#define USB_USB_TX_EV                         (1U << 2) /* Transmit Event This bit is set to 1, if any of the unmasked bits in the Transmit */
#define USB_USB_ALT                           (1U << 1) /* Alternate Event This bit indicates that one of the unmasked ALTEV register bits  */
#define USB_USB_WARN                          (1U << 0) /* Warning Event This bit indicates that one of the unmasked bits in the FIFO Warni */

/* USB_MAMSK Register */

#define USB_USB_M_CH_EV                       (1U << 11) /* The Main Mask Register masks out events reported in the MAEV registers. A bit se */
#define USB_USB_M_EP0_NAK                     (1U << 10) /* Same Bit Definition as MAEV Register */
#define USB_USB_M_EP0_RX                      (1U << 9) /* Same Bit Definition as MAEV Register */
#define USB_USB_M_EP0_TX                      (1U << 8) /* Same Bit Definition as MAEV Register */
#define USB_USB_M_INTR                        (1U << 7) /* Same Bit Definition as MAEV Register */
#define USB_USB_M_RX_EV                       (1U << 6) /* Same Bit Definition as MAEV Register */
#define USB_USB_M_ULD                         (1U << 5) /* Same Bit Definition as MAEV Register */
#define USB_USB_M_NAK                         (1U << 4) /* Same Bit Definition as MAEV Register */
#define USB_USB_M_FRAME                       (1U << 3) /* Same Bit Definition as MAEV Register */
#define USB_USB_M_TX_EV                       (1U << 2) /* Same Bit Definition as MAEV Register */
#define USB_USB_M_ALT                         (1U << 1) /* Same Bit Definition as MAEV Register */
#define USB_USB_M_WARN                        (1U << 0) /* Same Bit Definition as MAEV Register */

/* USB_MCTRL Register */

#define USB_LSMODE                            (1U << 4) /* Low Speed Mode This bit enables USB 1.5 Mb/s low speed and swaps D+ and D- pull- */
#define USB_USB_NAT                           (1U << 3) /* Node Attached This bit indicates that this node is ready to be detected as attac */
#define USB_USB_DBG                           (1U << 1) /* Debug Mode. When this bit is set, the following registers are writable: Main Eve */
#define USB_USBEN                             (1U << 0) /* USB EnableSetting this bit to 1 enables the Full/Low Speed USB node. If the USBE */

/* USB_NAKEV Register */

#define USB_USB_OUT31_MASK                    (0x7 << 4) /* OUT n: 3:1 The bit n is set to 1 when a NAK handshake is generated for an enable */
#define USB_USB_OUT31_POS                     (4) /* OUT n: 3:1 The bit n is set to 1 when a NAK handshake is generated for an enable */
#define USB_USB_IN31_MASK                     (0x7 << 0) /* IN n: 3:1 The bit n is set to 1 when a NAK handshake is generated for an enabled */
#define USB_USB_IN31_POS                      (0) /* IN n: 3:1 The bit n is set to 1 when a NAK handshake is generated for an enabled */

/* USB_NAKMSK Register */

#define USB_USB_M_OUT31_MASK                  (0x7 << 4) /* When set and the corresponding bit in the NAKEV register is set, the NAK bit in  */
#define USB_USB_M_OUT31_POS                   (4) /* When set and the corresponding bit in the NAKEV register is set, the NAK bit in  */
#define USB_USB_M_IN31_MASK                   (0x7 << 0) /* Same Bit Definition as NAKEV Register */
#define USB_USB_M_IN31_POS                    (0) /* Same Bit Definition as NAKEV Register */

/* USB_NFSR Register */

#define USB_USB_NFS_MASK                      (0x3 << 0) /* The Node Functional State Register reports and controls the current functional s */
#define USB_USB_NFS_POS                       (0) /* The Node Functional State Register reports and controls the current functional s */

/* USB_RXC0 Register */

#define USB_USB_FLUSH                         (1U << 3) /* Flush Writing a 1 to this bit flushes all data from the control endpoint FIFOs,  */
#define USB_USB_IGN_SETUP                     (1U << 2) /* Ignore SETUP Tokens When this bit is set to 1, the endpoint ignores any SETUP to */
#define USB_USB_IGN_OUT                       (1U << 1) /* Ignore OUT Tokens When this bit is set to 1, the endpoint ignores any OUT tokens */
#define USB_USB_RX_EN                         (1U << 0) /* Receive Enable OUT packet reception is disabled after every data packet is recei */

/* USB_RXC1 Register */

#define USB_USB_RFWL_MASK                     (0x3 << 5) /* Receive FIFO Warning Limit These bits specify how many more bytes can be receive */
#define USB_USB_RFWL_POS                      (5) /* Receive FIFO Warning Limit These bits specify how many more bytes can be receive */
#define USB_USB_FLUSH                         (1U << 3) /* Flush FIFO Writing a 1 to this bit flushes all data from the corresponding recei */
#define USB_USB_IGN_SETUP                     (1U << 2) /* Ignore SETUP Tokens When this bit is set to 1, the endpoint ignores any SETUP to */
#define USB_USB_RX_EN                         (1U << 0) /* Receive Enable OUT packet cannot be received after every data packet is received */

/* USB_RXC2 Register */

#define USB_USB_RFWL_MASK                     (0x3 << 5) /* Receive FIFO Warning Limit These bits specify how many more bytes can be receive */
#define USB_USB_RFWL_POS                      (5) /* Receive FIFO Warning Limit These bits specify how many more bytes can be receive */
#define USB_USB_FLUSH                         (1U << 3) /* Flush FIFO Writing a 1 to this bit flushes all data from the corresponding recei */
#define USB_USB_IGN_SETUP                     (1U << 2) /* Ignore SETUP Tokens When this bit is set to 1, the endpoint ignores any SETUP to */
#define USB_USB_RX_EN                         (1U << 0) /* Receive Enable OUT packet cannot be received after every data packet is received */

/* USB_RXC3 Register */

#define USB_USB_RFWL_MASK                     (0x3 << 5) /* Receive FIFO Warning Limit These bits specify how many more bytes can be receive */
#define USB_USB_RFWL_POS                      (5) /* Receive FIFO Warning Limit These bits specify how many more bytes can be receive */
#define USB_USB_FLUSH                         (1U << 3) /* Flush FIFO Writing a 1 to this bit flushes all data from the corresponding recei */
#define USB_USB_IGN_SETUP                     (1U << 2) /* Ignore SETUP Tokens When this bit is set to 1, the endpoint ignores any SETUP to */
#define USB_USB_RX_EN                         (1U << 0) /* Receive Enable OUT packet cannot be received after every data packet is received */

/* USB_RXD0 Register */

#define USB_USB_RXFD_MASK                     (0xFF << 0) /* Receive FIFO Data Byte The firmware should expect to read only the packet payloa */
#define USB_USB_RXFD_POS                      (0) /* Receive FIFO Data Byte The firmware should expect to read only the packet payloa */

/* USB_RXD1 Register */

#define USB_USB_RXFD_MASK                     (0xFF << 0) /* Receive FIFO Data Byte The firmware should expect to read only the packet payloa */
#define USB_USB_RXFD_POS                      (0) /* Receive FIFO Data Byte The firmware should expect to read only the packet payloa */

/* USB_RXD2 Register */

#define USB_USB_RXFD_MASK                     (0xFF << 0) /* Receive FIFO Data Byte The firmware should expect to read only the packet payloa */
#define USB_USB_RXFD_POS                      (0) /* Receive FIFO Data Byte The firmware should expect to read only the packet payloa */

/* USB_RXD3 Register */

#define USB_USB_RXFD_MASK                     (0xFF << 0) /* Receive FIFO Data Byte The firmware should expect to read only the packet payloa */
#define USB_USB_RXFD_POS                      (0) /* Receive FIFO Data Byte The firmware should expect to read only the packet payloa */

/* USB_RXEV Register */

#define USB_USB_RXOVRRN31_MASK                (0x7 << 4) /* Receive Overrun n: 3:1 The bit n is set to 1 in the event of an overrun conditio */
#define USB_USB_RXOVRRN31_POS                 (4) /* Receive Overrun n: 3:1 The bit n is set to 1 in the event of an overrun conditio */
#define USB_USB_RXFIFO31_MASK                 (0x7 << 0) /* Receive FIFO n: 3:1 The bit n is set to 1 whenever either RX_ERR or RX_LAST in t */
#define USB_USB_RXFIFO31_POS                  (0) /* Receive FIFO n: 3:1 The bit n is set to 1 whenever either RX_ERR or RX_LAST in t */

/* USB_RXMSK Register */

#define USB_USB_M_RXOVRRN31_MASK              (0x7 << 4) /* The Receive Mask Register is used to select the bits of the RXEV registers, whic */
#define USB_USB_M_RXOVRRN31_POS               (4) /* The Receive Mask Register is used to select the bits of the RXEV registers, whic */
#define USB_USB_M_RXFIFO31_MASK               (0x7 << 0) /* Same Bit Definition as RXEV Register */
#define USB_USB_M_RXFIFO31_POS                (0) /* Same Bit Definition as RXEV Register */

/* USB_RXS0 Register */

#define USB_USB_SETUP                         (1U << 13) /* Setup This bit indicates that the setup packet has been received. This bit is un */
#define USB_USB_TOGGLE_RX0                    (1U << 12) /* Toggle This bit specified the PID used when receiving the packet. A value of 0 i */
#define USB_USB_RX_LAST                       (1U << 11) /* Receive Last Bytes This bit indicates that an ACK was sent upon completion of a  */
#define USB_USB_RCOUNT_MASK                   (0x7FF << 0) /* Receive Count This field contains the number of bytes presently in the RX FIFO. */
#define USB_USB_RCOUNT_POS                    (0) /* Receive Count This field contains the number of bytes presently in the RX FIFO. */

/* USB_RXS1 Register */

#define USB_USB_RXFULL                        (1U << 15) /* Indicates that the RX fifo is full */
#define USB_USB_RX_ERR                        (1U << 14) /* Receive Error When set to 1, this bit indicates a media error, such as bit-stuff */
#define USB_USB_SETUP                         (1U << 13) /* Setup This bit indicates that the setup packet has been received. It is cleared  */
#define USB_USB_TOGGLE_RX                     (1U << 12) /* Toggle The function of this bit differs depending on whether ISO (ISO in the EPC */
#define USB_USB_RX_LAST                       (1U << 11) /* Receive Last This bit indicates that an ACK was sent upon completion of a succes */
#define USB_USB_RCOUNT_MASK                   (0x7FF << 0) /* Receive Count This field contains the number of bytes presently in the RX FIFO. */
#define USB_USB_RCOUNT_POS                    (0) /* Receive Count This field contains the number of bytes presently in the RX FIFO. */

/* USB_RXS2 Register */

#define USB_USB_RXFULL                        (1U << 15) /* Indicates that the RX fifo is full */
#define USB_USB_RX_ERR                        (1U << 14) /* Receive Error When set to 1, this bit indicates a media error, such as bit-stuff */
#define USB_USB_SETUP                         (1U << 13) /* Setup This bit indicates that the setup packet has been received. It is cleared  */
#define USB_USB_TOGGLE_RX                     (1U << 12) /* Toggle The function of this bit differs depending on whether ISO (ISO in the EPC */
#define USB_USB_RX_LAST                       (1U << 11) /* Receive Last This bit indicates that an ACK was sent upon completion of a succes */
#define USB_USB_RCOUNT_MASK                   (0x7FF << 0) /* Receive Count This field contains the number of bytes presently in the RX FIFO. */
#define USB_USB_RCOUNT_POS                    (0) /* Receive Count This field contains the number of bytes presently in the RX FIFO. */

/* USB_RXS3 Register */

#define USB_USB_RXFULL                        (1U << 15) /* Indicates that the RX fifo is full */
#define USB_USB_RX_ERR                        (1U << 14) /* Receive Error When set to 1, this bit indicates a media error, such as bit-stuff */
#define USB_USB_SETUP                         (1U << 13) /* Setup This bit indicates that the setup packet has been received. It is cleared  */
#define USB_USB_TOGGLE_RX                     (1U << 12) /* Toggle The function of this bit differs depending on whether ISO (ISO in the EPC */
#define USB_USB_RX_LAST                       (1U << 11) /* Receive Last This bit indicates that an ACK was sent upon completion of a succes */
#define USB_USB_RCOUNT_MASK                   (0x7FF << 0) /* Receive Count This field contains the number of bytes presently in the RX FIFO. */
#define USB_USB_RCOUNT_POS                    (0) /* Receive Count This field contains the number of bytes presently in the RX FIFO. */

/* USB_TCR Register */

#define USB_USB_VADJ_MASK                     (0x7 << 5) /* Reference Voltage/ Threshold voltage AdjustControls the single-ended receiver th */
#define USB_USB_VADJ_POS                      (5) /* Reference Voltage/ Threshold voltage AdjustControls the single-ended receiver th */
#define USB_USB_CADJ_MASK                     (0x1F << 0) /* Transmitter Current Adjust Controls the driver edge rate control current. Shall  */
#define USB_USB_CADJ_POS                      (0) /* Transmitter Current Adjust Controls the driver edge rate control current. Shall  */

/* USB_TXC0 Register */

#define USB_USB_IGN_IN                        (1U << 4) /* Ignore IN Tokens When this bit is set to 1, the endpoint will ignore any IN toke */
#define USB_USB_FLUSH                         (1U << 3) /* Flush FIFO Writing a 1 to this bit flushes all data from the control endpoint FI */
#define USB_USB_TOGGLE_TX0                    (1U << 2) /* Toggle This bit specifies the PID used when transmitting the packet. A value of  */
#define USB_USB_TX_EN                         (1U << 0) /* Transmission Enable This bit enables data transmission from the FIFO. It is clea */

/* USB_TXC1 Register */

#define USB_USB_IGN_ISOMSK                    (1U << 7) /* Ignore ISO Mask This bit has an effect only if the endpoint is set to be isochro */
#define USB_USB_TFWL_MASK                     (0x3 << 5) /* Transmit FIFO Warning Limit These bits specify how many more bytes can be transm */
#define USB_USB_TFWL_POS                      (5) /* Transmit FIFO Warning Limit These bits specify how many more bytes can be transm */
#define USB_USB_RFF                           (1U << 4) /* Refill FIFO Setting the LAST bit to 1 automatically saves the Transmit Read Poin */
#define USB_USB_FLUSH                         (1U << 3) /* Flush FIFO Writing a 1 to this bit flushes all data from the corresponding trans */
#define USB_USB_TOGGLE_TX                     (1U << 2) /* Toggle The function of this bit differs depending on whether ISO (ISO bit in the */
#define USB_USB_LAST                          (1U << 1) /* Last Byte Setting this bit to 1 indicates that the entire packet has been writte */
#define USB_USB_TX_EN                         (1U << 0) /* Transmission Enable This bit enables data transmission from the FIFO. It is clea */

/* USB_TXC2 Register */

#define USB_USB_IGN_ISOMSK                    (1U << 7) /* Ignore ISO Mask This bit has an effect only if the endpoint is set to be isochro */
#define USB_USB_TFWL_MASK                     (0x3 << 5) /* Transmit FIFO Warning Limit These bits specify how many more bytes can be transm */
#define USB_USB_TFWL_POS                      (5) /* Transmit FIFO Warning Limit These bits specify how many more bytes can be transm */
#define USB_USB_RFF                           (1U << 4) /* Refill FIFO Setting the LAST bit to 1 automatically saves the Transmit Read Poin */
#define USB_USB_FLUSH                         (1U << 3) /* Flush FIFO Writing a 1 to this bit flushes all data from the corresponding trans */
#define USB_USB_TOGGLE_TX                     (1U << 2) /* Toggle The function of this bit differs depending on whether ISO (ISO bit in the */
#define USB_USB_LAST                          (1U << 1) /* Last Byte Setting this bit to 1 indicates that the entire packet has been writte */
#define USB_USB_TX_EN                         (1U << 0) /* Transmission Enable This bit enables data transmission from the FIFO. It is clea */

/* USB_TXC3 Register */

#define USB_USB_IGN_ISOMSK                    (1U << 7) /* Ignore ISO Mask This bit has an effect only if the endpoint is set to be isochro */
#define USB_USB_TFWL_MASK                     (0x3 << 5) /* Transmit FIFO Warning Limit These bits specify how many more bytes can be transm */
#define USB_USB_TFWL_POS                      (5) /* Transmit FIFO Warning Limit These bits specify how many more bytes can be transm */
#define USB_USB_RFF                           (1U << 4) /* Refill FIFO Setting the LAST bit to 1 automatically saves the Transmit Read Poin */
#define USB_USB_FLUSH                         (1U << 3) /* Flush FIFO Writing a 1 to this bit flushes all data from the corresponding trans */
#define USB_USB_TOGGLE_TX                     (1U << 2) /* Toggle The function of this bit differs depending on whether ISO (ISO bit in the */
#define USB_USB_LAST                          (1U << 1) /* Last Byte Setting this bit to 1 indicates that the entire packet has been writte */
#define USB_USB_TX_EN                         (1U << 0) /* Transmission Enable This bit enables data transmission from the FIFO. It is clea */

/* USB_TXD0 Register */

#define USB_USB_TXFD_MASK                     (0xFF << 0) /* Transmit FIFO Data Byte The firmware is expected to write only the packet payloa */
#define USB_USB_TXFD_POS                      (0) /* Transmit FIFO Data Byte The firmware is expected to write only the packet payloa */

/* USB_TXD1 Register */

#define USB_USB_TXFD_MASK                     (0xFF << 0) /* Transmit FIFO Data Byte The firmware is expected to write only the packet payloa */
#define USB_USB_TXFD_POS                      (0) /* Transmit FIFO Data Byte The firmware is expected to write only the packet payloa */

/* USB_TXD2 Register */

#define USB_USB_TXFD_MASK                     (0xFF << 0) /* Transmit FIFO Data Byte The firmware is expected to write only the packet payloa */
#define USB_USB_TXFD_POS                      (0) /* Transmit FIFO Data Byte The firmware is expected to write only the packet payloa */

/* USB_TXD3 Register */

#define USB_USB_TXFD_MASK                     (0xFF << 0) /* Transmit FIFO Data Byte The firmware is expected to write only the packet payloa */
#define USB_USB_TXFD_POS                      (0) /* Transmit FIFO Data Byte The firmware is expected to write only the packet payloa */

/* USB_TXEV Register */

#define USB_USB_TXUDRRN31_MASK                (0x7 << 4) /* Transmit Underrun n: 3:1 The bit n is a copy of the respective TX_URUN bit from  */
#define USB_USB_TXUDRRN31_POS                 (4) /* Transmit Underrun n: 3:1 The bit n is a copy of the respective TX_URUN bit from  */
#define USB_USB_TXFIFO31_MASK                 (0x7 << 0) /* Transmit FIFO n: 3:1 The bit n is a copy of the TX_DONE bit from the correspondi */
#define USB_USB_TXFIFO31_POS                  (0) /* Transmit FIFO n: 3:1 The bit n is a copy of the TX_DONE bit from the correspondi */

/* USB_TXMSK Register */

#define USB_USB_M_TXUDRRN31_MASK              (0x7 << 4) /* The Transmit Mask Register is used to select the bits of the TXEV registers, whi */
#define USB_USB_M_TXUDRRN31_POS               (4) /* The Transmit Mask Register is used to select the bits of the TXEV registers, whi */
#define USB_USB_M_TXFIFO31_MASK               (0x7 << 0) /* Same Bit Definition as TXEV Register */
#define USB_USB_M_TXFIFO31_POS                (0) /* Same Bit Definition as TXEV Register */

/* USB_TXS0 Register */

#define USB_USB_ACK_STAT                      (1U << 12) /* Acknowledge Status This bit indicates the status, as received from the host, of  */
#define USB_USB_TX_DONE                       (1U << 11) /* Transmission Done When set to 1, this bit indicates that a packet has completed  */
#define USB_USB_TCOUNT_MASK                   (0x7FF << 0) /* Transmission Count This field indicates the number of empty bytes available in t */
#define USB_USB_TCOUNT_POS                    (0) /* Transmission Count This field indicates the number of empty bytes available in t */

/* USB_TXS1 Register */

#define USB_USB_TX_URUN                       (1U << 13) /* Transmit FIFO Underrun This bit is set to 1, if the transmit FIFO becomes empty  */
#define USB_USB_ACK_STAT                      (1U << 12) /* Acknowledge Status This bit is interpreted when TX_DONE is set. It's function di */
#define USB_USB_TX_DONE                       (1U << 11) /* Transmission Done When set to 1, this bit indicates that the endpoint responded  */
#define USB_USB_TCOUNT_MASK                   (0x7FF << 0) /* Transmission Count This field indicates the number of empty bytes available in t */
#define USB_USB_TCOUNT_POS                    (0) /* Transmission Count This field indicates the number of empty bytes available in t */

/* USB_TXS2 Register */

#define USB_USB_TX_URUN                       (1U << 13) /* Transmit FIFO Underrun This bit is set to 1, if the transmit FIFO becomes empty  */
#define USB_USB_ACK_STAT                      (1U << 12) /* Acknowledge Status This bit is interpreted when TX_DONE is set. It's function di */
#define USB_USB_TX_DONE                       (1U << 11) /* Transmission Done When set to 1, this bit indicates that the endpoint responded  */
#define USB_USB_TCOUNT_MASK                   (0x7FF << 0) /* Transmission Count This field indicates the number of empty bytes available in t */
#define USB_USB_TCOUNT_POS                    (0) /* Transmission Count This field indicates the number of empty bytes available in t */

/* USB_TXS3 Register */

#define USB_USB_TX_URUN                       (1U << 13) /* Transmit FIFO Underrun This bit is set to 1, if the transmit FIFO becomes empty  */
#define USB_USB_ACK_STAT                      (1U << 12) /* Acknowledge Status This bit is interpreted when TX_DONE is set. It's function di */
#define USB_USB_TX_DONE                       (1U << 11) /* Transmission Done When set to 1, this bit indicates that the endpoint responded  */
#define USB_USB_TCOUNT_MASK                   (0x7FF << 0) /* Transmission Count This field indicates the number of empty bytes available in t */
#define USB_USB_TCOUNT_POS                    (0) /* Transmission Count This field indicates the number of empty bytes available in t */

/* USB_UTR Register */

#define USB_USB_DIAG                          (1U << 7) /* Diagnostic enable 0: Normal operational. 1: Access to the USB_XCVDIAG_REG and US */
#define USB_USB_NCRC                          (1U << 6) /* No CRC16 When this bit is set to 1, all packets transmitted by the Full/Low Spee */
#define USB_USB_SF                            (1U << 5) /* Short Frame Enables the Frame timer to lock and track, short, non-compliant USB  */
#define USB_USB_UTR_RES_MASK                  (0x1F << 0) /* Reserved. Must be kept to 0 */
#define USB_USB_UTR_RES_POS                   (0) /* Reserved. Must be kept to 0 */

/* USB_UX20CDR Register */

#define USB_RPU_TEST7                         (1U << 7) /* Test bit */
#define USB_RPU_TEST_SW2                      (1U << 6) /* 0: Closes SW2 switch to reduced pull-up resistor connected to the USB_Dp and USB */
#define USB_RPU_TEST_SW1                      (1U << 5) /* 0: Enable the pull-up resistor on USB_Dp (SW1 closed) 1: Disable the pull-up res */
#define USB_RPU_TEST_EN                       (1U << 4) /* Pull-Up Resistor Test Enable 0: Normal operation 1: Enables the test features co */
#define USB_RPU_TEST_SW1DM                    (1U << 2) /* 0: Enable the pull-up resistor on USB_Dm (SW1DM closed) 1: Disable the pull-up r */
#define USB_RPU_RCDELAY                       (1U << 1) /* Test bit, must be kept 0 */
#define USB_RPU_SSPROTEN                      (1U << 0) /* Test bit, must be kept 0 */

/* USB_XCVDIAG Register */

#define USB_USB_VPIN                          (1U << 7) /* With Bit0 = 1 this bit shows the level of the USB_Dp receive data from transceiv */
#define USB_USB_VMIN                          (1U << 6) /* With Bit0 = 1 this bit shows the level USB_Dm receive data from transceiver; D-  */
#define USB_USB_RCV                           (1U << 5) /* With Bit0 = 1 this bit shows the differential level of the receive comparator. */
#define USB_USB_XCV_TXEN                      (1U << 3) /* With Bit0 = 1, this bit enables test Bits 2,1. Must be kept to 0 for normal oper */
#define USB_USB_XCV_TXn                       (1U << 2) /* With Bit3,0 = 1, this bit sets USB_Dm to a high level, independent of LSMODE sel */
#define USB_USB_XCV_TXp                       (1U << 1) /* With Bit3,0 = 1, this bit sets USB_Dp to a high level, independent of LSMODE sel */
#define USB_USB_XCV_TEST                      (1U << 0) /* Enable USB_XCVDIAG_REG 0: Normal operation, test bits disabled 1: Enable test bi */

#endif /* __DA1470X_USB_H */
