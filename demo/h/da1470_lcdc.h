/****************************************************************************
 * ./tmp/da1470_lcdc.h
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

#ifndef __DA1470_LCDC_H
#define __DA1470_LCDC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_LCDC_LCDC_BACKPORCHXY_OFFSET      0x001C /* Back Porch X and Y */
#define DA1470_LCDC_LCDC_BGCOLOR_OFFSET          0x0008 /* Background Color */
#define DA1470_LCDC_LCDC_BLANKINGXY_OFFSET       0x0018 /* Blanking X and Y */
#define DA1470_LCDC_LCDC_CLKCTRL_CG_OFFSET       0x01A8 /* Controls the CLock Gaters and the routing of format and pixel clock */
#define DA1470_LCDC_LCDC_CLKCTRL_OFFSET          0x0004 /* Clock Divider */
#define DA1470_LCDC_LCDC_COLMOD_OFFSET           0x0100 /* Color mode status register */
#define DA1470_LCDC_LCDC_CONF_OFFSET             0x00F0 /* Supported config */
#define DA1470_LCDC_LCDC_CRC_OFFSET              0x0184 /* CRC check */
#define DA1470_LCDC_LCDC_DBIB_CFG_OFFSET         0x0028 /* MIPI Config Register */
#define DA1470_LCDC_LCDC_DBIB_CMD_OFFSET         0x00E8 /* MIPI DBIB Command Register */
#define DA1470_LCDC_LCDC_DBIB_RDAT_OFFSET        0x00EC /* Data read by DBI Type-B/SPI interface */
#define DA1470_LCDC_LCDC_FMTCTRL_2_OFFSET        0x01A4 /* DBI and JDI format control */
#define DA1470_LCDC_LCDC_FMTCTRL_OFFSET          0x01A0 /* DBI and JDI format control */
#define DA1470_LCDC_LCDC_FRONTPORCHXY_OFFSET     0x0014 /* Front Porch X and Y */
#define DA1470_LCDC_LCDC_GPIO_OFFSET             0x002C /* General Purpose IO (8-bits) */
#define DA1470_LCDC_LCDC_IDREG_OFFSET            0x00F4 /* Identification Register */
#define DA1470_LCDC_LCDC_INTERRUPT_OFFSET        0x00F8 /* Interrupt Register */
#define DA1470_LCDC_LCDC_LAYER0_BASEADDR_OFFSET  0x003C /* Layer0 Base Addr */
#define DA1470_LCDC_LCDC_LAYER0_MODE_OFFSET      0x0030 /* Layer0 Mode */
#define DA1470_LCDC_LCDC_LAYER0_RESXY_OFFSET     0x0044 /* Layer0 Res XY */
#define DA1470_LCDC_LCDC_LAYER0_SIZEXY_OFFSET    0x0038 /* Layer0 Size XY */
#define DA1470_LCDC_LCDC_LAYER0_STARTXY_OFFSET   0x0034 /* Layer0 Start XY */
#define DA1470_LCDC_LCDC_LAYER0_STRIDE_OFFSET    0x0040 /* Layer0 Stride */
#define DA1470_LCDC_LCDC_LAYER1_BASEADDR_OFFSET  0x005C /* Layer1 Base Addr */
#define DA1470_LCDC_LCDC_LAYER1_MODE_OFFSET      0x0050 /* Layer1 Mode */
#define DA1470_LCDC_LCDC_LAYER1_RESXY_OFFSET     0x0064 /* Layer1 Res XY */
#define DA1470_LCDC_LCDC_LAYER1_SIZEXY_OFFSET    0x0058 /* Layer1 Size XY */
#define DA1470_LCDC_LCDC_LAYER1_STARTXY_OFFSET   0x0054 /* Layer0 Start XY */
#define DA1470_LCDC_LCDC_LAYER1_STRIDE_OFFSET    0x0060 /* Layer1 Stride */
#define DA1470_LCDC_LCDC_MODE_OFFSET             0x0000 /* Display Mode */
#define DA1470_LCDC_LCDC_PALETTE_255_OFFSET      0x07FC /* Global palette/gamma correction */
#define DA1470_LCDC_LCDC_PALETTE_BASE_OFFSET     0x0400 /* Global palette/gamma correction */
#define DA1470_LCDC_LCDC_RESXY_OFFSET            0x000C /* Resolution X,Y */
#define DA1470_LCDC_LCDC_STARTXY_OFFSET          0x0024 /* Specifies the start position of the very first frame */
#define DA1470_LCDC_LCDC_STATUS_OFFSET           0x00FC /* Status Register */

/* Register addresses *******************************************************/

#define DA1470_LCDC_BASE                         0x30030000 /* LCDC registers */

