/****************************************************************************
 * ./tmp/da1470_gpio.h
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

#ifndef __DA1470_GPIO_H
#define __DA1470_GPIO_H

/* Register offsets *********************************************************/

#define DA1470_GPIO_GPIO_CLK_SEL_OFFSET        0x016C /* Select which clock to map on ports P0/P1 */
#define DA1470_GPIO_LCDC_MAP_CTRL_OFFSET       0x017C /* LCDC mapping control Register */
#define DA1470_GPIO_P0_00_MODE_OFFSET          0x0024 /* P0_00 Mode Register */
#define DA1470_GPIO_P0_01_MODE_OFFSET          0x0028 /* P0_01 Mode Register */
#define DA1470_GPIO_P0_02_MODE_OFFSET          0x002C /* P0_02 Mode Register */
#define DA1470_GPIO_P0_03_MODE_OFFSET          0x0030 /* P0_03 Mode Register */
#define DA1470_GPIO_P0_04_MODE_OFFSET          0x0034 /* P0_04 Mode Register */
#define DA1470_GPIO_P0_05_MODE_OFFSET          0x0038 /* P0_05 Mode Register */
#define DA1470_GPIO_P0_06_MODE_OFFSET          0x003C /* P0_06 Mode Register */
#define DA1470_GPIO_P0_07_MODE_OFFSET          0x0040 /* P0_07 Mode Register */
#define DA1470_GPIO_P0_08_MODE_OFFSET          0x0044 /* P0_08 Mode Register */
#define DA1470_GPIO_P0_09_MODE_OFFSET          0x0048 /* P0_09 Mode Register */
#define DA1470_GPIO_P0_10_MODE_OFFSET          0x004C /* P0_10 Mode Register */
#define DA1470_GPIO_P0_11_MODE_OFFSET          0x0050 /* P0_11 Mode Register */
#define DA1470_GPIO_P0_12_MODE_OFFSET          0x0054 /* P0_12 Mode Register */
#define DA1470_GPIO_P0_13_MODE_OFFSET          0x0058 /* P0_13 Mode Register */
#define DA1470_GPIO_P0_14_MODE_OFFSET          0x005C /* P0_14 Mode Register */
#define DA1470_GPIO_P0_15_MODE_OFFSET          0x0060 /* P0_15 Mode Register */
#define DA1470_GPIO_P0_16_MODE_OFFSET          0x0064 /* P0_16 Mode Register */
#define DA1470_GPIO_P0_17_MODE_OFFSET          0x0068 /* P0_17 Mode Register */
#define DA1470_GPIO_P0_18_MODE_OFFSET          0x006C /* P0_18 Mode Register */
#define DA1470_GPIO_P0_19_MODE_OFFSET          0x0070 /* P0_19 Mode Register */
#define DA1470_GPIO_P0_20_MODE_OFFSET          0x0074 /* P0_20 Mode Register */
#define DA1470_GPIO_P0_21_MODE_OFFSET          0x0078 /* P0_21 Mode Register */
#define DA1470_GPIO_P0_22_MODE_OFFSET          0x007C /* P0_22 Mode Register */
#define DA1470_GPIO_P0_23_MODE_OFFSET          0x0080 /* P0_23 Mode Register */
#define DA1470_GPIO_P0_24_MODE_OFFSET          0x0084 /* P0_24 Mode Register */
#define DA1470_GPIO_P0_25_MODE_OFFSET          0x0088 /* P0_25 Mode Register */
#define DA1470_GPIO_P0_26_MODE_OFFSET          0x008C /* P0_26 Mode Register */
#define DA1470_GPIO_P0_27_MODE_OFFSET          0x0090 /* P0_27 Mode Register */
#define DA1470_GPIO_P0_28_MODE_OFFSET          0x0094 /* P0_28 Mode Register */
#define DA1470_GPIO_P0_29_MODE_OFFSET          0x0098 /* P0_29 Mode Register */
#define DA1470_GPIO_P0_30_MODE_OFFSET          0x009C /* P0_30 Mode Register */
#define DA1470_GPIO_P0_31_MODE_OFFSET          0x00A0 /* P0_31 Mode Register */
#define DA1470_GPIO_P0_DATA_OFFSET             0x0000 /* P0 Data input / output Register */
#define DA1470_GPIO_P0_PADPWR_CTRL_OFFSET      0x0160 /* P0 Output Power Control Register */
#define DA1470_GPIO_P0_RESET_DATA_OFFSET       0x0018 /* P0 Reset port pins Register */
#define DA1470_GPIO_P0_SET_DATA_OFFSET         0x000C /* P0 Set port pins Register */
#define DA1470_GPIO_P0_WEAK_CTRL_OFFSET        0x0170 /* P0 Weak Pads Control Register */
#define DA1470_GPIO_P1_00_MODE_OFFSET          0x00A4 /* P1_00 Mode Register */
#define DA1470_GPIO_P1_01_MODE_OFFSET          0x00A8 /* P1_01 Mode Register */
#define DA1470_GPIO_P1_02_MODE_OFFSET          0x00AC /* P1_02 Mode Register */
#define DA1470_GPIO_P1_03_MODE_OFFSET          0x00B0 /* P1_03 Mode Register */
#define DA1470_GPIO_P1_04_MODE_OFFSET          0x00B4 /* P1_04 Mode Register */
#define DA1470_GPIO_P1_05_MODE_OFFSET          0x00B8 /* P1_05 Mode Register */
#define DA1470_GPIO_P1_06_MODE_OFFSET          0x00BC /* P1_06 Mode Register */
#define DA1470_GPIO_P1_07_MODE_OFFSET          0x00C0 /* P1_07 Mode Register */
#define DA1470_GPIO_P1_08_MODE_OFFSET          0x00C4 /* P1_08 Mode Register */
#define DA1470_GPIO_P1_09_MODE_OFFSET          0x00C8 /* P1_09 Mode Register */
#define DA1470_GPIO_P1_10_MODE_OFFSET          0x00CC /* P1_10 Mode Register */
#define DA1470_GPIO_P1_11_MODE_OFFSET          0x00D0 /* P1_11 Mode Register */
#define DA1470_GPIO_P1_12_MODE_OFFSET          0x00D4 /* P1_12 Mode Register */
#define DA1470_GPIO_P1_13_MODE_OFFSET          0x00D8 /* P1_13 Mode Register */
#define DA1470_GPIO_P1_14_MODE_OFFSET          0x00DC /* P1_14 Mode Register */
#define DA1470_GPIO_P1_15_MODE_OFFSET          0x00E0 /* P1_15 Mode Register */
#define DA1470_GPIO_P1_16_MODE_OFFSET          0x00E4 /* P1_16 Mode Register */
#define DA1470_GPIO_P1_17_MODE_OFFSET          0x00E8 /* P1_17 Mode Register */
#define DA1470_GPIO_P1_18_MODE_OFFSET          0x00EC /* P1_18 Mode Register */
#define DA1470_GPIO_P1_19_MODE_OFFSET          0x00F0 /* P1_19 Mode Register */
#define DA1470_GPIO_P1_20_MODE_OFFSET          0x00F4 /* P1_20 Mode Register */
#define DA1470_GPIO_P1_21_MODE_OFFSET          0x00F8 /* P1_21 Mode Register */
#define DA1470_GPIO_P1_22_MODE_OFFSET          0x00FC /* P1_22 Mode Register */
#define DA1470_GPIO_P1_23_MODE_OFFSET          0x0100 /* P1_23 Mode Register */
#define DA1470_GPIO_P1_24_MODE_OFFSET          0x0104 /* P1_24 Mode Register */
#define DA1470_GPIO_P1_25_MODE_OFFSET          0x0108 /* P1_25 Mode Register */
#define DA1470_GPIO_P1_26_MODE_OFFSET          0x010C /* P1_26 Mode Register */
#define DA1470_GPIO_P1_27_MODE_OFFSET          0x0110 /* P1_27 Mode Register */
#define DA1470_GPIO_P1_28_MODE_OFFSET          0x0114 /* P1_28 Mode Register */
#define DA1470_GPIO_P1_29_MODE_OFFSET          0x0118 /* P1_29 Mode Register */
#define DA1470_GPIO_P1_30_MODE_OFFSET          0x011C /* P1_30 Mode Register */
#define DA1470_GPIO_P1_31_MODE_OFFSET          0x0120 /* P1_31 Mode Register */
#define DA1470_GPIO_P1_DATA_OFFSET             0x0004 /* P1 Data input / output Register */
#define DA1470_GPIO_P1_PADPWR_CTRL_OFFSET      0x0164 /* P1 Output Power Control Register */
#define DA1470_GPIO_P1_RESET_DATA_OFFSET       0x001C /* P1 Reset port pins Register */
#define DA1470_GPIO_P1_SET_DATA_OFFSET         0x0010 /* P1 Set port pins Register */
#define DA1470_GPIO_P1_WEAK_CTRL_OFFSET        0x0174 /* P1 Weak Pads Control Register */
#define DA1470_GPIO_P2_00_MODE_OFFSET          0x0124 /* P2_00 Mode Register */
#define DA1470_GPIO_P2_01_MODE_OFFSET          0x0128 /* P2_01 Mode Register */
#define DA1470_GPIO_P2_02_MODE_OFFSET          0x012C /* P2_02 Mode Register */
#define DA1470_GPIO_P2_03_MODE_OFFSET          0x0130 /* P2_03 Mode Register */
#define DA1470_GPIO_P2_04_MODE_OFFSET          0x0134 /* P2_04 Mode Register */
#define DA1470_GPIO_P2_05_MODE_OFFSET          0x0138 /* P2_05 Mode Register */
#define DA1470_GPIO_P2_06_MODE_OFFSET          0x013C /* P2_06 Mode Register */
#define DA1470_GPIO_P2_07_MODE_OFFSET          0x0140 /* P2_07 Mode Register */
#define DA1470_GPIO_P2_08_MODE_OFFSET          0x0144 /* P2_08 Mode Register */
#define DA1470_GPIO_P2_09_MODE_OFFSET          0x0148 /* P2_09 Mode Register */
#define DA1470_GPIO_P2_10_MODE_OFFSET          0x014C /* P2_10 Mode Register */
#define DA1470_GPIO_P2_11_MODE_OFFSET          0x0150 /* P2_11 Mode Register */
#define DA1470_GPIO_P2_12_MODE_OFFSET          0x0154 /* P2_12 Mode Register */
#define DA1470_GPIO_P2_13_MODE_OFFSET          0x0158 /* P2_13 Mode Register */
#define DA1470_GPIO_P2_14_MODE_OFFSET          0x015C /* P2_14 Mode Register */
#define DA1470_GPIO_P2_DATA_OFFSET             0x0008 /* P1 Data input / output Register */
#define DA1470_GPIO_P2_PADPWR_CTRL_OFFSET      0x0168 /* P2 Output Power Control Register */
#define DA1470_GPIO_P2_RESET_DATA_OFFSET       0x0020 /* P0 Reset port pins Register */
#define DA1470_GPIO_P2_SET_DATA_OFFSET         0x0014 /* P1 Set port pins Register */
#define DA1470_GPIO_P2_WEAK_CTRL_OFFSET        0x0178 /* P2 Weak Pads Control Register */
#define DA1470_GPIO_PAD_DRIVE_CTRL_OFFSET      0x0180 /* Pad drive control for SPI3/SDIO/eMMC */

