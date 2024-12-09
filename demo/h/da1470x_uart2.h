/****************************************************************************
 * ./tmp/da1470x_uart2.h
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

#ifndef __DA1470X_UART2_H
#define __DA1470X_UART2_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_UART2_UART2_CTR_OFFSET           0x00FC /* Component Type Register */
#define DA1470X_UART2_UART2_DLF_OFFSET           0x00C0 /* Divisor Latch Fraction Register */
#define DA1470X_UART2_UART2_DMASA_OFFSET         0x00A8 /* DMA Software Acknowledge */
#define DA1470X_UART2_UART2_HTX_OFFSET           0x00A4 /* Halt TX */
#define DA1470X_UART2_UART2_IER_DLH_OFFSET       0x0004 /* Interrupt Enable Register */
#define DA1470X_UART2_UART2_IIR_FCR_OFFSET       0x0008 /* Interrupt Identification Register/FIFO Control Register */
#define DA1470X_UART2_UART2_LCR_EXT_OFFSET       0x00CC /* Line Extended Control Register */
#define DA1470X_UART2_UART2_LCR_OFFSET           0x000C /* Line Control Register */
#define DA1470X_UART2_UART2_LSR_OFFSET           0x0014 /* Line Status Register */
#define DA1470X_UART2_UART2_MCR_OFFSET           0x0010 /* Modem Control Register */
#define DA1470X_UART2_UART2_MSR_OFFSET           0x0018 /* Modem Status Register */
#define DA1470X_UART2_UART2_RAR_OFFSET           0x00C4 /* Receive Address Register */
#define DA1470X_UART2_UART2_RBR_THR_DLL_OFFSET   0x0000 /* Receive Buffer Register */
#define DA1470X_UART2_UART2_RFL_OFFSET           0x0084 /* Receive FIFO Level. */
#define DA1470X_UART2_UART2_SBCR_OFFSET          0x0090 /* Shadow Break Control Register */
#define DA1470X_UART2_UART2_SCR_OFFSET           0x001C /* Scratchpad Register */
#define DA1470X_UART2_UART2_SDMAM_OFFSET         0x0094 /* Shadow DMA Mode */
#define DA1470X_UART2_UART2_SFE_OFFSET           0x0098 /* Shadow FIFO Enable */
#define DA1470X_UART2_UART2_SRBR_STHR0_OFFSET    0x0030 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR10_OFFSET   0x0058 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR11_OFFSET   0x005C /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR12_OFFSET   0x0060 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR13_OFFSET   0x0064 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR14_OFFSET   0x0068 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR15_OFFSET   0x006C /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR1_OFFSET    0x0034 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR2_OFFSET    0x0038 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR3_OFFSET    0x003C /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR4_OFFSET    0x0040 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR5_OFFSET    0x0044 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR6_OFFSET    0x0048 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR7_OFFSET    0x004C /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR8_OFFSET    0x0050 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR9_OFFSET    0x0054 /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRR_OFFSET           0x0088 /* Software Reset Register. */
#define DA1470X_UART2_UART2_SRTS_OFFSET          0x008C /* Shadow Request to Send */
#define DA1470X_UART2_UART2_SRT_OFFSET           0x009C /* Shadow RCVR Trigger */
#define DA1470X_UART2_UART2_STET_OFFSET          0x00A0 /* Shadow TX Empty Trigger */
#define DA1470X_UART2_UART2_TAR_OFFSET           0x00C8 /* Transmit Address Register */
#define DA1470X_UART2_UART2_TFL_OFFSET           0x0080 /* Transmit FIFO Level */
#define DA1470X_UART2_UART2_UCV_OFFSET           0x00F8 /* Component Version */
#define DA1470X_UART2_UART2_USR_OFFSET           0x007C /* UART Status register. */

/* Register addresses *******************************************************/

#define DA1470X_UART2_BASE                       0x50020100 /* UART2 registers */