#define DA1470_LCDC_LCDC_BACKPORCHXY             (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_BACKPORCHXY_OFFSET) /* Back Porch X and Y */
#define DA1470_LCDC_LCDC_BGCOLOR                 (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_BGCOLOR_OFFSET) /* Background Color */
#define DA1470_LCDC_LCDC_BLANKINGXY              (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_BLANKINGXY_OFFSET) /* Blanking X and Y */
#define DA1470_LCDC_LCDC_CLKCTRL_CG              (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_CLKCTRL_CG_OFFSET) /* Controls the CLock Gaters and the routing of format and pixel clock */
#define DA1470_LCDC_LCDC_CLKCTRL                 (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_CLKCTRL_OFFSET) /* Clock Divider */
#define DA1470_LCDC_LCDC_COLMOD                  (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_COLMOD_OFFSET) /* Color mode status register */
#define DA1470_LCDC_LCDC_CONF                    (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_CONF_OFFSET) /* Supported config */
#define DA1470_LCDC_LCDC_CRC                     (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_CRC_OFFSET) /* CRC check */
#define DA1470_LCDC_LCDC_DBIB_CFG                (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_DBIB_CFG_OFFSET) /* MIPI Config Register */
#define DA1470_LCDC_LCDC_DBIB_CMD                (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_DBIB_CMD_OFFSET) /* MIPI DBIB Command Register */
#define DA1470_LCDC_LCDC_DBIB_RDAT               (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_DBIB_RDAT_OFFSET) /* Data read by DBI Type-B/SPI interface */
#define DA1470_LCDC_LCDC_FMTCTRL_2               (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_FMTCTRL_2_OFFSET) /* DBI and JDI format control */
#define DA1470_LCDC_LCDC_FMTCTRL                 (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_FMTCTRL_OFFSET) /* DBI and JDI format control */
#define DA1470_LCDC_LCDC_FRONTPORCHXY            (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_FRONTPORCHXY_OFFSET) /* Front Porch X and Y */
#define DA1470_LCDC_LCDC_GPIO                    (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_GPIO_OFFSET) /* General Purpose IO (8-bits) */
#define DA1470_LCDC_LCDC_IDREG                   (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_IDREG_OFFSET) /* Identification Register */
#define DA1470_LCDC_LCDC_INTERRUPT               (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_INTERRUPT_OFFSET) /* Interrupt Register */
#define DA1470_LCDC_LCDC_LAYER0_BASEADDR         (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER0_BASEADDR_OFFSET) /* Layer0 Base Addr */
#define DA1470_LCDC_LCDC_LAYER0_MODE             (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER0_MODE_OFFSET) /* Layer0 Mode */
#define DA1470_LCDC_LCDC_LAYER0_RESXY            (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER0_RESXY_OFFSET) /* Layer0 Res XY */
#define DA1470_LCDC_LCDC_LAYER0_SIZEXY           (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER0_SIZEXY_OFFSET) /* Layer0 Size XY */
#define DA1470_LCDC_LCDC_LAYER0_STARTXY          (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER0_STARTXY_OFFSET) /* Layer0 Start XY */
#define DA1470_LCDC_LCDC_LAYER0_STRIDE           (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER0_STRIDE_OFFSET) /* Layer0 Stride */
#define DA1470_LCDC_LCDC_LAYER1_BASEADDR         (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER1_BASEADDR_OFFSET) /* Layer1 Base Addr */
#define DA1470_LCDC_LCDC_LAYER1_MODE             (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER1_MODE_OFFSET) /* Layer1 Mode */
#define DA1470_LCDC_LCDC_LAYER1_RESXY            (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER1_RESXY_OFFSET) /* Layer1 Res XY */
#define DA1470_LCDC_LCDC_LAYER1_SIZEXY           (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER1_SIZEXY_OFFSET) /* Layer1 Size XY */
#define DA1470_LCDC_LCDC_LAYER1_STARTXY          (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER1_STARTXY_OFFSET) /* Layer0 Start XY */
#define DA1470_LCDC_LCDC_LAYER1_STRIDE           (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_LAYER1_STRIDE_OFFSET) /* Layer1 Stride */
#define DA1470_LCDC_LCDC_MODE                    (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_MODE_OFFSET) /* Display Mode */
#define DA1470_LCDC_LCDC_PALETTE_255             (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_PALETTE_255_OFFSET) /* Global palette/gamma correction */
#define DA1470_LCDC_LCDC_PALETTE_BASE            (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_PALETTE_BASE_OFFSET) /* Global palette/gamma correction */
#define DA1470_LCDC_LCDC_RESXY                   (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_RESXY_OFFSET) /* Resolution X,Y */
#define DA1470_LCDC_LCDC_STARTXY                 (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_STARTXY_OFFSET) /* Specifies the start position of the very first frame */
#define DA1470_LCDC_LCDC_STATUS                  (DA1470_LCDC_BASE + DA1470_LCDC_LCDC_STATUS_OFFSET) /* Status Register */

/* Register bit definitions *************************************************/


/* LCDC_BACKPORCHXY Register */

#define LCDC_BPORCH_X_MASK                       (0xFFFF << 16) /* Back porch X (lines) */
#define LCDC_BPORCH_X_POS                        (16) /* Back porch X (lines) */
#define LCDC_BPORCH_Y_MASK                       (0xFFFF << 0) /* Back porch Y (pixel clocks) */
#define LCDC_BPORCH_Y_POS                        (0) /* Back porch Y (pixel clocks) */