/* Register addresses *******************************************************/

#define DA1470_GPIO_BASE                       0x50050100 /* GPIO registers */

#define DA1470_GPIO_GPIO_CLK_SEL               (DA1470_GPIO_BASE + DA1470_GPIO_GPIO_CLK_SEL_OFFSET) /* Select which clock to map on ports P0/P1 */
#define DA1470_GPIO_LCDC_MAP_CTRL              (DA1470_GPIO_BASE + DA1470_GPIO_LCDC_MAP_CTRL_OFFSET) /* LCDC mapping control Register */
#define DA1470_GPIO_P0_00_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_00_MODE_OFFSET) /* P0_00 Mode Register */
#define DA1470_GPIO_P0_01_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_01_MODE_OFFSET) /* P0_01 Mode Register */
#define DA1470_GPIO_P0_02_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_02_MODE_OFFSET) /* P0_02 Mode Register */
#define DA1470_GPIO_P0_03_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_03_MODE_OFFSET) /* P0_03 Mode Register */
#define DA1470_GPIO_P0_04_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_04_MODE_OFFSET) /* P0_04 Mode Register */
#define DA1470_GPIO_P0_05_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_05_MODE_OFFSET) /* P0_05 Mode Register */
#define DA1470_GPIO_P0_06_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_06_MODE_OFFSET) /* P0_06 Mode Register */
#define DA1470_GPIO_P0_07_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_07_MODE_OFFSET) /* P0_07 Mode Register */
#define DA1470_GPIO_P0_08_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_08_MODE_OFFSET) /* P0_08 Mode Register */
#define DA1470_GPIO_P0_09_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_09_MODE_OFFSET) /* P0_09 Mode Register */
#define DA1470_GPIO_P0_10_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_10_MODE_OFFSET) /* P0_10 Mode Register */
#define DA1470_GPIO_P0_11_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_11_MODE_OFFSET) /* P0_11 Mode Register */
#define DA1470_GPIO_P0_12_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_12_MODE_OFFSET) /* P0_12 Mode Register */
#define DA1470_GPIO_P0_13_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_13_MODE_OFFSET) /* P0_13 Mode Register */
#define DA1470_GPIO_P0_14_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_14_MODE_OFFSET) /* P0_14 Mode Register */
#define DA1470_GPIO_P0_15_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_15_MODE_OFFSET) /* P0_15 Mode Register */
#define DA1470_GPIO_P0_16_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_16_MODE_OFFSET) /* P0_16 Mode Register */
#define DA1470_GPIO_P0_17_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_17_MODE_OFFSET) /* P0_17 Mode Register */
#define DA1470_GPIO_P0_18_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_18_MODE_OFFSET) /* P0_18 Mode Register */
#define DA1470_GPIO_P0_19_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_19_MODE_OFFSET) /* P0_19 Mode Register */
#define DA1470_GPIO_P0_20_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_20_MODE_OFFSET) /* P0_20 Mode Register */
#define DA1470_GPIO_P0_21_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_21_MODE_OFFSET) /* P0_21 Mode Register */
#define DA1470_GPIO_P0_22_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_22_MODE_OFFSET) /* P0_22 Mode Register */
#define DA1470_GPIO_P0_23_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_23_MODE_OFFSET) /* P0_23 Mode Register */
#define DA1470_GPIO_P0_24_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_24_MODE_OFFSET) /* P0_24 Mode Register */
#define DA1470_GPIO_P0_25_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_25_MODE_OFFSET) /* P0_25 Mode Register */
#define DA1470_GPIO_P0_26_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_26_MODE_OFFSET) /* P0_26 Mode Register */
#define DA1470_GPIO_P0_27_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_27_MODE_OFFSET) /* P0_27 Mode Register */
#define DA1470_GPIO_P0_28_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_28_MODE_OFFSET) /* P0_28 Mode Register */
#define DA1470_GPIO_P0_29_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_29_MODE_OFFSET) /* P0_29 Mode Register */
#define DA1470_GPIO_P0_30_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_30_MODE_OFFSET) /* P0_30 Mode Register */
#define DA1470_GPIO_P0_31_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P0_31_MODE_OFFSET) /* P0_31 Mode Register */
#define DA1470_GPIO_P0_DATA                    (DA1470_GPIO_BASE + DA1470_GPIO_P0_DATA_OFFSET) /* P0 Data input / output Register */
#define DA1470_GPIO_P0_PADPWR_CTRL             (DA1470_GPIO_BASE + DA1470_GPIO_P0_PADPWR_CTRL_OFFSET) /* P0 Output Power Control Register */
#define DA1470_GPIO_P0_RESET_DATA              (DA1470_GPIO_BASE + DA1470_GPIO_P0_RESET_DATA_OFFSET) /* P0 Reset port pins Register */
#define DA1470_GPIO_P0_SET_DATA                (DA1470_GPIO_BASE + DA1470_GPIO_P0_SET_DATA_OFFSET) /* P0 Set port pins Register */
#define DA1470_GPIO_P0_WEAK_CTRL               (DA1470_GPIO_BASE + DA1470_GPIO_P0_WEAK_CTRL_OFFSET) /* P0 Weak Pads Control Register */
#define DA1470_GPIO_P1_00_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_00_MODE_OFFSET) /* P1_00 Mode Register */
#define DA1470_GPIO_P1_01_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_01_MODE_OFFSET) /* P1_01 Mode Register */
#define DA1470_GPIO_P1_02_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_02_MODE_OFFSET) /* P1_02 Mode Register */
#define DA1470_GPIO_P1_03_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_03_MODE_OFFSET) /* P1_03 Mode Register */
#define DA1470_GPIO_P1_04_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_04_MODE_OFFSET) /* P1_04 Mode Register */
#define DA1470_GPIO_P1_05_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_05_MODE_OFFSET) /* P1_05 Mode Register */
#define DA1470_GPIO_P1_06_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_06_MODE_OFFSET) /* P1_06 Mode Register */
#define DA1470_GPIO_P1_07_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_07_MODE_OFFSET) /* P1_07 Mode Register */
#define DA1470_GPIO_P1_08_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_08_MODE_OFFSET) /* P1_08 Mode Register */
#define DA1470_GPIO_P1_09_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_09_MODE_OFFSET) /* P1_09 Mode Register */
#define DA1470_GPIO_P1_10_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_10_MODE_OFFSET) /* P1_10 Mode Register */
#define DA1470_GPIO_P1_11_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_11_MODE_OFFSET) /* P1_11 Mode Register */
#define DA1470_GPIO_P1_12_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_12_MODE_OFFSET) /* P1_12 Mode Register */
#define DA1470_GPIO_P1_13_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_13_MODE_OFFSET) /* P1_13 Mode Register */
#define DA1470_GPIO_P1_14_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_14_MODE_OFFSET) /* P1_14 Mode Register */
#define DA1470_GPIO_P1_15_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_15_MODE_OFFSET) /* P1_15 Mode Register */
#define DA1470_GPIO_P1_16_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_16_MODE_OFFSET) /* P1_16 Mode Register */
#define DA1470_GPIO_P1_17_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_17_MODE_OFFSET) /* P1_17 Mode Register */
#define DA1470_GPIO_P1_18_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_18_MODE_OFFSET) /* P1_18 Mode Register */
#define DA1470_GPIO_P1_19_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_19_MODE_OFFSET) /* P1_19 Mode Register */
#define DA1470_GPIO_P1_20_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_20_MODE_OFFSET) /* P1_20 Mode Register */
#define DA1470_GPIO_P1_21_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_21_MODE_OFFSET) /* P1_21 Mode Register */
#define DA1470_GPIO_P1_22_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_22_MODE_OFFSET) /* P1_22 Mode Register */
#define DA1470_GPIO_P1_23_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_23_MODE_OFFSET) /* P1_23 Mode Register */
#define DA1470_GPIO_P1_24_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_24_MODE_OFFSET) /* P1_24 Mode Register */
#define DA1470_GPIO_P1_25_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_25_MODE_OFFSET) /* P1_25 Mode Register */
#define DA1470_GPIO_P1_26_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_26_MODE_OFFSET) /* P1_26 Mode Register */
#define DA1470_GPIO_P1_27_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_27_MODE_OFFSET) /* P1_27 Mode Register */
#define DA1470_GPIO_P1_28_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_28_MODE_OFFSET) /* P1_28 Mode Register */
#define DA1470_GPIO_P1_29_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_29_MODE_OFFSET) /* P1_29 Mode Register */
#define DA1470_GPIO_P1_30_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_30_MODE_OFFSET) /* P1_30 Mode Register */
#define DA1470_GPIO_P1_31_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P1_31_MODE_OFFSET) /* P1_31 Mode Register */
#define DA1470_GPIO_P1_DATA                    (DA1470_GPIO_BASE + DA1470_GPIO_P1_DATA_OFFSET) /* P1 Data input / output Register */
#define DA1470_GPIO_P1_PADPWR_CTRL             (DA1470_GPIO_BASE + DA1470_GPIO_P1_PADPWR_CTRL_OFFSET) /* P1 Output Power Control Register */
#define DA1470_GPIO_P1_RESET_DATA              (DA1470_GPIO_BASE + DA1470_GPIO_P1_RESET_DATA_OFFSET) /* P1 Reset port pins Register */
#define DA1470_GPIO_P1_SET_DATA                (DA1470_GPIO_BASE + DA1470_GPIO_P1_SET_DATA_OFFSET) /* P1 Set port pins Register */
#define DA1470_GPIO_P1_WEAK_CTRL               (DA1470_GPIO_BASE + DA1470_GPIO_P1_WEAK_CTRL_OFFSET) /* P1 Weak Pads Control Register */
#define DA1470_GPIO_P2_00_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_00_MODE_OFFSET) /* P2_00 Mode Register */
#define DA1470_GPIO_P2_01_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_01_MODE_OFFSET) /* P2_01 Mode Register */
#define DA1470_GPIO_P2_02_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_02_MODE_OFFSET) /* P2_02 Mode Register */
#define DA1470_GPIO_P2_03_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_03_MODE_OFFSET) /* P2_03 Mode Register */
#define DA1470_GPIO_P2_04_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_04_MODE_OFFSET) /* P2_04 Mode Register */
#define DA1470_GPIO_P2_05_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_05_MODE_OFFSET) /* P2_05 Mode Register */
#define DA1470_GPIO_P2_06_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_06_MODE_OFFSET) /* P2_06 Mode Register */
#define DA1470_GPIO_P2_07_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_07_MODE_OFFSET) /* P2_07 Mode Register */
#define DA1470_GPIO_P2_08_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_08_MODE_OFFSET) /* P2_08 Mode Register */
#define DA1470_GPIO_P2_09_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_09_MODE_OFFSET) /* P2_09 Mode Register */
#define DA1470_GPIO_P2_10_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_10_MODE_OFFSET) /* P2_10 Mode Register */
#define DA1470_GPIO_P2_11_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_11_MODE_OFFSET) /* P2_11 Mode Register */
#define DA1470_GPIO_P2_12_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_12_MODE_OFFSET) /* P2_12 Mode Register */
#define DA1470_GPIO_P2_13_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_13_MODE_OFFSET) /* P2_13 Mode Register */
#define DA1470_GPIO_P2_14_MODE                 (DA1470_GPIO_BASE + DA1470_GPIO_P2_14_MODE_OFFSET) /* P2_14 Mode Register */
#define DA1470_GPIO_P2_DATA                    (DA1470_GPIO_BASE + DA1470_GPIO_P2_DATA_OFFSET) /* P1 Data input / output Register */
#define DA1470_GPIO_P2_PADPWR_CTRL             (DA1470_GPIO_BASE + DA1470_GPIO_P2_PADPWR_CTRL_OFFSET) /* P2 Output Power Control Register */
#define DA1470_GPIO_P2_RESET_DATA              (DA1470_GPIO_BASE + DA1470_GPIO_P2_RESET_DATA_OFFSET) /* P0 Reset port pins Register */
#define DA1470_GPIO_P2_SET_DATA                (DA1470_GPIO_BASE + DA1470_GPIO_P2_SET_DATA_OFFSET) /* P1 Set port pins Register */
#define DA1470_GPIO_P2_WEAK_CTRL               (DA1470_GPIO_BASE + DA1470_GPIO_P2_WEAK_CTRL_OFFSET) /* P2 Weak Pads Control Register */
#define DA1470_GPIO_PAD_DRIVE_CTRL             (DA1470_GPIO_BASE + DA1470_GPIO_PAD_DRIVE_CTRL_OFFSET) /* Pad drive control for SPI3/SDIO/eMMC */