#define DA1470X_UART2_UART2_CTR                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_CTR_OFFSET) /* Component Type Register */
#define DA1470X_UART2_UART2_DLF                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_DLF_OFFSET) /* Divisor Latch Fraction Register */
#define DA1470X_UART2_UART2_DMASA                (DA1470X_UART2_BASE + DA1470X_UART2_UART2_DMASA_OFFSET) /* DMA Software Acknowledge */
#define DA1470X_UART2_UART2_HTX                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_HTX_OFFSET) /* Halt TX */
#define DA1470X_UART2_UART2_IER_DLH              (DA1470X_UART2_BASE + DA1470X_UART2_UART2_IER_DLH_OFFSET) /* Interrupt Enable Register */
#define DA1470X_UART2_UART2_IIR_FCR              (DA1470X_UART2_BASE + DA1470X_UART2_UART2_IIR_FCR_OFFSET) /* Interrupt Identification Register/FIFO Control Register */
#define DA1470X_UART2_UART2_LCR_EXT              (DA1470X_UART2_BASE + DA1470X_UART2_UART2_LCR_EXT_OFFSET) /* Line Extended Control Register */
#define DA1470X_UART2_UART2_LCR                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_LCR_OFFSET) /* Line Control Register */
#define DA1470X_UART2_UART2_LSR                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_LSR_OFFSET) /* Line Status Register */
#define DA1470X_UART2_UART2_MCR                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_MCR_OFFSET) /* Modem Control Register */
#define DA1470X_UART2_UART2_MSR                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_MSR_OFFSET) /* Modem Status Register */
#define DA1470X_UART2_UART2_RAR                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_RAR_OFFSET) /* Receive Address Register */
#define DA1470X_UART2_UART2_RBR_THR_DLL          (DA1470X_UART2_BASE + DA1470X_UART2_UART2_RBR_THR_DLL_OFFSET) /* Receive Buffer Register */
#define DA1470X_UART2_UART2_RFL                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_RFL_OFFSET) /* Receive FIFO Level. */
#define DA1470X_UART2_UART2_SBCR                 (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SBCR_OFFSET) /* Shadow Break Control Register */
#define DA1470X_UART2_UART2_SCR                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SCR_OFFSET) /* Scratchpad Register */
#define DA1470X_UART2_UART2_SDMAM                (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SDMAM_OFFSET) /* Shadow DMA Mode */
#define DA1470X_UART2_UART2_SFE                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SFE_OFFSET) /* Shadow FIFO Enable */
#define DA1470X_UART2_UART2_SRBR_STHR0           (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR0_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR10          (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR10_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR11          (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR11_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR12          (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR12_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR13          (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR13_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR14          (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR14_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR15          (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR15_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR1           (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR1_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR2           (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR2_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR3           (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR3_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR4           (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR4_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR5           (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR5_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR6           (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR6_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR7           (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR7_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR8           (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR8_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRBR_STHR9           (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRBR_STHR9_OFFSET) /* Shadow Receive/Transmit Buffer Register */
#define DA1470X_UART2_UART2_SRR                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRR_OFFSET) /* Software Reset Register. */
#define DA1470X_UART2_UART2_SRTS                 (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRTS_OFFSET) /* Shadow Request to Send */
#define DA1470X_UART2_UART2_SRT                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_SRT_OFFSET) /* Shadow RCVR Trigger */
#define DA1470X_UART2_UART2_STET                 (DA1470X_UART2_BASE + DA1470X_UART2_UART2_STET_OFFSET) /* Shadow TX Empty Trigger */
#define DA1470X_UART2_UART2_TAR                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_TAR_OFFSET) /* Transmit Address Register */
#define DA1470X_UART2_UART2_TFL                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_TFL_OFFSET) /* Transmit FIFO Level */
#define DA1470X_UART2_UART2_UCV                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_UCV_OFFSET) /* Component Version */
#define DA1470X_UART2_UART2_USR                  (DA1470X_UART2_BASE + DA1470X_UART2_UART2_USR_OFFSET) /* UART Status register. */

/* Register bit definitions *************************************************/


/* UART2_CTR Register */