/* LCDC_BGCOLOR Register */

#define LCDC_BG_RED_MASK                         (0xFF << 24) /* Red color used as background. */
#define LCDC_BG_RED_POS                          (24) /* Red color used as background. */
#define LCDC_BG_GREEN_MASK                       (0xFF << 16) /* Green color used as background. */
#define LCDC_BG_GREEN_POS                        (16) /* Green color used as background. */
#define LCDC_BG_BLUE_MASK                        (0xFF << 8) /* Blue color used as background. */
#define LCDC_BG_BLUE_POS                         (8) /* Blue color used as background. */
#define LCDC_BG_ALPHA_MASK                       (0xFF << 0) /* Alpha color used as background. */
#define LCDC_BG_ALPHA_POS                        (0) /* Alpha color used as background. */

/* LCDC_BLANKINGXY Register */

#define LCDC_BLANKING_X_MASK                     (0xFFFF << 16) /* Blanking period X (VSYNC lines) */
#define LCDC_BLANKING_X_POS                      (16) /* Blanking period X (VSYNC lines) */
#define LCDC_BLANKING_Y_MASK                     (0xFFFF << 0) /* Blanking period Y (HSYNC pulse length) */
#define LCDC_BLANKING_Y_POS                      (0) /* Blanking period Y (HSYNC pulse length) */

/* LCDC_CLKCTRL_CG Register */

#define LCDC_LCDC_SWAP_PIX_FORMAT_CLK            (1U << 2) /* No description available. */
#define LCDC_LCDC_INV_CLK_POLARITY               (1U << 1) /* No description available. */
#define LCDC_LCDC_CLK_DIV_EN                     (1U << 0) /* No description available. */

/* LCDC_CLKCTRL Register */

#define LCDC_SEC_CLK_DIV_MASK                    (0x1F << 27) /* Secondary clock divider that generates the format pipeline clock. Source clock o */
#define LCDC_SEC_CLK_DIV_POS                     (27) /* Secondary clock divider that generates the format pipeline clock. Source clock o */
#define LCDC_DMA_HOLD_MASK                       (0x3F << 8) /* Hold time before DMA activated. */
#define LCDC_DMA_HOLD_POS                        (8) /* Hold time before DMA activated. */
#define LCDC_CLK_DIV_MASK                        (0x3F << 0) /* Clock divider that generates the pixel pipeline clock. Source clock of this divi */
#define LCDC_CLK_DIV_POS                         (0) /* Clock divider that generates the pixel pipeline clock. Source clock of this divi */

/* LCDC_COLMOD Register */

#define LCDC_BP_DBIB                             (1U << 31) /* Indicates that back pressure support for the DBI Type B interface is enabled */
#define LCDC_COLMODES_MASK                       (0x1FFFF << 0) /* 16 bit: Indicates that the LUT8 color format is enabled 15 bit: Indicates that t */
#define LCDC_COLMODES_POS                        (0) /* 16 bit: Indicates that the LUT8 color format is enabled 15 bit: Indicates that t */

/* LCDC_CONF Register */

#define LCDC_CONF_MASK                           (0xFFFF << 0) /* No description available. */
#define LCDC_CONF_POS                            (0) /* No description available. */

/* LCDC_CRC Register */

#define LCDC_CRC_MASK                            (0xFFFFFFFF << 0) /* CRC check. */
#define LCDC_CRC_POS                             (0) /* CRC check. */

/* LCDC_DBIB_CFG Register */