/* Register bit definitions *************************************************/

#define GPIO_GPIO_CLK_SEL_DIVN_OUTPUT_EN       (1U << 9) /* DIVN output enable bit-field. When set, it enables the mapping of DIVN clock on  */
#define GPIO_GPIO_CLK_SEL_XTAL32M_OUTPUT_EN    (1U << 7) /* XTAL32M output enable bit-field. When set, it enables the mapping of XTAL32M clo */
#define GPIO_GPIO_CLK_SEL_RCX_OUTPUT_EN        (1U << 6) /* RCX output enable bit-field. When set, it enables the mapping of RCX clock on de */
#define GPIO_GPIO_CLK_SEL_RCLP_OUTPUT_EN       (1U << 5) /* RCLP output enable bit-field. When set, it enables the mapping of RCLP clock on  */
#define GPIO_GPIO_CLK_SEL_XTAL32K_OUTPUT_EN    (1U << 4) /* XTAL32K output enable bit-field. When set, it enables the mapping of XTAL32K clo */
#define GPIO_GPIO_CLK_SEL_FUNC_CLOCK_EN        (1U << 3) /* If set, it enables the mapping of the selected clock signal, according to FUNC_C */
#define GPIO_GPIO_CLK_SEL_FUNC_CLOCK_SEL_MASK  (0x7 << 0) /* Select which clock to map when PID = FUNC_CLOCK. 0x0: XTAL32K 0x1: RCLP 0x2: RCX */
#define GPIO_GPIO_CLK_SEL_FUNC_CLOCK_SEL_POS   (0) /* Select which clock to map when PID = FUNC_CLOCK. 0x0: XTAL32K 0x1: RCLP 0x2: RCX */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P1_07_EN     (1U << 14) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P1_07, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P1_01_EN     (1U << 13) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P1_01, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P1_00_EN     (1U << 12) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P1_00, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_24_EN     (1U << 11) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_24, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_23_EN     (1U << 10) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_23, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_22_EN     (1U << 9) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_22, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_21_EN     (1U << 8) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_21, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_19_EN     (1U << 7) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_19, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_18_EN     (1U << 6) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_18, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_17_EN     (1U << 5) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_17, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_16_EN     (1U << 4) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_16, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_15_EN     (1U << 3) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_15, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_14_EN     (1U << 2) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_14, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_10_EN     (1U << 1) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_10, overrulin */
#define GPIO_LCDC_MAP_CTRL_MAP_ON_P0_09_EN     (1U << 0) /* 0 = Normal operation 1 = Enables the mapping of LCDC signals on P0_09, overrulin */
#define GPIO_P0_00_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_00_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_00_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_00_MODE_PID_MASK               (0x3F << 0) /* Function of port: 0: GPIO 1: UART_RX 2: UART_TX 3: UART2_RX 4: UART2_TX 5: UART2 */
#define GPIO_P0_00_MODE_PID_POS                (0) /* Function of port: 0: GPIO 1: UART_RX 2: UART_TX 3: UART2_RX 4: UART2_TX 5: UART2 */
#define GPIO_P0_01_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_01_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_01_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_01_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_01_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_02_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_02_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_02_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_02_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_02_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_03_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_03_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_03_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_03_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_03_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_04_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_04_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_04_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_04_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_04_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_05_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_05_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_05_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_05_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_05_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_06_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_06_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_06_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_06_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_06_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_07_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_07_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_07_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_07_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_07_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_08_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_08_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_08_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_08_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_08_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_09_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_09_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_09_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_09_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_09_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_10_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_10_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_10_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_10_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_10_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_11_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_11_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_11_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_11_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_11_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_12_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_12_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_12_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_12_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_12_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_13_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_13_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_13_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_13_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_13_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_14_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_14_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_14_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_14_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_14_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_15_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_15_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_15_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_15_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_15_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_16_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_16_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_16_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_16_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_16_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_17_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_17_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_17_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_17_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_17_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_18_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_18_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_18_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_18_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_18_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_19_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_19_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_19_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_19_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_19_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_20_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_20_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_20_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_20_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_20_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_21_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_21_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_21_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_21_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_21_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_22_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_22_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_22_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_22_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_22_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_23_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_23_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_23_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_23_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_23_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_24_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_24_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_24_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_24_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_24_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_25_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_25_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_25_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_25_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_25_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_26_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_26_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_26_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_26_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_26_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_27_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_27_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_27_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_27_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_27_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_28_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_28_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_28_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_28_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_28_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_29_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_29_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_29_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_29_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_29_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_30_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_30_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_30_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_30_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_30_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_31_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P0_31_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_31_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P0_31_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_31_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P0_DATA_P0_DATA_MASK              (0xFFFFFFFF << 0) /* Set P0 output register when written; Returns the value of P0 port when read */
#define GPIO_P0_DATA_P0_DATA_POS               (0) /* Set P0 output register when written; Returns the value of P0 port when read */
#define GPIO_P0_PADPWR_CTRL_P0_31_OUT_CTRL     (1U << 31) /* 0 = P0_31 port output is powered by the V30 rail (default) 1 = P0_31 port output */
#define GPIO_P0_PADPWR_CTRL_P0_30_OUT_CTRL     (1U << 30) /* 0 = P0_30 port output is powered by the V30 rail (default) 1 = P0_30 port output */
#define GPIO_P0_PADPWR_CTRL_P0_29_OUT_CTRL     (1U << 29) /* 0 = P0_29 port output is powered by the V30 rail (default) 1 = P0_29 port output */
#define GPIO_P0_PADPWR_CTRL_P0_28_OUT_CTRL     (1U << 28) /* 0 = P0_28 port output is powered by the V30 rail (default) 1 = P0_28 port output */
#define GPIO_P0_PADPWR_CTRL_P0_27_OUT_CTRL     (1U << 27) /* 0 = P0_27 port output is powered by the V30 rail (default) 1 = P0_27 port output */
#define GPIO_P0_PADPWR_CTRL_P0_24_OUT_CTRL     (1U << 24) /* 0 = P0_24 port output is powered by the V30 rail (default) 1 = P0_24 port output */
#define GPIO_P0_PADPWR_CTRL_P0_23_OUT_CTRL     (1U << 23) /* 0 = P0_23 port output is powered by the V30 rail (default) 1 = P0_23 port output */
#define GPIO_P0_PADPWR_CTRL_P0_22_OUT_CTRL     (1U << 22) /* 0 = P0_22 port output is powered by the V30 rail (default) 1 = P0_22 port output */
#define GPIO_P0_PADPWR_CTRL_P0_21_OUT_CTRL     (1U << 21) /* 0 = P0_21 port output is powered by the V30 rail (default) 1 = P0_21 port output */
#define GPIO_P0_PADPWR_CTRL_P0_20_OUT_CTRL     (1U << 20) /* 0 = P0_20 port output is powered by the V30 rail (default) 1 = P0_20 port output */
#define GPIO_P0_PADPWR_CTRL_P0_19_OUT_CTRL     (1U << 19) /* 0 = P0_19 port output is powered by the V30 rail (default) 1 = P0_19 port output */
#define GPIO_P0_PADPWR_CTRL_P0_18_OUT_CTRL     (1U << 18) /* 0 = P0_18 port output is powered by the V30 rail (default) 1 = P0_18 port output */
#define GPIO_P0_PADPWR_CTRL_P0_17_OUT_CTRL     (1U << 17) /* 0 = P0_17 port output is powered by the V30 rail (default) 1 = P0_17 port output */
#define GPIO_P0_PADPWR_CTRL_P0_16_OUT_CTRL     (1U << 16) /* 0 = P0_16 port output is powered by the V30 rail (default) 1 = P0_16 port output */
#define GPIO_P0_PADPWR_CTRL_P0_15_OUT_CTRL     (1U << 15) /* 0 = P0_15 port output is powered by the V30 rail (default) 1 = P0_15 port output */
#define GPIO_P0_PADPWR_CTRL_P0_14_OUT_CTRL     (1U << 14) /* 0 = P0_14 port output is powered by the V30 rail (default) 1 = P0_14 port output */
#define GPIO_P0_PADPWR_CTRL_P0_11_OUT_CTRL     (1U << 11) /* 0 = P0_11 port output is powered by the V30 rail (default) 1 = P0_11 port output */
#define GPIO_P0_PADPWR_CTRL_P0_10_OUT_CTRL     (1U << 10) /* 0 = P0_10 port output is powered by the V30 rail (default) 1 = P0_10 port output */
#define GPIO_P0_PADPWR_CTRL_P0_09_OUT_CTRL     (1U << 9) /* 0 = P0_09 port output is powered by the V30 rail (default) 1 = P0_09 port output */
#define GPIO_P0_PADPWR_CTRL_P0_08_OUT_CTRL     (1U << 8) /* 0 = P0_08 port output is powered by the V30 rail (default) 1 = P0_08 port output */
#define GPIO_P0_PADPWR_CTRL_P0_07_OUT_CTRL     (1U << 7) /* 0 = P0_07 port output is powered by the V30 rail (default) 1 = P0_07 port output */
#define GPIO_P0_PADPWR_CTRL_P0_06_OUT_CTRL     (1U << 6) /* 0 = P0_06 port output is powered by the V30 rail (default) 1 = P0_06 port output */
#define GPIO_P0_PADPWR_CTRL_P0_05_OUT_CTRL     (1U << 5) /* 0 = P0_05 port output is powered by the V30 rail (default) 1 = P0_05 port output */
#define GPIO_P0_PADPWR_CTRL_P0_04_OUT_CTRL     (1U << 4) /* 0 = P0_04 port output is powered by the V30 rail (default) 1 = P0_04 port output */
#define GPIO_P0_PADPWR_CTRL_P0_03_OUT_CTRL     (1U << 3) /* 0 = P0_03 port output is powered by the V30 rail (default) 1 = P0_03 port output */
#define GPIO_P0_PADPWR_CTRL_P0_02_OUT_CTRL     (1U << 2) /* 0 = P0_02 port output is powered by the V30 rail (default) 1 = P0_02 port output */
#define GPIO_P0_PADPWR_CTRL_P0_01_OUT_CTRL     (1U << 1) /* 0 = P0_01 port output is powered by the V30 rail (default) 1 = P0_01 port output */
#define GPIO_P0_PADPWR_CTRL_P0_00_OUT_CTRL     (1U << 0) /* 0 = P0_00 port output is powered by the V30 rail (default) 1 = P0_00 port output */
#define GPIO_P0_RESET_DATA_P0_RESET_MASK       (0xFFFFFFFF << 0) /* Writing a 1 to P0[y] sets P0[y] to 0. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P0_RESET_DATA_P0_RESET_POS        (0) /* Writing a 1 to P0[y] sets P0[y] to 0. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P0_SET_DATA_P0_SET_MASK           (0xFFFFFFFF << 0) /* Writing a 1 to P0[y] sets P0[y] to 1. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P0_SET_DATA_P0_SET_POS            (0) /* Writing a 1 to P0[y] sets P0[y] to 1. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P0_WEAK_CTRL_P0_31_LOWDRV         (1U << 31) /* 0 = Normal operation 1 = Reduces the driving strength of P0_31 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_30_LOWDRV         (1U << 30) /* 0 = Normal operation 1 = Reduces the driving strength of P0_30 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_29_LOWDRV         (1U << 29) /* 0 = Normal operation 1 = Reduces the driving strength of P0_29 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_28_LOWDRV         (1U << 28) /* 0 = Normal operation 1 = Reduces the driving strength of P0_28 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_27_LOWDRV         (1U << 27) /* 0 = Normal operation 1 = Reduces the driving strength of P0_27 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_24_LOWDRV         (1U << 24) /* 0 = Normal operation 1 = Reduces the driving strength of P0_24 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_23_LOWDRV         (1U << 23) /* 0 = Normal operation 1 = Reduces the driving strength of P0_23 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_22_LOWDRV         (1U << 22) /* 0 = Normal operation 1 = Reduces the driving strength of P0_22 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_21_LOWDRV         (1U << 21) /* 0 = Normal operation 1 = Reduces the driving strength of P0_21 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_20_LOWDRV         (1U << 20) /* 0 = Normal operation 1 = Reduces the driving strength of P0_20 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_19_LOWDRV         (1U << 19) /* 0 = Normal operation 1 = Reduces the driving strength of P0_19 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_18_LOWDRV         (1U << 18) /* 0 = Normal operation 1 = Reduces the driving strength of P0_18 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_17_LOWDRV         (1U << 17) /* 0 = Normal operation 1 = Reduces the driving strength of P0_17 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_16_LOWDRV         (1U << 16) /* 0 = Normal operation 1 = Reduces the driving strength of P0_16 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_15_LOWDRV         (1U << 15) /* 0 = Normal operation 1 = Reduces the driving strength of P0_15 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_14_LOWDRV         (1U << 14) /* 0 = Normal operation 1 = Reduces the driving strength of P0_14 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_11_LOWDRV         (1U << 11) /* 0 = Normal operation 1 = Reduces the driving strength of P0_11 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_10_LOWDRV         (1U << 10) /* 0 = Normal operation 1 = Reduces the driving strength of P0_10 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_09_LOWDRV         (1U << 9) /* 0 = Normal operation 1 = Reduces the driving strength of P0_09 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_08_LOWDRV         (1U << 8) /* 0 = Normal operation 1 = Reduces the driving strength of P0_08 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_07_LOWDRV         (1U << 7) /* 0 = Normal operation 1 = Reduces the driving strength of P0_07 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_06_LOWDRV         (1U << 6) /* 0 = Normal operation 1 = Reduces the driving strength of P0_06 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_05_LOWDRV         (1U << 5) /* 0 = Normal operation 1 = Reduces the driving strength of P0_05 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_04_LOWDRV         (1U << 4) /* 0 = Normal operation 1 = Reduces the driving strength of P0_04 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_03_LOWDRV         (1U << 3) /* 0 = Normal operation 1 = Reduces the driving strength of P0_03 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_02_LOWDRV         (1U << 2) /* 0 = Normal operation 1 = Reduces the driving strength of P0_02 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_01_LOWDRV         (1U << 1) /* 0 = Normal operation 1 = Reduces the driving strength of P0_01 pad Note: This mo */
#define GPIO_P0_WEAK_CTRL_P0_00_LOWDRV         (1U << 0) /* 0 = Normal operation 1 = Reduces the driving strength of P0_00 pad Note: This mo */
#define GPIO_P1_00_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_00_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_00_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_00_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_00_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_01_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_01_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_01_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_01_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_01_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_02_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_02_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_02_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_02_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_02_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_03_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_03_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_03_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_03_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_03_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_04_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_04_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_04_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_04_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_04_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_05_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_05_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_05_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_05_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_05_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_06_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_06_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_06_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_06_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_06_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_07_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_07_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_07_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_07_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_07_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_08_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_08_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_08_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_08_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_08_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_09_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_09_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_09_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_09_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_09_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_10_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_10_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_10_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_10_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_10_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_11_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_11_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_11_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_11_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_11_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_12_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_12_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_12_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_12_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_12_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_13_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_13_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_13_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_13_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_13_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_14_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_14_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_14_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_14_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_14_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_15_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_15_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_15_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_15_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_15_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_16_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_16_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_16_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_16_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_16_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_17_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_17_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_17_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_17_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_17_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_18_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_18_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_18_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_18_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_18_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_19_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_19_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_19_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_19_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_19_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_20_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_20_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_20_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_20_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_20_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_21_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_21_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_21_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_21_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_21_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_22_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_22_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_22_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_22_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_22_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_23_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_23_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_23_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_23_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_23_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_24_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_24_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_24_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_24_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_24_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_25_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_25_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_25_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_25_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_25_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_26_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_26_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_26_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_26_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_26_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_27_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_27_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_27_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_27_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_27_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_28_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_28_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_28_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_28_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_28_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_29_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_29_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_29_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_29_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_29_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_30_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_30_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_30_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_30_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_30_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_31_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P1_31_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_31_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P1_31_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_31_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P1_DATA_P1_DATA_MASK              (0xFFFFFFFF << 0) /* Set P1 output register when written; Returns the value of P1 port when read */
#define GPIO_P1_DATA_P1_DATA_POS               (0) /* Set P1 output register when written; Returns the value of P1 port when read */
#define GPIO_P1_PADPWR_CTRL_P1_31_OUT_CTRL     (1U << 31) /* 0 = P1_31 port output is powered by the V30 rail (default) 1 = P1_31 port output */
#define GPIO_P1_PADPWR_CTRL_P1_30_OUT_CTRL     (1U << 30) /* 0 = P1_30 port output is powered by the V30 rail (default) 1 = P1_30 port output */
#define GPIO_P1_PADPWR_CTRL_P1_27_OUT_CTRL     (1U << 27) /* 0 = P1_27 port output is powered by the V30 rail (default) 1 = P1_27 port output */
#define GPIO_P1_PADPWR_CTRL_P1_26_OUT_CTRL     (1U << 26) /* 0 = P1_26 port output is powered by the V30 rail (default) 1 = P1_26 port output */
#define GPIO_P1_PADPWR_CTRL_P1_25_OUT_CTRL     (1U << 25) /* 0 = P1_25 port output is powered by the V30 rail (default) 1 = P1_25 port output */
#define GPIO_P1_PADPWR_CTRL_P1_24_OUT_CTRL     (1U << 24) /* 0 = P1_24 port output is powered by the V30 rail (default) 1 = P1_24 port output */
#define GPIO_P1_PADPWR_CTRL_P1_23_OUT_CTRL     (1U << 23) /* 0 = P1_23 port output is powered by the V30 rail (default) 1 = P1_23 port output */
#define GPIO_P1_PADPWR_CTRL_P1_22_OUT_CTRL     (1U << 22) /* 0 = P1_22 port output is powered by the V30 rail (default) 1 = P1_22 port output */
#define GPIO_P1_PADPWR_CTRL_P1_20_OUT_CTRL     (1U << 20) /* 0 = P1_20 port output is powered by the V30 rail (default) 1 = P1_20 port output */
#define GPIO_P1_PADPWR_CTRL_P1_19_OUT_CTRL     (1U << 19) /* 0 = P1_19 port output is powered by the V30 rail (default) 1 = P1_19 port output */
#define GPIO_P1_PADPWR_CTRL_P1_15_OUT_CTRL     (1U << 15) /* 0 = P1_15 port output is powered by the V30 rail (default) 1 = P1_15 port output */
#define GPIO_P1_PADPWR_CTRL_P1_14_OUT_CTRL     (1U << 14) /* 0 = P1_14 port output is powered by the V30 rail (default) 1 = P1_14 port output */
#define GPIO_P1_PADPWR_CTRL_P1_13_OUT_CTRL     (1U << 13) /* 0 = P1_13 port output is powered by the V30 rail (default) 1 = P1_13 port output */
#define GPIO_P1_PADPWR_CTRL_P1_12_OUT_CTRL     (1U << 12) /* 0 = P1_12 port output is powered by the V30 rail (default) 1 = P1_12 port output */
#define GPIO_P1_PADPWR_CTRL_P1_11_OUT_CTRL     (1U << 11) /* 0 = P1_11 port output is powered by the V30 rail (default) 1 = P1_11 port output */
#define GPIO_P1_PADPWR_CTRL_P1_07_OUT_CTRL     (1U << 7) /* 0 = P1_07 port output is powered by the V30 rail (default) 1 = P1_07 port output */
#define GPIO_P1_PADPWR_CTRL_P1_06_OUT_CTRL     (1U << 6) /* 0 = P1_06 port output is powered by the V30 rail (default) 1 = P1_06 port output */
#define GPIO_P1_PADPWR_CTRL_P1_05_OUT_CTRL     (1U << 5) /* 0 = P1_05 port output is powered by the V30 rail (default) 1 = P1_05 port output */
#define GPIO_P1_PADPWR_CTRL_P1_04_OUT_CTRL     (1U << 4) /* 0 = P1_04 port output is powered by the V30 rail (default) 1 = P1_04 port output */
#define GPIO_P1_PADPWR_CTRL_P1_03_OUT_CTRL     (1U << 3) /* 0 = P1_03 port output is powered by the V30 rail (default) 1 = P1_03 port output */
#define GPIO_P1_PADPWR_CTRL_P1_01_OUT_CTRL     (1U << 1) /* 0 = P1_01 port output is powered by the V30 rail (default) 1 = P1_01 port output */
#define GPIO_P1_PADPWR_CTRL_P1_00_OUT_CTRL     (1U << 0) /* 0 = P1_00 port output is powered by the V30 rail (default) 1 = P1_00 port output */
#define GPIO_P1_RESET_DATA_P1_RESET_MASK       (0xFFFFFFFF << 0) /* Writing a 1 to P1[y] sets P1[y] to 0. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P1_RESET_DATA_P1_RESET_POS        (0) /* Writing a 1 to P1[y] sets P1[y] to 0. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P1_SET_DATA_P1_SET_MASK           (0xFFFFFFFF << 0) /* Writing a 1 to P1[y] sets P1[y] to 1. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P1_SET_DATA_P1_SET_POS            (0) /* Writing a 1 to P1[y] sets P1[y] to 1. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P1_WEAK_CTRL_P1_31_LOWDRV         (1U << 31) /* 0 = Normal operation 1 = Reduces the driving strength of P1_30 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_30_LOWDRV         (1U << 30) /* 0 = Normal operation 1 = Reduces the driving strength of P1_30 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_27_LOWDRV         (1U << 27) /* 0 = Normal operation 1 = Reduces the driving strength of P1_27 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_26_LOWDRV         (1U << 26) /* 0 = Normal operation 1 = Reduces the driving strength of P1_26 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_25_LOWDRV         (1U << 25) /* 0 = Normal operation 1 = Reduces the driving strength of P1_25 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_24_LOWDRV         (1U << 24) /* 0 = Normal operation 1 = Reduces the driving strength of P1_24 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_23_LOWDRV         (1U << 23) /* 0 = Normal operation 1 = Reduces the driving strength of P1_23 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_22_LOWDRV         (1U << 22) /* 0 = Normal operation 1 = Reduces the driving strength of P1_22 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_20_LOWDRV         (1U << 20) /* 0 = Normal operation 1 = Reduces the driving strength of P1_20 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_19_LOWDRV         (1U << 19) /* 0 = Normal operation 1 = Reduces the driving strength of P1_19 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_15_LOWDRV         (1U << 15) /* 0 = Normal operation 1 = Reduces the driving strength of P1_15 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_14_LOWDRV         (1U << 14) /* 0 = Normal operation 1 = Reduces the driving strength of P1_14 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_13_LOWDRV         (1U << 13) /* 0 = Normal operation 1 = Reduces the driving strength of P1_13 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_12_LOWDRV         (1U << 12) /* 0 = Normal operation 1 = Reduces the driving strength of P1_12 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_11_LOWDRV         (1U << 11) /* 0 = Normal operation 1 = Reduces the driving strength of P1_11 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_07_LOWDRV         (1U << 7) /* 0 = Normal operation 1 = Reduces the driving strength of P1_07 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_06_LOWDRV         (1U << 6) /* 0 = Normal operation 1 = Reduces the driving strength of P1_06 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_05_LOWDRV         (1U << 5) /* 0 = Normal operation 1 = Reduces the driving strength of P1_05 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_04_LOWDRV         (1U << 4) /* 0 = Normal operation 1 = Reduces the driving strength of P1_04 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_03_LOWDRV         (1U << 3) /* 0 = Normal operation 1 = Reduces the driving strength of P1_03 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_01_LOWDRV         (1U << 1) /* 0 = Normal operation 1 = Reduces the driving strength of P1_01 pad Note: This mo */
#define GPIO_P1_WEAK_CTRL_P1_00_LOWDRV         (1U << 0) /* 0 = Normal operation 1 = Reduces the driving strength of P1_00 pad Note: This mo */
#define GPIO_P2_00_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_00_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_00_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_00_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_00_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_01_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_01_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_01_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_01_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_01_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_02_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_02_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_02_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_02_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_02_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_03_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_03_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_03_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_03_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_03_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_04_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_04_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_04_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_04_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_04_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_05_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_05_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_05_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_05_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_05_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_06_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_06_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_06_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_06_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_06_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_07_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_07_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_07_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_07_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_07_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_08_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_08_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_08_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_08_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_08_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_09_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_09_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_09_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_09_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_09_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_10_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_10_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_10_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_10_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_10_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_11_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_11_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_11_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_11_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_11_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_12_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_12_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_12_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_12_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_12_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_13_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_13_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_13_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_13_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_13_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_14_MODE_PPOD                   (1U << 10) /* 0: Push pull 1: Open drain */
#define GPIO_P2_14_MODE_PUPD_MASK              (0x3 << 8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_14_MODE_PUPD_POS               (8) /* 00 = Input, no resistors selected 01 = Input, pull-up selected 10 = Input, pull- */
#define GPIO_P2_14_MODE_PID_MASK               (0x3F << 0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_14_MODE_PID_POS                (0) /* See P0_00_MODE_REG[PID] */
#define GPIO_P2_DATA_P2_DATA_MASK              (0x7FFF << 0) /* Set P2 output register when written; Returns the value of P2 port when read */
#define GPIO_P2_DATA_P2_DATA_POS               (0) /* Set P2 output register when written; Returns the value of P2 port when read */
#define GPIO_P2_PADPWR_CTRL_P2_11_OUT_CTRL     (1U << 11) /* 0 = P2_11 port output is powered by the V30 rail (default) 1 = P2_11 port output */
#define GPIO_P2_PADPWR_CTRL_P2_10_OUT_CTRL     (1U << 10) /* 0 = P2_10 port output is powered by the V30 rail (default) 1 = P2_10 port output */
#define GPIO_P2_PADPWR_CTRL_P2_09_OUT_CTRL     (1U << 9) /* 0 = P2_09 port output is powered by the V30 rail (default) 1 = P2_09 port output */
#define GPIO_P2_PADPWR_CTRL_P2_08_OUT_CTRL     (1U << 8) /* 0 = P2_08 port output is powered by the V30 rail (default) 1 = P2_08 port output */
#define GPIO_P2_PADPWR_CTRL_P2_07_OUT_CTRL     (1U << 7) /* 0 = P2_07 port output is powered by the V30 rail (default) 1 = P2_07 port output */
#define GPIO_P2_PADPWR_CTRL_P2_06_OUT_CTRL     (1U << 6) /* 0 = P2_06 port output is powered by the V30 rail (default) 1 = P2_06 port output */
#define GPIO_P2_PADPWR_CTRL_P2_05_OUT_CTRL     (1U << 5) /* 0 = P2_05 port output is powered by the V30 rail (default) 1 = P2_05 port output */
#define GPIO_P2_PADPWR_CTRL_P2_04_OUT_CTRL     (1U << 4) /* 0 = P2_04 port output is powered by the V30 rail (default) 1 = P2_04 port output */
#define GPIO_P2_PADPWR_CTRL_P2_01_OUT_CTRL     (1U << 1) /* 0 = P2_01 port output is powered by the V30 rail (default) 1 = P2_01 port output */
#define GPIO_P2_RESET_DATA_P2_RESET_MASK       (0x7FFF << 0) /* Writing a 1 to P2[y] sets P2[y] to 0. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P2_RESET_DATA_P2_RESET_POS        (0) /* Writing a 1 to P2[y] sets P2[y] to 0. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P2_SET_DATA_P2_SET_MASK           (0x7FFF << 0) /* Writing a 1 to P2[y] sets P2[y] to 1. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P2_SET_DATA_P2_SET_POS            (0) /* Writing a 1 to P2[y] sets P2[y] to 1. Writing 0 is discarded; Reading returns 0 */
#define GPIO_P2_WEAK_CTRL_P2_11_LOWDRV         (1U << 11) /* 0 = Normal operation 1 = Reduces the driving strength of P2_11 pad Note: This mo */
#define GPIO_P2_WEAK_CTRL_P2_10_LOWDRV         (1U << 10) /* 0 = Normal operation 1 = Reduces the driving strength of P2_10 pad Note: This mo */
#define GPIO_P2_WEAK_CTRL_P2_09_LOWDRV         (1U << 9) /* 0 = Normal operation 1 = Reduces the driving strength of P2_09 pad Note: This mo */
#define GPIO_P2_WEAK_CTRL_P2_08_LOWDRV         (1U << 8) /* 0 = Normal operation 1 = Reduces the driving strength of P2_08 pad Note: This mo */
#define GPIO_P2_WEAK_CTRL_P2_07_LOWDRV         (1U << 7) /* 0 = Normal operation 1 = Reduces the driving strength of P2_07 pad Note: This mo */
#define GPIO_P2_WEAK_CTRL_P2_06_LOWDRV         (1U << 6) /* 0 = Normal operation 1 = Reduces the driving strength of P2_06 pad Note: This mo */
#define GPIO_P2_WEAK_CTRL_P2_05_LOWDRV         (1U << 5) /* 0 = Normal operation 1 = Reduces the driving strength of P2_05 pad Note: This mo */
#define GPIO_P2_WEAK_CTRL_P2_04_LOWDRV         (1U << 4) /* 0 = Normal operation 1 = Reduces the driving strength of P2_04 pad Note: This mo */
#define GPIO_P2_WEAK_CTRL_P2_01_LOWDRV         (1U << 1) /* 0 = Normal operation 1 = Reduces the driving strength of P2_01 pad Note: This mo */
#define GPIO_PAD_DRIVE_CTRL_EMMC_DRIVE_MASK    (0x3 << 10) /* pads drive current 0: 4 mA 1: 8 mA 2: 12 mA 3: 16 mA */
#define GPIO_PAD_DRIVE_CTRL_EMMC_DRIVE_POS     (10) /* pads drive current 0: 4 mA 1: 8 mA 2: 12 mA 3: 16 mA */
#define GPIO_PAD_DRIVE_CTRL_EMMC_SLEW_MASK     (0x3 << 8) /* pads slew rate control. Indicative values under certain conditions: 0: Rise=1.7  */
#define GPIO_PAD_DRIVE_CTRL_EMMC_SLEW_POS      (8) /* pads slew rate control. Indicative values under certain conditions: 0: Rise=1.7  */
#define GPIO_PAD_DRIVE_CTRL_SDIO_DRIVE_MASK    (0x3 << 6) /* pads drive current 0: 4 mA 1: 8 mA 2: 12 mA 3: 16 mA */
#define GPIO_PAD_DRIVE_CTRL_SDIO_DRIVE_POS     (6) /* pads drive current 0: 4 mA 1: 8 mA 2: 12 mA 3: 16 mA */
#define GPIO_PAD_DRIVE_CTRL_SDIO_SLEW_MASK     (0x3 << 4) /* QSPI pads slew rate control. Indicative values under certain conditions: 0: Rise */
#define GPIO_PAD_DRIVE_CTRL_SDIO_SLEW_POS      (4) /* QSPI pads slew rate control. Indicative values under certain conditions: 0: Rise */
#define GPIO_PAD_DRIVE_CTRL_SPI3_DRIVE_MASK    (0x3 << 2) /* pads drive current 0: 4 mA 1: 8 mA 2: 12 mA 3: 16 mA */
#define GPIO_PAD_DRIVE_CTRL_SPI3_DRIVE_POS     (2) /* pads drive current 0: 4 mA 1: 8 mA 2: 12 mA 3: 16 mA */
#define GPIO_PAD_DRIVE_CTRL_SPI3_SLEW_MASK     (0x3 << 0) /* QSPI pads slew rate control. Indicative values under certain conditions: 0: Rise */
#define GPIO_PAD_DRIVE_CTRL_SPI3_SLEW_POS      (0) /* QSPI pads slew rate control. Indicative values under certain conditions: 0: Rise */

#endif /* __DA1470_GPIO_H */