#define UART2_UART_CTR_MASK                      (0xFFFFFFFF << 0) /* Component Type Register */
#define UART2_UART_CTR_POS                       (0) /* Component Type Register */

/* UART2_DLF Register */

#define UART2_UART_DLF_MASK                      (0xF << 0) /* The fractional value is added to integer value set by DLH, DLL. Fractional value */
#define UART2_UART_DLF_POS                       (0) /* The fractional value is added to integer value set by DLH, DLL. Fractional value */

/* UART2_DMASA Register */

#define UART2_UART_DMASA                         (1U << 0) /* This register is use to perform DMA software acknowledge if a transfer needs to  */

/* UART2_HTX Register */

#define UART2_UART_HALT_TX                       (1U << 0) /* This register is use to halt transmissions, so that the transmit FIFO can be fil */

/* UART2_IER_DLH Register */

#define UART2_PTIME_DLH7                         (1U << 7) /* Interrupt Enable Register: PTIME, Programmable THRE Interrupt Mode Enable. This  */
#define UART2_DLH6_5_MASK                        (0x3 << 5) /* Divisor Latch (High): Bit[6:5] of the 8 bit DLH register */
#define UART2_DLH6_5_POS                         (5) /* Divisor Latch (High): Bit[6:5] of the 8 bit DLH register */
#define UART2_ELCOLR_DLH4                        (1U << 4) /* Interrupt Enable Register: ELCOLR (read only), this bit controls the method for  */
#define UART2_EDSSI_DLH3                         (1U << 3) /* Interrupt Enable Register: EDSSI, Enable Modem Status Interrupt. This is used to */
#define UART2_ELSI_DLH2                          (1U << 2) /* Interrupt Enable Register: ELSI, Enable Receiver Line Status Interrupt. This is  */
#define UART2_ETBEI_DLH1                         (1U << 1) /* Interrupt Enable Register: ETBEI, Enable Transmit Holding Register Empty Interru */
#define UART2_ERBFI_DLH0                         (1U << 0) /* Interrupt Enable Register: ERBFI, Enable Received Data Available Interrupt. This */

/* UART2_IIR_FCR Register */

#define UART2_IIR_FCR_MASK                       (0xFF << 0) /* On Read Interrupt Identification Register : Bits[7:6], FIFO's Enabled (or FIFOSE */
#define UART2_IIR_FCR_POS                        (0) /* On Read Interrupt Identification Register : Bits[7:6], FIFO's Enabled (or FIFOSE */

/* UART2_LCR_EXT Register */

#define UART2_UART_TRANSMIT_MODE                 (1U << 3) /* Transmit mode control bit. This bit is used to control the type of transmit mode */
#define UART2_UART_SEND_ADDR                     (1U << 2) /* Send address control bit. This bit is used as a control knob for the user to det */
#define UART2_UART_ADDR_MATCH                    (1U << 1) /* Address Match Mode.This bit is used to enable the address match feature during r */
#define UART2_UART_DLS_E                         (1U << 0) /* Extension for DLS. This bit is used to enable 9-bit data for transmit and receiv */

/* UART2_LCR Register */

#define UART2_UART_DLAB                          (1U << 7) /* Divisor Latch Access Bit. This bit is used to enable reading and writing of the  */
#define UART2_UART_BC                            (1U << 6) /* Break Control Bit. This is used to cause a break condition to be transmitted to  */
#define UART2_UART_SP                            (1U << 5) /* Stick Parity. (writeable only when UART is not busy USR[0] is 0); otherwise alwa */
#define UART2_UART_EPS                           (1U << 4) /* Even Parity Select. Writeable only when UART is not busy (USR[0] is zero). This  */
#define UART2_UART_PEN                           (1U << 3) /* Parity Enable. Writeable only when UART is not busy (USR[0] is zero) This bit is */
#define UART2_UART_STOP                          (1U << 2) /* Number of stop bits. This is used to select the number of stop bits per characte */
#define UART2_UART_DLS_MASK                      (0x3 << 0) /* Data Length Select. This is used to select the number of data bits per character */
#define UART2_UART_DLS_POS                       (0) /* Data Length Select. This is used to select the number of data bits per character */