#define LCDC_DBIB_INTERFACE_EN                   (1U << 31) /* When set to 1, the DBI Type-B interface is activated */
#define LCDC_DBIB_CSX_CFG_EN                     (1U << 30) /* When set to 1, the value of the CSX signal of the DBI Type-B interface can be co */
#define LCDC_DBIB_CSX_CFG                        (1U << 29) /* Sets the value of DBIB_CSX signal: CSX is set to one if DBIB_CFG[29] has the val */
#define LCDC_DBIB_TE_DISABLE                     (1U << 28) /* When set to 1, the DBIB_TE signal is disabled */
#define LCDC_SPI_DC_AS_SPI_SD1                   (1U << 27) /* When set to 1, enables the usage of SPI_DC wire as SPI_SD1 */
#define LCDC_DBIB_FORCE_IDLE                     (1U << 26) /* When set to 1, force DBI Type-B interface to idle state. Swap on the fly data fo */
#define LCDC_DBIB_RESX_OUT_EN                    (1U << 25) /* Drives DBIB_RESX output signal of DBI Type-B interface */
#define LCDC_SUB_PIXEL_REVERSE                   (1U << 24) /* Reverse sub pixel order */
#define LCDC_SPI3_EN                             (1U << 23) /* When set to 1, SPI 3-wire interface is enabled */
#define LCDC_SPI4_EN                             (1U << 22) /* When set to 1, SPI 4-wire interface is enabled */
#define LCDC_DBIB_BACK_PRESSURE_EN               (1U << 21) /* When set to 1, Enables back-pressure for DBI Type-B interface */
#define LCDC_SPI_CLK_PHASE                       (1U << 20) /* Sets SPI Clock Phase */
#define LCDC_SPI_CLK_POLARITY                    (1U << 19) /* Sets SPI Clock Polarity */
#define LCDC_SPID_JDI                            (1U << 18) /* No description available. */
#define LCDC_CMD_DATA_AS_HEADER                  (1U << 17) /* When set to 1, command data are used as header of each line */
#define LCDC_BIT_ORDER_ADDR_INVERT               (1U << 16) /* When set to 1, inverts the bit-order of the horizontal line address (used along  */
#define LCDC_SPI_2BYTE_ADDR                      (1U << 15) /* When set to 1, two-byte address is sent with each horizontal line (SPI) */
#define LCDC_PIX_CLK_AT_DBIB_CLK                 (1U << 14) /* When set to 1, expose pixel generation clock on the DBIB_CLK */
#define LCDC_EXT_CTRL_EN                         (1U << 13) /* When set to 1, enables the external control */
#define LCDC_HORIZONTAL_BLANK_EN                 (1U << 12) /* When set to 1, enables the horizontal blanking */
#define LCDC_DUAL_SPI_SUBPIXEL_EXTRACT_EN        (1U << 11) /* When set to 1, Enables DualSPI sub-pixel transaction */
#define LCDC_QUAD_SPI_EN                         (1U << 10) /* When set to 1, Enables QuadSPI */
#define LCDC_DUAL_SPI_EN                         (1U << 9) /* When set to 1, Enables DualSPI */
#define LCDC_DBIB_INTERFACE_WIDTH_MASK           (0x7 << 6) /* Set DBI Type-B interface width (8, 9 or 16 bits) and the serial interface: 0x0:  */
#define LCDC_DBIB_INTERFACE_WIDTH_POS            (6) /* Set DBI Type-B interface width (8, 9 or 16 bits) and the serial interface: 0x0:  */
#define LCDC_DBIB_DATA_ORDER_MASK                (0x7 << 3) /* Set the data order of the 8-bit data word: 0x0: option 0 0x1: option 1 0x2: opti */
#define LCDC_DBIB_DATA_ORDER_POS                 (3) /* Set the data order of the 8-bit data word: 0x0: option 0 0x1: option 1 0x2: opti */
#define LCDC_DBIB_COLOR_FMT_MASK                 (0x7 << 0) /* Defines the output format and depends of the type of the output interface. For t */
#define LCDC_DBIB_COLOR_FMT_POS                  (0) /* Defines the output format and depends of the type of the output interface. For t */

/* LCDC_DBIB_CMD Register */

#define LCDC_PART_UPDATE                         (1U << 31) /* When set to 0, indicates that the command data are the Base address for partial  */
#define LCDC_DBIB_CMD_SEND                       (1U << 30) /* Send command to the DBI interface */
#define LCDC_CMD_WIDTH_MASK                      (0x3 << 28) /* Determine the command width. Applicable only on the QuadSPI 0x00: 1 Byte 0x01: 2 */
#define LCDC_CMD_WIDTH_POS                       (28) /* Determine the command width. Applicable only on the QuadSPI 0x00: 1 Byte 0x01: 2 */
#define LCDC_DBIB_CMD_STORE                      (1U << 27) /* This bit has meaning only when LCDC_DBIB_CFG_REG[LCDC_DBIB_SPI_JDI] = 1. When is */
#define LCDC_RD_MODE_EN                          (1U << 26) /* When sets to 1, read mode is enabled */
#define LCDC_FMTCTRL_EXPOSE_SETTING              (1U << 25) /* When sets to 1, FMTCTRL[15:8] is exposed on DBIB_CT pins and FMTCTRL[31] on DBIB */
#define LCDC_ST_INT_CMD_TYPE                     (1U << 24) /* When sets to 1, store internally a command type which is transmitted at the begg */
#define LCDC_DBIB_CMD_VAL_MASK                   (0xFFFF << 0) /* Data to send to the DBI interface */
#define LCDC_DBIB_CMD_VAL_POS                    (0) /* Data to send to the DBI interface */

/* LCDC_DBIB_RDAT Register */

#define LCDC_DBIB_RDAT_MASK                      (0xFFFFFFFF << 0) /* On Write: 31-30 bits: Specify the number of read cycles 0x0: 8 cycles 0x1: 16 cy */
#define LCDC_DBIB_RDAT_POS                       (0) /* On Write: 31-30 bits: Specify the number of read cycles 0x0: 8 cycles 0x1: 16 cy */

/* LCDC_FMTCTRL_2 Register */

#define LCDC_FMTCTRL_MASK                        (0xFFFFFFFF << 0) /* Bits Description When DBI-Type B Interface is selected: Bits Description 31-16 b */
#define LCDC_FMTCTRL_POS                         (0) /* Bits Description When DBI-Type B Interface is selected: Bits Description 31-16 b */

/* LCDC_FMTCTRL Register */

#define LCDC_FMTCTRL_MASK                        (0xFFFFFFFF << 0) /* When DBI-Type B Interface is selected: Bits Description 31 bit : Candidate for D */
#define LCDC_FMTCTRL_POS                         (0) /* When DBI-Type B Interface is selected: Bits Description 31 bit : Candidate for D */

/* LCDC_FRONTPORCHXY Register */

#define LCDC_FPORCH_X_MASK                       (0xFFFF << 16) /* Front porch X (lines) */
#define LCDC_FPORCH_X_POS                        (16) /* Front porch X (lines) */
#define LCDC_FPORCH_Y_MASK                       (0xFFFF << 0) /* Front porch Y (pixel clocks) */
#define LCDC_FPORCH_Y_POS                        (0) /* Front porch Y (pixel clocks) */

/* LCDC_GPIO Register */

#define LCDC_DPI_CM_ASSERT                       (1U << 16) /* Assert DPI-2 Color Mode signal */
#define LCDC_DPI_SD_ASSERT                       (1U << 15) /* Assert DPI-2 Shutdown signal */
#define LCDC_SCAL_ADVANCE_MASK                   (0x3 << 13) /* scalar advance */
#define LCDC_SCAL_ADVANCE_POS                    (13) /* scalar advance */
#define LCDC_LCDC_OTHER_MASK                     (0x7F << 6) /* TBD */
#define LCDC_LCDC_OTHER_POS                      (6) /* TBD */
#define LCDC_GPIO_SPI_SI_ON_SD_PAD               (1U << 5) /* Enable to have the SPI SI on the SPI SD pad */
#define LCDC_GPIO_OUTPUT_MODE_MASK               (0x3 << 3) /* Select the mode that should be mapped on the GPIO pins 0x0 = JDI 0x1 = DPI 0x2 = */
#define LCDC_GPIO_OUTPUT_MODE_POS                (3) /* Select the mode that should be mapped on the GPIO pins 0x0 = JDI 0x1 = DPI 0x2 = */
#define LCDC_GPIO_OUTPUT_EN                      (1U << 2) /* Enable the GPIO pins for LCDC control. The GPIO_OUTPUT_MODE is used to define wh */
#define LCDC_TE_INV                              (1U << 1) /* Applies an inversion on the TE (tearing effect) signal. 0 : the inversion is not */
#define LCDC_CLK_DIV_2DIV3                       (1U << 0) /* Divide clock by 2/3 clock-gating. This is required when the DSI-DPHY is used wit */

/* LCDC_IDREG Register */

#define LCDC_NEMADC_ID_MASK                      (0xFFFFFFFF << 0) /* Identification register */
#define LCDC_NEMADC_ID_POS                       (0) /* Identification register */

/* LCDC_INTERRUPT Register */

#define LCDC_IRQ_TRIGGER_SEL                     (1U << 31) /* IRQ trigger control 0: Level triggering 1: Edge triggering In the case of the le */
#define LCDC_IRQ_OUT                             (1U << 30) /* No description available. */
#define LCDC_FE_IRQ_EN                           (1U << 4) /* No description available. */
#define LCDC_TE_IRQ_EN                           (1U << 3) /* No description available. */
#define LCDC_MMU_ERROR_IRQ_EN                    (1U << 2) /* No description available. */
#define LCDC_HSYNC_IRQ_EN                        (1U << 1) /* HSYNC interrupt enabled */
#define LCDC_VSYNC_IRQ_EN                        (1U << 0) /* VSYNC or TE interrupt enabled. See also the configuration bit LCDC_DBIB_CFG_REG[ */

/* LCDC_LAYER0_BASEADDR Register */

#define LCDC_L0_BASE_ADDR_MASK                   (0xFFFFFFFF << 0) /* Base Address of the frame buffer */
#define LCDC_L0_BASE_ADDR_POS                    (0) /* Base Address of the frame buffer */

/* LCDC_LAYER0_MODE Register */

#define LCDC_L0_EN                               (1U << 31) /* Enable layer. 0 : disable 1 : enable */
#define LCDC_L0_FORCE_ALPHA                      (1U << 30) /* When set to 1, force alpha with global alpha */
#define LCDC_L0_DIS_BIL_FILTERING                (1U << 29) /* When set to 0, bilinear filtering is enabled. Scaler should be enabled */
#define LCDC_L0_PREMUL_IMG_ALPHA                 (1U << 28) /* When set to 1, premultiply image alpha is enabled */
#define LCDC_L0_ASSERT_HCLK_DMA                  (1U << 27) /* When set to 1, HLOCK signal on AHB DMAs is asserted */
#define LCDC_L0_GAMMA_LUT_EN                     (1U << 26) /* When set to 1, Gamma Look Up Table is enabled */
#define LCDC_L0_ALPHA_MASK                       (0xFF << 16) /* Alpha layer global value (0x00-0xFF range) */
#define LCDC_L0_ALPHA_POS                        (16) /* Alpha layer global value (0x00-0xFF range) */
#define LCDC_L0_DST_BLEND_MASK                   (0xF << 12) /* Destinary Blending Function 0000: BLEND ZERO 0001: BLEND ONE 0010: BLEND ALPHA S */
#define LCDC_L0_DST_BLEND_POS                    (12) /* Destinary Blending Function 0000: BLEND ZERO 0001: BLEND ONE 0010: BLEND ALPHA S */
#define LCDC_L0_SRC_BLEND_MASK                   (0xF << 8) /* Source Blending Function 0000: BLEND ZERO 0001: BLEND ONE 0010: BLEND ALPHA SRC  */
#define LCDC_L0_SRC_BLEND_POS                    (8) /* Source Blending Function 0000: BLEND ZERO 0001: BLEND ONE 0010: BLEND ALPHA SRC  */
#define LCDC_L0_COLOR_MODE_MASK                  (0x1F << 0) /* Color Mode: 00001: 16-bit RGBX5551 color format, 00010: 32-bit RGBX8888 color fo */
#define LCDC_L0_COLOR_MODE_POS                   (0) /* Color Mode: 00001: 16-bit RGBX5551 color format, 00010: 32-bit RGBX8888 color fo */