/* UART2_LSR Register */

#define UART2_UART_ADDR_RCVD                     (1U << 8) /* Address Received Bit. If 9Bit data mode (LCR_EXT[0]=1) is enabled, this bit is u */
#define UART2_UART_RFE                           (1U << 7) /* Receiver FIFO Error bit. This bit is only relevant when FIFOs are enabled (FCR[0 */
#define UART2_UART_TEMT                          (1U << 6) /* Transmitter Empty bit. If FIFOs enabled (FCR[0] set to one), this bit is set whe */
#define UART2_UART_THRE                          (1U << 5) /* Transmit Holding Register Empty bit. If THRE mode is disabled (IER[7] set to zer */
#define UART2_UART_BI                            (1U << 4) /* Break Interrupt bit. This is used to indicate the detection of a break sequence  */
#define UART2_UART_FE                            (1U << 3) /* Framing Error bit. This is used to indicate the occurrence of a framing error in */
#define UART2_UART_PE                            (1U << 2) /* Parity Error bit. This is used to indicate the occurrence of a parity error in t */
#define UART2_UART_OE                            (1U << 1) /* Overrun error bit. This is used to indicate the occurrence of an overrun error.  */
#define UART2_UART_DR                            (1U << 0) /* Data Ready bit. This is used to indicate that the receiver contains at least one */

/* UART2_MCR Register */

#define UART2_UART_AFCE                          (1U << 5) /* Auto Flow Control Enable. When FIFOs are enabled and the Auto Flow Control Enabl */
#define UART2_UART_LB                            (1U << 4) /* LoopBack Bit. This is used to put the UART into a diagnostic mode for test purpo */
#define UART2_UART_RTS                           (1U << 1) /* Request to Send. This is used to directly control the Request to Send (rts_n) ou */

/* UART2_MSR Register */

#define UART2_UART_CTS                           (1U << 4) /* Clear to Send. This is used to indicate the current state of the modem control l */
#define UART2_UART_DCTS                          (1U << 0) /* Delta Clear to Send. This is used to indicate that the modem control line cts_n  */

/* UART2_RAR Register */

#define UART2_UART_RAR_MASK                      (0xFF << 0) /* This is an address matching register during receive mode. If the 9-th bit is set */
#define UART2_UART_RAR_POS                       (0) /* This is an address matching register during receive mode. If the 9-th bit is set */

/* UART2_RBR_THR_DLL Register */

#define UART2_RBR_THR_9BIT                       (1U << 8) /* When 9BIT_DATA_EN, On read :Receive Buffer bit 8 - On write Transmit Buffer bit  */
#define UART2_RBR_THR_DLL_MASK                   (0xFF << 0) /* Receive Buffer Register: (RBR). This register contains the data byte received on */
#define UART2_RBR_THR_DLL_POS                    (0) /* Receive Buffer Register: (RBR). This register contains the data byte received on */

/* UART2_RFL Register */

#define UART2_UART_RECEIVE_FIFO_LEVEL_MASK       (0x1F << 0) /* Receive FIFO Level. This is indicates the number of data entries in the receive  */
#define UART2_UART_RECEIVE_FIFO_LEVEL_POS        (0) /* Receive FIFO Level. This is indicates the number of data entries in the receive  */

/* UART2_SBCR Register */

#define UART2_UART_SHADOW_BREAK_CONTROL          (1U << 0) /* Shadow Break Control Bit. This is a shadow register for the Break bit (LCR[6]),  */

/* UART2_SCR Register */

#define UART2_UART_SCRATCH_PAD_MASK              (0xFF << 0) /* This register is for programmers to use as a temporary storage space. It has no  */
#define UART2_UART_SCRATCH_PAD_POS               (0) /* This register is for programmers to use as a temporary storage space. It has no  */

/* UART2_SDMAM Register */