/* LCDC_LAYER0_RESXY Register */

#define LCDC_L0_RES_X_MASK                       (0xFFFF << 16) /* Resolution X (Resolution of layer in pixels) */
#define LCDC_L0_RES_X_POS                        (16) /* Resolution X (Resolution of layer in pixels) */
#define LCDC_L0_RES_Y_MASK                       (0xFFFF << 0) /* Resolution Y (Resolution of layer in pixels) */
#define LCDC_L0_RES_Y_POS                        (0) /* Resolution Y (Resolution of layer in pixels) */

/* LCDC_LAYER0_SIZEXY Register */

#define LCDC_L0_SIZE_X_MASK                      (0xFFFF << 16) /* Size X (Size of layer in pixels) */
#define LCDC_L0_SIZE_X_POS                       (16) /* Size X (Size of layer in pixels) */
#define LCDC_L0_SIZE_Y_MASK                      (0xFFFF << 0) /* Size Y (Size of layer in pixels) */
#define LCDC_L0_SIZE_Y_POS                       (0) /* Size Y (Size of layer in pixels) */

/* LCDC_LAYER0_STARTXY Register */

#define LCDC_L0_START_X_MASK                     (0xFFFF << 16) /* Start X (offset pixels) */
#define LCDC_L0_START_X_POS                      (16) /* Start X (offset pixels) */
#define LCDC_L0_START_Y_MASK                     (0xFFFF << 0) /* Start Y (offset pixels) */
#define LCDC_L0_START_Y_POS                      (0) /* Start Y (offset pixels) */

/* LCDC_LAYER0_STRIDE Register */

#define LCDC_L0_FIFO_THR_MASK                    (0x3 << 19) /* Layer dma fifo threshold burst start 00: half fifo (default) 01: 2 burst size 10 */
#define LCDC_L0_FIFO_THR_POS                     (19) /* Layer dma fifo threshold burst start 00: half fifo (default) 01: 2 burst size 10 */
#define LCDC_L0_BURST_LEN_MASK                   (0x7 << 16) /* Layer burst length 000: 16-beats (default) 001: 2-beats 010: 4-beats 011: 8-beat */
#define LCDC_L0_BURST_LEN_POS                    (16) /* Layer burst length 000: 16-beats (default) 001: 2-beats 010: 4-beats 011: 8-beat */
#define LCDC_L0_STRIDE_MASK                      (0xFFFF << 0) /* Layer Stride (distance from line to line in bytes) */
#define LCDC_L0_STRIDE_POS                       (0) /* Layer Stride (distance from line to line in bytes) */

/* LCDC_LAYER1_BASEADDR Register */

#define LCDC_L1_BASE_ADDR_MASK                   (0xFFFFFFFF << 0) /* Base Address of the frame buffer */
#define LCDC_L1_BASE_ADDR_POS                    (0) /* Base Address of the frame buffer */

/* LCDC_LAYER1_MODE Register */

#define LCDC_L1_EN                               (1U << 31) /* Enable layer. 0 : disable 1 : enable */
#define LCDC_L1_FORCE_ALPHA                      (1U << 30) /* When set to 1, force alpha with global alpha */
#define LCDC_L1_DIS_BIL_FILTERING                (1U << 29) /* When set to 0, bilinear filtering is enabled. Scaler should be enabled */
#define LCDC_L1_PREMUL_IMG_ALPHA                 (1U << 28) /* When set to 1, premultiply image alpha is enabled */
#define LCDC_L1_ASSERT_HCLK_DMA                  (1U << 27) /* When set to 1, HLOCK signal on AHB DMAs is asserted */
#define LCDC_L1_GAMMA_LUT_EN                     (1U << 26) /* When set to 1, Gamma Look Up Table is enabled */
#define LCDC_L1_ALPHA_MASK                       (0xFF << 16) /* Alpha layer global value (0x00-0xFF range) */
#define LCDC_L1_ALPHA_POS                        (16) /* Alpha layer global value (0x00-0xFF range) */
#define LCDC_L1_DST_BLEND_MASK                   (0xF << 12) /* Destinary Blending Function 0000: BLEND ZERO 0001: BLEND ONE 0010: BLEND ALPHA S */
#define LCDC_L1_DST_BLEND_POS                    (12) /* Destinary Blending Function 0000: BLEND ZERO 0001: BLEND ONE 0010: BLEND ALPHA S */
#define LCDC_L1_SRC_BLEND_MASK                   (0xF << 8) /* Source Blending Function 0000: BLEND ZERO 0001: BLEND ONE 0010: BLEND ALPHA SRC  */
#define LCDC_L1_SRC_BLEND_POS                    (8) /* Source Blending Function 0000: BLEND ZERO 0001: BLEND ONE 0010: BLEND ALPHA SRC  */
#define LCDC_L1_COLOR_MODE_MASK                  (0x1F << 0) /* Color Mode: 00001: 16-bit RGBX5551 color format, 00010: 32-bit RGBX8888 color fo */
#define LCDC_L1_COLOR_MODE_POS                   (0) /* Color Mode: 00001: 16-bit RGBX5551 color format, 00010: 32-bit RGBX8888 color fo */

/* LCDC_LAYER1_RESXY Register */

#define LCDC_L1_RES_X_MASK                       (0xFFFF << 16) /* Resolution X (Resolution of layer in pixels) */
#define LCDC_L1_RES_X_POS                        (16) /* Resolution X (Resolution of layer in pixels) */
#define LCDC_L1_RES_Y_MASK                       (0xFFFF << 0) /* Resolution Y (Resolution of layer in pixels) */
#define LCDC_L1_RES_Y_POS                        (0) /* Resolution Y (Resolution of layer in pixels) */

/* LCDC_LAYER1_SIZEXY Register */

#define LCDC_L1_SIZE_X_MASK                      (0xFFFF << 16) /* Size X (Size of layer in pixels) */
#define LCDC_L1_SIZE_X_POS                       (16) /* Size X (Size of layer in pixels) */
#define LCDC_L1_SIZE_Y_MASK                      (0xFFFF << 0) /* Size Y (Size of layer in pixels) */
#define LCDC_L1_SIZE_Y_POS                       (0) /* Size Y (Size of layer in pixels) */

/* LCDC_LAYER1_STARTXY Register */

#define LCDC_L1_START_X_MASK                     (0xFFFF << 16) /* Start X (offset pixels) */
#define LCDC_L1_START_X_POS                      (16) /* Start X (offset pixels) */
#define LCDC_L1_START_Y_MASK                     (0xFFFF << 0) /* Start Y (offset pixels) */
#define LCDC_L1_START_Y_POS                      (0) /* Start Y (offset pixels) */

/* LCDC_LAYER1_STRIDE Register */

#define LCDC_L1_FIFO_THR_MASK                    (0x3 << 19) /* Layer dma fifo threshold burst start 00: half fifo (default) 01: 2 burst size 10 */
#define LCDC_L1_FIFO_THR_POS                     (19) /* Layer dma fifo threshold burst start 00: half fifo (default) 01: 2 burst size 10 */
#define LCDC_L1_BURST_LEN_MASK                   (0x7 << 16) /* Layer burst length 000: 16-beats (default) 001: 2-beats 010: 4-beats 011: 8-beat */
#define LCDC_L1_BURST_LEN_POS                    (16) /* Layer burst length 000: 16-beats (default) 001: 2-beats 010: 4-beats 011: 8-beat */
#define LCDC_L1_STRIDE_MASK                      (0xFFFF << 0) /* Layer Stride (distance from line to line in bytes) */
#define LCDC_L1_STRIDE_POS                       (0) /* Layer Stride (distance from line to line in bytes) */

/* LCDC_MODE Register */

#define LCDC_MODE_EN                             (1U << 31) /* Mode register. 0 : disable 1 : enable */
#define LCDC_VSYNC_POL                           (1U << 28) /* VSYNC polarity. 0: positive 1: negative */
#define LCDC_HSYNC_POL                           (1U << 27) /* HSYNC polarity. 0: positive 1: negative */
#define LCDC_DE_POL                              (1U << 26) /* DE polarity. 0: positive 1: negative */
#define LCDC_DITH_MODE_MASK                      (0x3 << 24) /* 0x00: Dithering is disabled 0x01: Dithering 18-bits mode 0x02: Dithering 16-bits */
#define LCDC_DITH_MODE_POS                       (24) /* 0x00: Dithering is disabled 0x01: Dithering 18-bits mode 0x02: Dithering 16-bits */
#define LCDC_VSYNC_SCPL                          (1U << 23) /* Set VSYNC for a single cycle per line. 0: disable 1: enable */
#define LCDC_PIXCLKOUT_POL                       (1U << 22) /* Pixel clock out polarity. 0: positive 1: negative */
#define LCDC_GLOBAL_GAMMA_EN                     (1U << 20) /* When set to 1, global gamma correction is enabled */
#define LCDC_FORCE_BLANK                         (1U << 19) /* Forces output to blank. 0: disable 1: enable */
#define LCDC_SFRAME_UPD                          (1U << 17) /* Single frame update. 0: disable 1: enable */
#define LCDC_DPI2_CONFIG_MASK                    (0x7 << 12) /* Defines MIPI DPI-2 Configuration 0x00: RGB888 24-bits 0x01: RGB666 18-bits Confi */
#define LCDC_DPI2_CONFIG_POS                     (12) /* Defines MIPI DPI-2 Configuration 0x00: RGB888 24-bits 0x01: RGB666 18-bits Confi */
#define LCDC_PIXCLKOUT_SEL                       (1U << 11) /* Selects the pixel out clock for the display. 0: based on the pixel pipeline cloc */
#define LCDC_OUT_MODE_MASK                       (0xF << 5) /* Selection of the output mode 0000: Parallel RGB 1000: JDI MIP All the other valu */
#define LCDC_OUT_MODE_POS                        (5) /* Selection of the output mode 0000: Parallel RGB 1000: JDI MIP All the other valu */
#define LCDC_DBIB_OFF                            (1U << 4) /* When set to 0, DBI Type-B interface is enabled */
#define LCDC_FORM_OFF                            (1U << 3) /* Formating off 0: disabled 1: enabled */
#define LCDC_DSCAN                               (1U << 1) /* Double horizontal scan 0: disabled 1: enabled */
#define LCDC_TMODE                               (1U << 0) /* Test mode 0: disabled 1: enabled */