#define UART2_UART_SHADOW_DMA_MODE               (1U << 0) /* Shadow DMA Mode. This is a shadow register for the DMA mode bit (FCR[3]). This c */

/* UART2_SFE Register */

#define UART2_UART_SHADOW_FIFO_ENABLE            (1U << 0) /* Shadow FIFO Enable. This is a shadow register for the FIFO enable bit (FCR[0]).  */

/* UART2_SRBR_STHR0 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR10 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR11 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR12 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR13 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR14 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR15 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR1 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR2 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR3 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR4 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR5 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR6 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR7 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR8 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRBR_STHR9 Register */

#define UART2_SRBR_STHRx_MASK                    (0xFF << 0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */
#define UART2_SRBR_STHRx_POS                     (0) /* Shadow Receive Buffer Register x: This is a shadow register for the RBR and has  */

/* UART2_SRR Register */

#define UART2_UART_XFR                           (1U << 2) /* XMIT FIFO Reset. This is a shadow register for the XMIT FIFO Reset bit (FCR[2]). */
#define UART2_UART_RFR                           (1U << 1) /* RCVR FIFO Reset. This is a shadow register for the RCVR FIFO Reset bit (FCR[1]). */
#define UART2_UART_UR                            (1U << 0) /* UART Reset. This asynchronously resets the UART Ctrl and synchronously removes t */

/* UART2_SRTS Register */

#define UART2_UART_SHADOW_REQUEST_TO_SEND        (1U << 0) /* Shadow Request to Send. This is a shadow register for the RTS bit (MCR[1]), this */

/* UART2_SRT Register */

#define UART2_UART_SHADOW_RCVR_TRIGGER_MASK      (0x3 << 0) /* Shadow RCVR Trigger. This is a shadow register for the RCVR trigger bits (FCR[7: */
#define UART2_UART_SHADOW_RCVR_TRIGGER_POS       (0) /* Shadow RCVR Trigger. This is a shadow register for the RCVR trigger bits (FCR[7: */

/* UART2_STET Register */

#define UART2_UART_SHADOW_TX_EMPTY_TRIGGER_MASK  (0x3 << 0) /* Shadow TX Empty Trigger. This is a shadow register for the TX empty trigger bits */
#define UART2_UART_SHADOW_TX_EMPTY_TRIGGER_POS   (0) /* Shadow TX Empty Trigger. This is a shadow register for the TX empty trigger bits */

/* UART2_TAR Register */

#define UART2_UART_TAR_MASK                      (0xFF << 0) /* This is an address matching register during transmit mode. If DLS_E (LCR_EXT[0]) */
#define UART2_UART_TAR_POS                       (0) /* This is an address matching register during transmit mode. If DLS_E (LCR_EXT[0]) */

/* UART2_TFL Register */

#define UART2_UART_TRANSMIT_FIFO_LEVEL_MASK      (0x1F << 0) /* Transmit FIFO Level. This is indicates the number of data entries in the transmi */
#define UART2_UART_TRANSMIT_FIFO_LEVEL_POS       (0) /* Transmit FIFO Level. This is indicates the number of data entries in the transmi */

/* UART2_UCV Register */

#define UART2_UART_UCV_MASK                      (0xFFFFFFFF << 0) /* Component Version */
#define UART2_UART_UCV_POS                       (0) /* Component Version */

/* UART2_USR Register */

#define UART2_UART_RFF                           (1U << 4) /* Receive FIFO Full. This is used to indicate that the receive FIFO is completely  */
#define UART2_UART_RFNE                          (1U << 3) /* Receive FIFO Not Empty. This is used to indicate that the receive FIFO contains  */
#define UART2_UART_TFE                           (1U << 2) /* Transmit FIFO Empty. This is used to indicate that the transmit FIFO is complete */
#define UART2_UART_TFNF                          (1U << 1) /* Transmit FIFO Not Full. This is used to indicate that the transmit FIFO in not f */
#define UART2_UART_BUSY                          (1U << 0) /* UART Busy. This indicates that a serial transfer is in progress, when cleared in */

#endif /* __DA1470X_UART2_H */