/* LCDC_PALETTE_255 Register */

#define LCDC_PALLETE_R_MASK                      (0xFF << 16) /* Gamma ramp red bits */
#define LCDC_PALLETE_R_POS                       (16) /* Gamma ramp red bits */
#define LCDC_PALLETE_G_MASK                      (0xFF << 8) /* Gamma ramp green bits */
#define LCDC_PALLETE_G_POS                       (8) /* Gamma ramp green bits */
#define LCDC_PALLETE_B_MASK                      (0xFF << 0) /* Gamma ramp blue bits */
#define LCDC_PALLETE_B_POS                       (0) /* Gamma ramp blue bits */

/* LCDC_PALETTE_BASE Register */

#define LCDC_PALLETE_R_MASK                      (0xFF << 16) /* Gamma ramp red bits */
#define LCDC_PALLETE_R_POS                       (16) /* Gamma ramp red bits */
#define LCDC_PALLETE_G_MASK                      (0xFF << 8) /* Gamma ramp green bits */
#define LCDC_PALLETE_G_POS                       (8) /* Gamma ramp green bits */
#define LCDC_PALLETE_B_MASK                      (0xFF << 0) /* Gamma ramp blue bits */
#define LCDC_PALLETE_B_POS                       (0) /* Gamma ramp blue bits */

/* LCDC_RESXY Register */

#define LCDC_RES_X_MASK                          (0xFFFF << 16) /* Resolution X in pixels. */
#define LCDC_RES_X_POS                           (16) /* Resolution X in pixels. */
#define LCDC_RES_Y_MASK                          (0xFFFF << 0) /* Resolution Y in pixels. */
#define LCDC_RES_Y_POS                           (0) /* Resolution Y in pixels. */

/* LCDC_STARTXY Register */

#define LCDC_START_X_MASK                        (0xFFFF << 16) /* Specify framess X dimension */
#define LCDC_START_X_POS                         (16) /* Specify framess X dimension */
#define LCDC_START_Y_MASK                        (0xFFFF << 0) /* Specify framess Y dimension */
#define LCDC_START_Y_POS                         (0) /* Specify framess Y dimension */

/* LCDC_STATUS Register */

#define LCDC_DBIB_CMD_FIFO_FULL                  (1U << 15) /* Indicates if the command FIFO is full */
#define LCDC_DBI_SPI_CS                          (1U << 14) /* Indicates DBI/SPI CS status */
#define LCDC_FRAME_END                           (1U << 13) /* Frame end (active high) */
#define LCDC_DBIB_OUT_TRANS_PENDING              (1U << 12) /* Pending output transaction in DBI Type-B interface */
#define LCDC_DBIB_CMD_PENDING                    (1U << 11) /* Transferring of command in progress. 0: idle 1: in progress */
#define LCDC_DBIB_DATA_PENDING                   (1U << 10) /* Pending RGB data in DBI Type-B interface */
#define LCDC_DBIB_TE                             (1U << 8) /* The DBIB tearing effect signal */
#define LCDC_STICKY_UNDERFLOW                    (1U << 7) /* Sticky underflow(clear with write in the LCDC_INTERRUPT_REG) 0: There is no unde */
#define LCDC_UNDERFLOW                           (1U << 6) /* Underflow on the current transfer. 0: There is no underflow 1: Underflow has bee */
#define LCDC_LAST_ROW                            (1U << 5) /* Last row (Last row is currently displayed) */
#define LCDC_STAT_CSYNC                          (1U << 4) /* CSYNC signal level */
#define LCDC_STAT_VSYNC                          (1U << 3) /* VSYNC signal level */
#define LCDC_STAT_HSYNC                          (1U << 2) /* HSYNC signal level */
#define LCDC_FRAMEGEN_BUSY                       (1U << 1) /* The frame generator is busy (active high). */
#define LCDC_STAT_ACTIVE                         (1U << 0) /* Active (When not in vertical blanking) */

#endif /* __DA1470_LCDC_H */
