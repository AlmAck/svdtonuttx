/****************************************************************************
 * ./tmp/da1470_i3c.h
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

#ifndef __DA1470_I3C_H
#define __DA1470_I3C_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_I3C_I3C_BUS_FREE_AVAIL_TIMING_OFFSET    0x00D4 /* Bus Free Timing Register */
#define DA1470_I3C_I3C_COMMAND_QUEUE_PORT_OFFSET       0x000C /* COMMAND_QUEUE_PORT */
#define DA1470_I3C_I3C_DATA_BUFFER_STAT_LEVEL_OFFSET   0x0050 /* Data Buffer Status Level Register */
#define DA1470_I3C_I3C_DATA_BUFFER_THLD_CTRL_OFFSET    0x0020 /* Data Buffer Threshold Control Register */
#define DA1470_I3C_I3C_DEVICE_ADDR_OFFSET              0x0004 /* Device Address Register */
#define DA1470_I3C_I3C_DEVICE_ADDR_TABLE_PTR_OFFSET    0x005C /* Pointer for Device Address Table Registers */
#define DA1470_I3C_I3C_DEVICE_CTRL_EXTENDED_OFFSET     0x00B0 /* Device Control Extended Register */
#define DA1470_I3C_I3C_DEVICE_CTRL_OFFSET              0x0000 /* Device Control Register */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC1_OFFSET      0x0280 /* Device Address Table of Device1 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC2_OFFSET      0x0284 /* Device Address Table of Device2 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC3_OFFSET      0x0288 /* Device Address Table of Device3 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC4_OFFSET      0x028C /* Device Address Table of Device4 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC5_OFFSET      0x0290 /* Device Address Table of Device5 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC6_OFFSET      0x0294 /* Device Address Table of Device6 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC7_OFFSET      0x0298 /* Device Address Table of Device7 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC8_OFFSET      0x029C /* Device Address Table of Device8 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC1_OFFSET     0x0200 /* Device Characteristic Table Location-1 of Device1 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC2_OFFSET     0x0204 /* Device Characteristic Table Location-2 of Device1 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC3_OFFSET     0x0208 /* Device Characteristic Table Location-3 of Device1 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC4_OFFSET     0x020C /* Device Characteristic Table Location-4 of Device1 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC1_OFFSET     0x0210 /* Device Characteristic Table Location-1 of Device2 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC2_OFFSET     0x0214 /* Device Characteristic Table Location-2 of Device2 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC3_OFFSET     0x0218 /* Device Characteristic Table Location-3 of Device2 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC4_OFFSET     0x021C /* Device Characteristic Table Location-4 of Device2 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC1_OFFSET     0x0220 /* Device Characteristic Table Location-1 of Device3 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC2_OFFSET     0x0224 /* Device Characteristic Table Location-2 of Device3 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC3_OFFSET     0x0228 /* Device Characteristic Table Location-3 of Device3 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC4_OFFSET     0x022C /* Device Characteristic Table Location-4 of Device3 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC1_OFFSET     0x0230 /* Device Characteristic Table Location-1 of Device4 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC2_OFFSET     0x0234 /* Device Characteristic Table Location-2 of Device4 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC3_OFFSET     0x0238 /* Device Characteristic Table Location-3 of Device4 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC4_OFFSET     0x023C /* Device Characteristic Table Location-4 of Device4 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC1_OFFSET     0x0240 /* Device Characteristic Table Location-1 of Device5 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC2_OFFSET     0x0244 /* Device Characteristic Table Location-2 of Device5 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC3_OFFSET     0x0248 /* Device Characteristic Table Location-3 of Device5 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC4_OFFSET     0x024C /* Device Characteristic Table Location-4 of Device5 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC1_OFFSET     0x0250 /* Device Characteristic Table Location-1 of Device6 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC2_OFFSET     0x0254 /* Device Characteristic Table Location-2 of Device6 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC3_OFFSET     0x0258 /* Device Characteristic Table Location-3 of Device6 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC4_OFFSET     0x025C /* Device Characteristic Table Location-4 of Device6 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC1_OFFSET     0x0260 /* Device Characteristic Table Location-1 of Device7 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC2_OFFSET     0x0264 /* Device Characteristic Table Location-2 of Device7 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC3_OFFSET     0x0268 /* Device Characteristic Table Location-3 of Device7 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC4_OFFSET     0x026C /* Device Characteristic Table Location-4 of Device7 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC1_OFFSET     0x0270 /* Device Characteristic Table Location-1 of Device8 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC2_OFFSET     0x0274 /* Device Characteristic Table Location-2 of Device8 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC3_OFFSET     0x0278 /* Device Characteristic Table Location-3 of Device8 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC4_OFFSET     0x027C /* Device Characteristic Table Location-4 of Device8 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE_POINTER_OFFSET   0x0060 /* Pointer for Device Characteristics Table */
#define DA1470_I3C_I3C_HW_CAPABILITY_OFFSET            0x0008 /* Hardware Capability register */
#define DA1470_I3C_I3C_IBI_QUEUE_CTRL_OFFSET           0x0024 /* IBI Queue Control Register */
#define DA1470_I3C_I3C_IBI_QUEUE_STATUS_DATA_OFFSET    0x0018 /* In-Band Interrupt Queue Status and Data Register */
#define DA1470_I3C_I3C_IBI_SIR_REQ_REJECT_OFFSET       0x0030 /* IBI SIR Request Rejection Control Register */
#define DA1470_I3C_I3C_INTR_FORCE_OFFSET               0x0048 /* Interrupt Force Enable Register */
#define DA1470_I3C_I3C_INTR_SIGNAL_EN_OFFSET           0x0044 /* Interrupt Signal Enable Register */
#define DA1470_I3C_I3C_INTR_STATUS_EN_OFFSET           0x0040 /* Interrupt Status Enable Register */
#define DA1470_I3C_I3C_INTR_STATUS_OFFSET              0x003C /* Interrupt Status Register */
#define DA1470_I3C_I3C_PRESENT_STATE_OFFSET            0x0054 /* Present State Register */
#define DA1470_I3C_I3C_QUEUE_SIZE_CAPABILITY_OFFSET    0x00E8 /* DWC_mipi_i3c Queue Size Capability Register */
#define DA1470_I3C_I3C_QUEUE_STATUS_LEVEL_OFFSET       0x004C /* Queue Status Level Register */
#define DA1470_I3C_I3C_QUEUE_THLD_CTRL_OFFSET          0x001C /* Queue Threshold Control Register */
#define DA1470_I3C_I3C_RESET_CTRL_OFFSET               0x0034 /* Reset Control Register */
#define DA1470_I3C_I3C_RESPONSE_QUEUE_PORT_OFFSET      0x0010 /* RESPONSE_QUEUE_PORT */
#define DA1470_I3C_I3C_RX_TX_DATA_PORT_OFFSET          0x0014 /* Receive and Transmit Data Port Register */
#define DA1470_I3C_I3C_SCL_EXT_LCNT_TIMING_OFFSET      0x00C8 /* SCL Extended Low Count Timing Register */
#define DA1470_I3C_I3C_SCL_EXT_TERMN_LCNT_TIME_OFFSET  0x00CC /* SCL Termination Bit Low count Timing Register */
#define DA1470_I3C_I3C_SCL_I2C_FMP_TIMING_OFFSET       0x00C0 /* SCL I2C Fast Mode Plus Timing Register */
#define DA1470_I3C_I3C_SCL_I2C_FM_TIMING_OFFSET        0x00BC /* SCL I2C Fast Mode Timing Register */
#define DA1470_I3C_I3C_SCL_I3C_OD_TIMING_OFFSET        0x00B4 /* SCL I3C Open Drain Timing Register */
#define DA1470_I3C_I3C_SCL_I3C_PP_TIMING_OFFSET        0x00B8 /* SCL I3C Push Pull Timing Register */
#define DA1470_I3C_I3C_SDA_HOLD_DLY_TIMING_OFFSET      0x00D0 /* SDA Hold Delay Timing Register */
#define DA1470_I3C_I3C_SLV_EVENT_STATUS_OFFSET         0x0038 /* Slave Event Status Register */
#define DA1470_I3C_I3C_VENDOR_SPECIFIC_PTR_OFFSET      0x006C /* Pointer for Vendor specific Registers */
#define DA1470_I3C_I3C_VER_ID_OFFSET                   0x00E0 /* DWC_mipi_i3c Version ID Register */
#define DA1470_I3C_I3C_VER_TYPE_OFFSET                 0x00E4 /* DWC_mipi_i3c Version Type Register */

/* Register addresses *******************************************************/

#define DA1470_I3C_BASE                                0x50020C00 /* I3C registers */

#define DA1470_I3C_I3C_BUS_FREE_AVAIL_TIMING           (DA1470_I3C_BASE + DA1470_I3C_I3C_BUS_FREE_AVAIL_TIMING_OFFSET) /* Bus Free Timing Register */
#define DA1470_I3C_I3C_COMMAND_QUEUE_PORT              (DA1470_I3C_BASE + DA1470_I3C_I3C_COMMAND_QUEUE_PORT_OFFSET) /* COMMAND_QUEUE_PORT */
#define DA1470_I3C_I3C_DATA_BUFFER_STAT_LEVEL          (DA1470_I3C_BASE + DA1470_I3C_I3C_DATA_BUFFER_STAT_LEVEL_OFFSET) /* Data Buffer Status Level Register */
#define DA1470_I3C_I3C_DATA_BUFFER_THLD_CTRL           (DA1470_I3C_BASE + DA1470_I3C_I3C_DATA_BUFFER_THLD_CTRL_OFFSET) /* Data Buffer Threshold Control Register */
#define DA1470_I3C_I3C_DEVICE_ADDR                     (DA1470_I3C_BASE + DA1470_I3C_I3C_DEVICE_ADDR_OFFSET) /* Device Address Register */
#define DA1470_I3C_I3C_DEVICE_ADDR_TABLE_PTR           (DA1470_I3C_BASE + DA1470_I3C_I3C_DEVICE_ADDR_TABLE_PTR_OFFSET) /* Pointer for Device Address Table Registers */
#define DA1470_I3C_I3C_DEVICE_CTRL_EXTENDED            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEVICE_CTRL_EXTENDED_OFFSET) /* Device Control Extended Register */
#define DA1470_I3C_I3C_DEVICE_CTRL                     (DA1470_I3C_BASE + DA1470_I3C_I3C_DEVICE_CTRL_OFFSET) /* Device Control Register */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC1             (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC1_OFFSET) /* Device Address Table of Device1 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC2             (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC2_OFFSET) /* Device Address Table of Device2 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC3             (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC3_OFFSET) /* Device Address Table of Device3 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC4             (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC4_OFFSET) /* Device Address Table of Device4 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC5             (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC5_OFFSET) /* Device Address Table of Device5 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC6             (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC6_OFFSET) /* Device Address Table of Device6 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC7             (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC7_OFFSET) /* Device Address Table of Device7 */
#define DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC8             (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_ADDR_TABLE_LOC8_OFFSET) /* Device Address Table of Device8 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC1            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC1_OFFSET) /* Device Characteristic Table Location-1 of Device1 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC2            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC2_OFFSET) /* Device Characteristic Table Location-2 of Device1 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC3            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC3_OFFSET) /* Device Characteristic Table Location-3 of Device1 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC4            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE1_LOC4_OFFSET) /* Device Characteristic Table Location-4 of Device1 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC1            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC1_OFFSET) /* Device Characteristic Table Location-1 of Device2 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC2            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC2_OFFSET) /* Device Characteristic Table Location-2 of Device2 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC3            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC3_OFFSET) /* Device Characteristic Table Location-3 of Device2 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC4            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE2_LOC4_OFFSET) /* Device Characteristic Table Location-4 of Device2 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC1            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC1_OFFSET) /* Device Characteristic Table Location-1 of Device3 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC2            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC2_OFFSET) /* Device Characteristic Table Location-2 of Device3 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC3            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC3_OFFSET) /* Device Characteristic Table Location-3 of Device3 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC4            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE3_LOC4_OFFSET) /* Device Characteristic Table Location-4 of Device3 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC1            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC1_OFFSET) /* Device Characteristic Table Location-1 of Device4 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC2            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC2_OFFSET) /* Device Characteristic Table Location-2 of Device4 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC3            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC3_OFFSET) /* Device Characteristic Table Location-3 of Device4 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC4            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE4_LOC4_OFFSET) /* Device Characteristic Table Location-4 of Device4 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC1            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC1_OFFSET) /* Device Characteristic Table Location-1 of Device5 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC2            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC2_OFFSET) /* Device Characteristic Table Location-2 of Device5 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC3            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC3_OFFSET) /* Device Characteristic Table Location-3 of Device5 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC4            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE5_LOC4_OFFSET) /* Device Characteristic Table Location-4 of Device5 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC1            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC1_OFFSET) /* Device Characteristic Table Location-1 of Device6 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC2            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC2_OFFSET) /* Device Characteristic Table Location-2 of Device6 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC3            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC3_OFFSET) /* Device Characteristic Table Location-3 of Device6 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC4            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE6_LOC4_OFFSET) /* Device Characteristic Table Location-4 of Device6 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC1            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC1_OFFSET) /* Device Characteristic Table Location-1 of Device7 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC2            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC2_OFFSET) /* Device Characteristic Table Location-2 of Device7 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC3            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC3_OFFSET) /* Device Characteristic Table Location-3 of Device7 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC4            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE7_LOC4_OFFSET) /* Device Characteristic Table Location-4 of Device7 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC1            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC1_OFFSET) /* Device Characteristic Table Location-1 of Device8 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC2            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC2_OFFSET) /* Device Characteristic Table Location-2 of Device8 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC3            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC3_OFFSET) /* Device Characteristic Table Location-3 of Device8 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC4            (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE8_LOC4_OFFSET) /* Device Characteristic Table Location-4 of Device8 */
#define DA1470_I3C_I3C_DEV_CHAR_TABLE_POINTER          (DA1470_I3C_BASE + DA1470_I3C_I3C_DEV_CHAR_TABLE_POINTER_OFFSET) /* Pointer for Device Characteristics Table */
#define DA1470_I3C_I3C_HW_CAPABILITY                   (DA1470_I3C_BASE + DA1470_I3C_I3C_HW_CAPABILITY_OFFSET) /* Hardware Capability register */
#define DA1470_I3C_I3C_IBI_QUEUE_CTRL                  (DA1470_I3C_BASE + DA1470_I3C_I3C_IBI_QUEUE_CTRL_OFFSET) /* IBI Queue Control Register */
#define DA1470_I3C_I3C_IBI_QUEUE_STATUS_DATA           (DA1470_I3C_BASE + DA1470_I3C_I3C_IBI_QUEUE_STATUS_DATA_OFFSET) /* In-Band Interrupt Queue Status and Data Register */
#define DA1470_I3C_I3C_IBI_SIR_REQ_REJECT              (DA1470_I3C_BASE + DA1470_I3C_I3C_IBI_SIR_REQ_REJECT_OFFSET) /* IBI SIR Request Rejection Control Register */
#define DA1470_I3C_I3C_INTR_FORCE                      (DA1470_I3C_BASE + DA1470_I3C_I3C_INTR_FORCE_OFFSET) /* Interrupt Force Enable Register */
#define DA1470_I3C_I3C_INTR_SIGNAL_EN                  (DA1470_I3C_BASE + DA1470_I3C_I3C_INTR_SIGNAL_EN_OFFSET) /* Interrupt Signal Enable Register */
#define DA1470_I3C_I3C_INTR_STATUS_EN                  (DA1470_I3C_BASE + DA1470_I3C_I3C_INTR_STATUS_EN_OFFSET) /* Interrupt Status Enable Register */
#define DA1470_I3C_I3C_INTR_STATUS                     (DA1470_I3C_BASE + DA1470_I3C_I3C_INTR_STATUS_OFFSET) /* Interrupt Status Register */
#define DA1470_I3C_I3C_PRESENT_STATE                   (DA1470_I3C_BASE + DA1470_I3C_I3C_PRESENT_STATE_OFFSET) /* Present State Register */
#define DA1470_I3C_I3C_QUEUE_SIZE_CAPABILITY           (DA1470_I3C_BASE + DA1470_I3C_I3C_QUEUE_SIZE_CAPABILITY_OFFSET) /* DWC_mipi_i3c Queue Size Capability Register */
#define DA1470_I3C_I3C_QUEUE_STATUS_LEVEL              (DA1470_I3C_BASE + DA1470_I3C_I3C_QUEUE_STATUS_LEVEL_OFFSET) /* Queue Status Level Register */
#define DA1470_I3C_I3C_QUEUE_THLD_CTRL                 (DA1470_I3C_BASE + DA1470_I3C_I3C_QUEUE_THLD_CTRL_OFFSET) /* Queue Threshold Control Register */
#define DA1470_I3C_I3C_RESET_CTRL                      (DA1470_I3C_BASE + DA1470_I3C_I3C_RESET_CTRL_OFFSET) /* Reset Control Register */
#define DA1470_I3C_I3C_RESPONSE_QUEUE_PORT             (DA1470_I3C_BASE + DA1470_I3C_I3C_RESPONSE_QUEUE_PORT_OFFSET) /* RESPONSE_QUEUE_PORT */
#define DA1470_I3C_I3C_RX_TX_DATA_PORT                 (DA1470_I3C_BASE + DA1470_I3C_I3C_RX_TX_DATA_PORT_OFFSET) /* Receive and Transmit Data Port Register */
#define DA1470_I3C_I3C_SCL_EXT_LCNT_TIMING             (DA1470_I3C_BASE + DA1470_I3C_I3C_SCL_EXT_LCNT_TIMING_OFFSET) /* SCL Extended Low Count Timing Register */
#define DA1470_I3C_I3C_SCL_EXT_TERMN_LCNT_TIME         (DA1470_I3C_BASE + DA1470_I3C_I3C_SCL_EXT_TERMN_LCNT_TIME_OFFSET) /* SCL Termination Bit Low count Timing Register */
#define DA1470_I3C_I3C_SCL_I2C_FMP_TIMING              (DA1470_I3C_BASE + DA1470_I3C_I3C_SCL_I2C_FMP_TIMING_OFFSET) /* SCL I2C Fast Mode Plus Timing Register */
#define DA1470_I3C_I3C_SCL_I2C_FM_TIMING               (DA1470_I3C_BASE + DA1470_I3C_I3C_SCL_I2C_FM_TIMING_OFFSET) /* SCL I2C Fast Mode Timing Register */
#define DA1470_I3C_I3C_SCL_I3C_OD_TIMING               (DA1470_I3C_BASE + DA1470_I3C_I3C_SCL_I3C_OD_TIMING_OFFSET) /* SCL I3C Open Drain Timing Register */
#define DA1470_I3C_I3C_SCL_I3C_PP_TIMING               (DA1470_I3C_BASE + DA1470_I3C_I3C_SCL_I3C_PP_TIMING_OFFSET) /* SCL I3C Push Pull Timing Register */
#define DA1470_I3C_I3C_SDA_HOLD_DLY_TIMING             (DA1470_I3C_BASE + DA1470_I3C_I3C_SDA_HOLD_DLY_TIMING_OFFSET) /* SDA Hold Delay Timing Register */
#define DA1470_I3C_I3C_SLV_EVENT_STATUS                (DA1470_I3C_BASE + DA1470_I3C_I3C_SLV_EVENT_STATUS_OFFSET) /* Slave Event Status Register */
#define DA1470_I3C_I3C_VENDOR_SPECIFIC_PTR             (DA1470_I3C_BASE + DA1470_I3C_I3C_VENDOR_SPECIFIC_PTR_OFFSET) /* Pointer for Vendor specific Registers */
#define DA1470_I3C_I3C_VER_ID                          (DA1470_I3C_BASE + DA1470_I3C_I3C_VER_ID_OFFSET) /* DWC_mipi_i3c Version ID Register */
#define DA1470_I3C_I3C_VER_TYPE                        (DA1470_I3C_BASE + DA1470_I3C_I3C_VER_TYPE_OFFSET) /* DWC_mipi_i3c Version Type Register */

/* Register bit definitions *************************************************/


/* I3C_BUS_FREE_AVAIL_TIMING Register */

#define I3C_BUS_FREE_TIME_MASK                         (0xFFFF << 0) /* This register field is used only in Master mode of operation  I3C Bus Free Count */
#define I3C_BUS_FREE_TIME_POS                          (0) /* This register field is used only in Master mode of operation  I3C Bus Free Count */

/* I3C_COMMAND_QUEUE_PORT Register */

#define I3C_COMMAND_MASK                               (0xFFFFFFFF << 0) /* 32 bit command */
#define I3C_COMMAND_POS                                (0) /* 32 bit command */

/* I3C_DATA_BUFFER_STAT_LEVEL Register */

#define I3C_RX_BUF_BLR_MASK                            (0xFF << 16) /* Receive Buffer Level Value.  Contains the number of valid data entries in the re */
#define I3C_RX_BUF_BLR_POS                             (16) /* Receive Buffer Level Value.  Contains the number of valid data entries in the re */
#define I3C_TX_BUF_EMPTY_LOC_MASK                      (0xFF << 0) /* Transmit Buffer Empty Level Value.  Contains the number of empty locations in th */
#define I3C_TX_BUF_EMPTY_LOC_POS                       (0) /* Transmit Buffer Empty Level Value.  Contains the number of empty locations in th */

/* I3C_DATA_BUFFER_THLD_CTRL Register */

#define I3C_RX_START_THLD_MASK                         (0x7 << 24) /* Receive Start Threshold Value.  In master mode of operation when the controller  */
#define I3C_RX_START_THLD_POS                          (24) /* Receive Start Threshold Value.  In master mode of operation when the controller  */
#define I3C_TX_START_THLD_MASK                         (0x7 << 16) /* Transfer Start Threshold Value.  In master mode of operation when the controller */
#define I3C_TX_START_THLD_POS                          (16) /* Transfer Start Threshold Value.  In master mode of operation when the controller */
#define I3C_RX_BUF_THLD_MASK                           (0x7 << 8) /* Receive Buffer Threshold Value.  This field controls the number of entries (or a */
#define I3C_RX_BUF_THLD_POS                            (8) /* Receive Buffer Threshold Value.  This field controls the number of entries (or a */
#define I3C_TX_EMPTY_BUF_THLD_MASK                     (0x7 << 0) /* Transmit Buffer Threshold Value.  This field controls the number of empty locati */
#define I3C_TX_EMPTY_BUF_THLD_POS                      (0) /* Transmit Buffer Threshold Value.  This field controls the number of empty locati */

/* I3C_DEVICE_ADDR Register */

#define I3C_DYNAMIC_ADDR_VALID                         (1U << 31) /* Dynamic Address Valid  This bit is used to control whether the DYNAMIC_ADDR is v */
#define I3C_DYNAMIC_ADDR_MASK                          (0x7F << 16) /* Device Dynamic Address.  This field is used to program the Device Dynamic Addres */
#define I3C_DYNAMIC_ADDR_POS                           (16) /* Device Dynamic Address.  This field is used to program the Device Dynamic Addres */

/* I3C_DEVICE_ADDR_TABLE_PTR Register */

#define I3C_DEV_ADDR_TABLE_DEPTH_MASK                  (0xFFFF << 16) /* Depth of Device Address Table */
#define I3C_DEV_ADDR_TABLE_DEPTH_POS                   (16) /* Depth of Device Address Table */
#define I3C_P_DEV_ADDR_TABLE_START_ADDR_MASK           (0xFFFF << 0) /* Start Address of Device Address Table. */
#define I3C_P_DEV_ADDR_TABLE_START_ADDR_POS            (0) /* Start Address of Device Address Table. */

/* I3C_DEVICE_CTRL_EXTENDED Register */

#define I3C_DEV_OPERATION_MODE_MASK                    (0x3 << 0) /* This bit is used to select the Device Operation Mode before the controller is en */
#define I3C_DEV_OPERATION_MODE_POS                     (0) /* This bit is used to select the Device Operation Mode before the controller is en */

/* I3C_DEVICE_CTRL Register */

#define I3C_ENABLE                                     (1U << 31) /* Controls whether or not DWC_mipi_i3c is enabled.  1: Enables the DWC_mipi_i3c co */
#define I3C_RESUME                                     (1U << 30) /* DWC_mipi_i3c Resume.  This bit is used to resume the Controller after it goes to */
#define I3C_ABORT                                      (1U << 29) /* DWC_mipi_i3c Abort.  This bit is used in master mode of operation.  This bit all */
#define I3C_DMA_ENABLE_I3C                             (1U << 28) /* DMA Handshake Interface Enable.  This bit is used to enable or disable the DMA H */
#define I3C_HOT_JOIN_CTRL                              (1U << 8) /* Hot-Join Ack/Nack Control  This bit is used in master mode of operation.  This b */
#define I3C_I2C_SLAVE_PRESENT                          (1U << 7) /* I2C Slave Present  This bit is used in master mode of operation.  This Bit indic */
#define I3C_IBA_INCLUDE                                (1U << 0) /* I3C Broadcast Address include.  This bit is used in master mode of operation.  T */

/* I3C_DEV_ADDR_TABLE_LOC1 Register */

#define I3C_LEGACY_I2C_DEVICE                          (1U << 31) /* Legacy I2C device or not.  This bit should be set to 1 if the device is a legacy */
#define I3C_DEV_NACK_RETRY_CNT_MASK                    (0x3 << 29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_NACK_RETRY_CNT_POS                     (29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_DYNAMIC_ADDR_MASK                      (0xFF << 16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_DYNAMIC_ADDR_POS                       (16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_STATIC_ADDR_MASK                       (0x7F << 0) /* Device Static Address. */
#define I3C_DEV_STATIC_ADDR_POS                        (0) /* Device Static Address. */

/* I3C_DEV_ADDR_TABLE_LOC2 Register */

#define I3C_LEGACY_I2C_DEVICE                          (1U << 31) /* Legacy I2C device or not.  This bit should be set to 1 if the device is a legacy */
#define I3C_DEV_NACK_RETRY_CNT_MASK                    (0x3 << 29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_NACK_RETRY_CNT_POS                     (29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_DYNAMIC_ADDR_MASK                      (0xFF << 16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_DYNAMIC_ADDR_POS                       (16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_STATIC_ADDR_MASK                       (0x7F << 0) /* Device Static Address. */
#define I3C_DEV_STATIC_ADDR_POS                        (0) /* Device Static Address. */

/* I3C_DEV_ADDR_TABLE_LOC3 Register */

#define I3C_LEGACY_I2C_DEVICE                          (1U << 31) /* Legacy I2C device or not.  This bit should be set to 1 if the device is a legacy */
#define I3C_DEV_NACK_RETRY_CNT_MASK                    (0x3 << 29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_NACK_RETRY_CNT_POS                     (29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_DYNAMIC_ADDR_MASK                      (0xFF << 16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_DYNAMIC_ADDR_POS                       (16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_STATIC_ADDR_MASK                       (0x7F << 0) /* Device Static Address. */
#define I3C_DEV_STATIC_ADDR_POS                        (0) /* Device Static Address. */

/* I3C_DEV_ADDR_TABLE_LOC4 Register */

#define I3C_LEGACY_I2C_DEVICE                          (1U << 31) /* Legacy I2C device or not.  This bit should be set to 1 if the device is a legacy */
#define I3C_DEV_NACK_RETRY_CNT_MASK                    (0x3 << 29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_NACK_RETRY_CNT_POS                     (29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_DYNAMIC_ADDR_MASK                      (0xFF << 16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_DYNAMIC_ADDR_POS                       (16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_STATIC_ADDR_MASK                       (0x7F << 0) /* Device Static Address. */
#define I3C_DEV_STATIC_ADDR_POS                        (0) /* Device Static Address. */

/* I3C_DEV_ADDR_TABLE_LOC5 Register */

#define I3C_LEGACY_I2C_DEVICE                          (1U << 31) /* Legacy I2C device or not.  This bit should be set to 1 if the device is a legacy */
#define I3C_DEV_NACK_RETRY_CNT_MASK                    (0x3 << 29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_NACK_RETRY_CNT_POS                     (29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_DYNAMIC_ADDR_MASK                      (0xFF << 16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_DYNAMIC_ADDR_POS                       (16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_STATIC_ADDR_MASK                       (0x7F << 0) /* Device Static Address. */
#define I3C_DEV_STATIC_ADDR_POS                        (0) /* Device Static Address. */

/* I3C_DEV_ADDR_TABLE_LOC6 Register */

#define I3C_LEGACY_I2C_DEVICE                          (1U << 31) /* Legacy I2C device or not.  This bit should be set to 1 if the device is a legacy */
#define I3C_DEV_NACK_RETRY_CNT_MASK                    (0x3 << 29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_NACK_RETRY_CNT_POS                     (29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_DYNAMIC_ADDR_MASK                      (0xFF << 16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_DYNAMIC_ADDR_POS                       (16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_STATIC_ADDR_MASK                       (0x7F << 0) /* Device Static Address. */
#define I3C_DEV_STATIC_ADDR_POS                        (0) /* Device Static Address. */

/* I3C_DEV_ADDR_TABLE_LOC7 Register */

#define I3C_LEGACY_I2C_DEVICE                          (1U << 31) /* Legacy I2C device or not.  This bit should be set to 1 if the device is a legacy */
#define I3C_DEV_NACK_RETRY_CNT_MASK                    (0x3 << 29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_NACK_RETRY_CNT_POS                     (29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_DYNAMIC_ADDR_MASK                      (0xFF << 16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_DYNAMIC_ADDR_POS                       (16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_STATIC_ADDR_MASK                       (0x7F << 0) /* Device Static Address. */
#define I3C_DEV_STATIC_ADDR_POS                        (0) /* Device Static Address. */

/* I3C_DEV_ADDR_TABLE_LOC8 Register */

#define I3C_LEGACY_I2C_DEVICE                          (1U << 31) /* Legacy I2C device or not.  This bit should be set to 1 if the device is a legacy */
#define I3C_DEV_NACK_RETRY_CNT_MASK                    (0x3 << 29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_NACK_RETRY_CNT_POS                     (29) /* This field is used to set the Device NACK Retry count for the particular device. */
#define I3C_DEV_DYNAMIC_ADDR_MASK                      (0xFF << 16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_DYNAMIC_ADDR_POS                       (16) /* Device Dynamic Address with parity. The MSB, bit[23], should be programmed with  */
#define I3C_DEV_STATIC_ADDR_MASK                       (0x7F << 0) /* Device Static Address. */
#define I3C_DEV_STATIC_ADDR_POS                        (0) /* Device Static Address. */

/* I3C_DEV_CHAR_TABLE1_LOC1 Register */

#define I3C_LSB_PROVISIONAL_ID_MASK                    (0xFFFFFFFF << 0) /* The LSB 32-bit value of Provisional-ID */
#define I3C_LSB_PROVISIONAL_ID_POS                     (0) /* The LSB 32-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE1_LOC2 Register */

#define I3C_MSB_PROVISIONAL_ID_MASK                    (0xFFFF << 0) /* The MSB 16-bit value of Provisional-ID */
#define I3C_MSB_PROVISIONAL_ID_POS                     (0) /* The MSB 16-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE1_LOC3 Register */

#define I3C_BCR_MASK                                   (0xFF << 8) /* Bus Characteristic Value */
#define I3C_BCR_POS                                    (8) /* Bus Characteristic Value */
#define I3C_DCR_MASK                                   (0xFF << 0) /* Device Characteristic Value */
#define I3C_DCR_POS                                    (0) /* Device Characteristic Value */

/* I3C_DEV_CHAR_TABLE1_LOC4 Register */

#define I3C_DEV_DYNAMIC_ADDR_LOC4_MASK                 (0xFF << 0) /* Device Dynamic Address assigned. */
#define I3C_DEV_DYNAMIC_ADDR_LOC4_POS                  (0) /* Device Dynamic Address assigned. */

/* I3C_DEV_CHAR_TABLE2_LOC1 Register */

#define I3C_LSB_PROVISIONAL_ID_MASK                    (0xFFFFFFFF << 0) /* The LSB 32-bit value of Provisional-ID */
#define I3C_LSB_PROVISIONAL_ID_POS                     (0) /* The LSB 32-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE2_LOC2 Register */

#define I3C_MSB_PROVISIONAL_ID_MASK                    (0xFFFF << 0) /* The MSB 16-bit value of Provisional-ID */
#define I3C_MSB_PROVISIONAL_ID_POS                     (0) /* The MSB 16-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE2_LOC3 Register */

#define I3C_BCR_MASK                                   (0xFF << 8) /* Bus Characteristic Value */
#define I3C_BCR_POS                                    (8) /* Bus Characteristic Value */
#define I3C_DCR_MASK                                   (0xFF << 0) /* Device Characteristic Value */
#define I3C_DCR_POS                                    (0) /* Device Characteristic Value */

/* I3C_DEV_CHAR_TABLE2_LOC4 Register */

#define I3C_DEV_DYNAMIC_ADDR_LOC4_MASK                 (0xFF << 0) /* Device Dynamic Address assigned. */
#define I3C_DEV_DYNAMIC_ADDR_LOC4_POS                  (0) /* Device Dynamic Address assigned. */

/* I3C_DEV_CHAR_TABLE3_LOC1 Register */

#define I3C_LSB_PROVISIONAL_ID_MASK                    (0xFFFFFFFF << 0) /* The LSB 32-bit value of Provisional-ID */
#define I3C_LSB_PROVISIONAL_ID_POS                     (0) /* The LSB 32-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE3_LOC2 Register */

#define I3C_MSB_PROVISIONAL_ID_MASK                    (0xFFFF << 0) /* The MSB 16-bit value of Provisional-ID */
#define I3C_MSB_PROVISIONAL_ID_POS                     (0) /* The MSB 16-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE3_LOC3 Register */

#define I3C_BCR_MASK                                   (0xFF << 8) /* Bus Characteristic Value */
#define I3C_BCR_POS                                    (8) /* Bus Characteristic Value */
#define I3C_DCR_MASK                                   (0xFF << 0) /* Device Characteristic Value */
#define I3C_DCR_POS                                    (0) /* Device Characteristic Value */

/* I3C_DEV_CHAR_TABLE3_LOC4 Register */

#define I3C_DEV_DYNAMIC_ADDR_LOC4_MASK                 (0xFF << 0) /* Device Dynamic Address assigned. */
#define I3C_DEV_DYNAMIC_ADDR_LOC4_POS                  (0) /* Device Dynamic Address assigned. */

/* I3C_DEV_CHAR_TABLE4_LOC1 Register */

#define I3C_LSB_PROVISIONAL_ID_MASK                    (0xFFFFFFFF << 0) /* The LSB 32-bit value of Provisional-ID */
#define I3C_LSB_PROVISIONAL_ID_POS                     (0) /* The LSB 32-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE4_LOC2 Register */

#define I3C_MSB_PROVISIONAL_ID_MASK                    (0xFFFF << 0) /* The MSB 16-bit value of Provisional-ID */
#define I3C_MSB_PROVISIONAL_ID_POS                     (0) /* The MSB 16-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE4_LOC3 Register */

#define I3C_BCR_MASK                                   (0xFF << 8) /* Bus Characteristic Value */
#define I3C_BCR_POS                                    (8) /* Bus Characteristic Value */
#define I3C_DCR_MASK                                   (0xFF << 0) /* Device Characteristic Value */
#define I3C_DCR_POS                                    (0) /* Device Characteristic Value */

/* I3C_DEV_CHAR_TABLE4_LOC4 Register */

#define I3C_DEV_DYNAMIC_ADDR_LOC4_MASK                 (0xFF << 0) /* Device Dynamic Address assigned. */
#define I3C_DEV_DYNAMIC_ADDR_LOC4_POS                  (0) /* Device Dynamic Address assigned. */

/* I3C_DEV_CHAR_TABLE5_LOC1 Register */

#define I3C_LSB_PROVISIONAL_ID_MASK                    (0xFFFFFFFF << 0) /* The LSB 32-bit value of Provisional-ID */
#define I3C_LSB_PROVISIONAL_ID_POS                     (0) /* The LSB 32-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE5_LOC2 Register */

#define I3C_MSB_PROVISIONAL_ID_MASK                    (0xFFFF << 0) /* The MSB 16-bit value of Provisional-ID */
#define I3C_MSB_PROVISIONAL_ID_POS                     (0) /* The MSB 16-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE5_LOC3 Register */

#define I3C_BCR_MASK                                   (0xFF << 8) /* Bus Characteristic Value */
#define I3C_BCR_POS                                    (8) /* Bus Characteristic Value */
#define I3C_DCR_MASK                                   (0xFF << 0) /* Device Characteristic Value */
#define I3C_DCR_POS                                    (0) /* Device Characteristic Value */

/* I3C_DEV_CHAR_TABLE5_LOC4 Register */

#define I3C_DEV_DYNAMIC_ADDR_LOC4_MASK                 (0xFF << 0) /* Device Dynamic Address assigned. */
#define I3C_DEV_DYNAMIC_ADDR_LOC4_POS                  (0) /* Device Dynamic Address assigned. */

/* I3C_DEV_CHAR_TABLE6_LOC1 Register */

#define I3C_LSB_PROVISIONAL_ID_MASK                    (0xFFFFFFFF << 0) /* The LSB 32-bit value of Provisional-ID */
#define I3C_LSB_PROVISIONAL_ID_POS                     (0) /* The LSB 32-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE6_LOC2 Register */

#define I3C_MSB_PROVISIONAL_ID_MASK                    (0xFFFF << 0) /* The MSB 16-bit value of Provisional-ID */
#define I3C_MSB_PROVISIONAL_ID_POS                     (0) /* The MSB 16-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE6_LOC3 Register */

#define I3C_BCR_MASK                                   (0xFF << 8) /* Bus Characteristic Value */
#define I3C_BCR_POS                                    (8) /* Bus Characteristic Value */
#define I3C_DCR_MASK                                   (0xFF << 0) /* Device Characteristic Value */
#define I3C_DCR_POS                                    (0) /* Device Characteristic Value */

/* I3C_DEV_CHAR_TABLE6_LOC4 Register */

#define I3C_DEV_DYNAMIC_ADDR_LOC4_MASK                 (0xFF << 0) /* Device Dynamic Address assigned. */
#define I3C_DEV_DYNAMIC_ADDR_LOC4_POS                  (0) /* Device Dynamic Address assigned. */

/* I3C_DEV_CHAR_TABLE7_LOC1 Register */

#define I3C_LSB_PROVISIONAL_ID_MASK                    (0xFFFFFFFF << 0) /* The LSB 32-bit value of Provisional-ID */
#define I3C_LSB_PROVISIONAL_ID_POS                     (0) /* The LSB 32-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE7_LOC2 Register */

#define I3C_MSB_PROVISIONAL_ID_MASK                    (0xFFFF << 0) /* The MSB 16-bit value of Provisional-ID */
#define I3C_MSB_PROVISIONAL_ID_POS                     (0) /* The MSB 16-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE7_LOC3 Register */

#define I3C_BCR_MASK                                   (0xFF << 8) /* Bus Characteristic Value */
#define I3C_BCR_POS                                    (8) /* Bus Characteristic Value */
#define I3C_DCR_MASK                                   (0xFF << 0) /* Device Characteristic Value */
#define I3C_DCR_POS                                    (0) /* Device Characteristic Value */

/* I3C_DEV_CHAR_TABLE7_LOC4 Register */

#define I3C_DEV_DYNAMIC_ADDR_LOC4_MASK                 (0xFF << 0) /* Device Dynamic Address assigned. */
#define I3C_DEV_DYNAMIC_ADDR_LOC4_POS                  (0) /* Device Dynamic Address assigned. */

/* I3C_DEV_CHAR_TABLE8_LOC1 Register */

#define I3C_LSB_PROVISIONAL_ID_MASK                    (0xFFFFFFFF << 0) /* The LSB 32-bit value of Provisional-ID */
#define I3C_LSB_PROVISIONAL_ID_POS                     (0) /* The LSB 32-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE8_LOC2 Register */

#define I3C_MSB_PROVISIONAL_ID_MASK                    (0xFFFF << 0) /* The MSB 16-bit value of Provisional-ID */
#define I3C_MSB_PROVISIONAL_ID_POS                     (0) /* The MSB 16-bit value of Provisional-ID */

/* I3C_DEV_CHAR_TABLE8_LOC3 Register */

#define I3C_BCR_MASK                                   (0xFF << 8) /* Bus Characteristic Value */
#define I3C_BCR_POS                                    (8) /* Bus Characteristic Value */
#define I3C_DCR_MASK                                   (0xFF << 0) /* Device Characteristic Value */
#define I3C_DCR_POS                                    (0) /* Device Characteristic Value */

/* I3C_DEV_CHAR_TABLE8_LOC4 Register */

#define I3C_DEV_DYNAMIC_ADDR_LOC4_MASK                 (0xFF << 0) /* Device Dynamic Address assigned. */
#define I3C_DEV_DYNAMIC_ADDR_LOC4_POS                  (0) /* Device Dynamic Address assigned. */

/* I3C_DEV_CHAR_TABLE_POINTER Register */

#define I3C_PRESENT_DEV_CHAR_TABLE_INDX_MASK           (0x7 << 19) /* Current index of Device Characteristics Table.  This field returns the current l */
#define I3C_PRESENT_DEV_CHAR_TABLE_INDX_POS            (19) /* Current index of Device Characteristics Table.  This field returns the current l */
#define I3C_DEV_CHAR_TABLE_DEPTH_MASK                  (0x7F << 12) /* Depth of Device Characteristics Table */
#define I3C_DEV_CHAR_TABLE_DEPTH_POS                   (12) /* Depth of Device Characteristics Table */
#define I3C_P_DEV_CHAR_TABLE_START_ADDR_MASK           (0xFFF << 0) /* Start Address of Device Characteristics Table. */
#define I3C_P_DEV_CHAR_TABLE_START_ADDR_POS            (0) /* Start Address of Device Characteristics Table. */

/* I3C_HW_CAPABILITY Register */

#define I3C_SLV_IBI_CAP                                (1U << 19) /* Reflects the IC_SLV_IBI Configurable Parameter.  Specifies slave's capability to */
#define I3C_SLV_HJ_CAP                                 (1U << 18) /* Reflects the IC_SLV_HJ Configurable Parameter.  Specifies slave's capability to  */
#define I3C_DMA_EN                                     (1U << 17) /* Reflects the IC_HAS_DMA Configurable Parameter.  Specifies whether controller is */
#define I3C_HDR_TX_CLOCK_PERIOD_MASK                   (0x3F << 11) /* Reflects the IC_HDR_TX_CLK_PERIOD Configurable Parameter. */
#define I3C_HDR_TX_CLOCK_PERIOD_POS                    (11) /* Reflects the IC_HDR_TX_CLK_PERIOD Configurable Parameter. */
#define I3C_CLOCK_PERIOD_MASK                          (0x3F << 5) /* Reflects the IC_CLK_PERIOD Configurable Parameter */
#define I3C_CLOCK_PERIOD_POS                           (5) /* Reflects the IC_CLK_PERIOD Configurable Parameter */
#define I3C_HDR_TS_EN                                  (1U << 4) /* Reflects the IC_SPEED_HDR_TS Configurable Parameter.  Specifies the Controllers  */
#define I3C_HDR_DDR_EN                                 (1U << 3) /* Reflects the IC_SPEED_HDR_DDR Configurable Parameter.  Specifies the Controllers */
#define I3C_DEVICE_ROLE_CONFIG_MASK                    (0x7 << 0) /* Reflects the IC_DEVICE_ROLE Configurable Parameter.  Specifies the configured ro */
#define I3C_DEVICE_ROLE_CONFIG_POS                     (0) /* Reflects the IC_DEVICE_ROLE Configurable Parameter.  Specifies the configured ro */

/* I3C_IBI_QUEUE_CTRL Register */

#define I3C_NOTIFY_SIR_REJECTED                        (1U << 3) /* Notify Rejected Slave Interrupt Request Control.  This bit is used to suppress r */
#define I3C_NOTIFY_HJ_REJECTED                         (1U << 0) /* Notify Rejected Hot-Join Control.  This bit is used to suppress reporting to the */

/* I3C_IBI_QUEUE_STATUS_DATA Register */

#define I3C_IBI_STS_MASK                               (0xF << 28) /* IBI Received Status.  Defines the master response for IBI received.  4'b0xxx: Re */
#define I3C_IBI_STS_POS                                (28) /* IBI Received Status.  Defines the master response for IBI received.  4'b0xxx: Re */
#define I3C_IBI_ID_MASK                                (0xFF << 8) /* IBI Identifier.  The byte received after START which includes the address and th */
#define I3C_IBI_ID_POS                                 (8) /* IBI Identifier.  The byte received after START which includes the address and th */
#define I3C_DATA_LENGTH_MASK                           (0xFF << 0) /* In-Band Interrupt data length.  This field represents the length of data receive */
#define I3C_DATA_LENGTH_POS                            (0) /* In-Band Interrupt data length.  This field represents the length of data receive */

/* I3C_IBI_SIR_REQ_REJECT Register */

#define I3C_SIR_REQ_REJECT_MASK                        (0xFFFFFFFF << 0) /* In-band Slave Interrupt Request Reject.  The application of the DWC_mipi_i3c can */
#define I3C_SIR_REQ_REJECT_POS                         (0) /* In-band Slave Interrupt Request Reject.  The application of the DWC_mipi_i3c can */

/* I3C_INTR_FORCE Register */

#define I3C_TRANSFER_ERR_FORCE_EN                      (1U << 9) /* Transfer Error Force Enable */
#define I3C_TRANSFER_ABORT_FORCE_EN                    (1U << 5) /* Transfer Abort Force Enable.  This field is used only in master mode of operatio */
#define I3C_RESP_READY_FORCE_EN                        (1U << 4) /* Response Queue Ready Force Enable */
#define I3C_CMD_QUEUE_READY_FORCE_EN                   (1U << 3) /* Command Queue Ready Force Enable */
#define I3C_IBI_THLD_FORCE_EN                          (1U << 2) /* IBI Buffer Threshold Force Enable.  This field is used only in master mode of op */
#define I3C_RX_THLD_FORCE_EN                           (1U << 1) /* Receive Buffer Threshold Force Enable */
#define I3C_TX_THLD_FORCE_EN                           (1U << 0) /* Transmit Buffer Threshold Force Enable. */

/* I3C_INTR_SIGNAL_EN Register */

#define I3C_TRANSFER_ERR_SIGNAL_EN                     (1U << 9) /* Transfer Error Signal Enable */
#define I3C_TRANSFER_ABORT_SIGNAL_EN                   (1U << 5) /* Transfer Abort Signal Enable.  This field is used only in master mode of operati */
#define I3C_RESP_READY_SIGNAL_EN                       (1U << 4) /* Response Queue Ready Signal Enable */
#define I3C_CMD_QUEUE_READY_SIGNAL_EN                  (1U << 3) /* Command Queue Ready Signal Enable */
#define I3C_IBI_THLD_SIGNAL_EN                         (1U << 2) /* IBI Buffer Threshold Signal Enable.  This field is used only in master mode of o */
#define I3C_RX_THLD_SIGNAL_EN                          (1U << 1) /* Receive Buffer Threshold Signal Enable */
#define I3C_TX_THLD_SIGNAL_EN                          (1U << 0) /* Transmit Buffer Threshold Signal Enable.  *Note: For the deassertion of the inte */

/* I3C_INTR_STATUS_EN Register */

#define I3C_TRANSFER_ERR_STS_EN                        (1U << 9) /* Transfer Error Status Enable */
#define I3C_TRANSFER_ABORT_STS_EN                      (1U << 5) /* Transfer Abort Status Enable.  This field is used only in master mode of operati */
#define I3C_RESP_READY_STS_EN                          (1U << 4) /* Response Queue Ready Status Enable */
#define I3C_CMD_QUEUE_READY_STS_EN                     (1U << 3) /* Command Queue Ready Status Enable */
#define I3C_IBI_THLD_STS_EN                            (1U << 2) /* IBI Buffer Threshold Status Enable.  This field is used only in master mode of o */
#define I3C_RX_THLD_STS_EN                             (1U << 1) /* Receive Buffer Threshold Status Enable */
#define I3C_TX_THLD_STS_EN                             (1U << 0) /* Transmit Buffer Threshold Status Enable */

/* I3C_INTR_STATUS Register */

#define I3C_TRANSFER_ERR_STS                           (1U << 9) /* Transfer Error Status.  This interrupt is generated if any error occurs during t */
#define I3C_TRANSFER_ABORT_STS                         (1U << 5) /* Transfer Abort Status.  This field is used only in master mode of operation.  Th */
#define I3C_RESP_READY_STS                             (1U << 4) /* Response Queue Ready Status.  This interrupt is generated when number of entries */
#define I3C_CMD_QUEUE_READY_STS                        (1U << 3) /* Command Queue Ready.  This interrupt is generated when number of empty locations */
#define I3C_IBI_THLD_STS                               (1U << 2) /* IBI Buffer Threshold Status.  This field is only used in master mode of operatio */
#define I3C_RX_THLD_STS                                (1U << 1) /* Receive Buffer Threshold Status.  This interrupt is generated when number of ent */
#define I3C_TX_THLD_STS                                (1U << 0) /* Transmit Buffer Threshold Status.  This interrupt is generated when number of em */

/* I3C_PRESENT_STATE Register */

#define I3C_MASTER_IDLE                                (1U << 28) /* This field reflects whether the Master Controller is in Idle state or not. This  */
#define I3C_CMD_TID_MASK                               (0xF << 24) /* This field reflects the Transaction-ID of the current executing command. */
#define I3C_CMD_TID_POS                                (24) /* This field reflects the Transaction-ID of the current executing command. */
#define I3C_CM_TFR_ST_STS_MASK                         (0x3F << 16) /* Current Master Transfer State Status.  Indicates the state of current transfer c */
#define I3C_CM_TFR_ST_STS_POS                          (16) /* Current Master Transfer State Status.  Indicates the state of current transfer c */
#define I3C_CM_TFR_STS_MASK                            (0x3F << 8) /* Transfer Type Status.  Indicates the type of transfer currently executing by the */
#define I3C_CM_TFR_STS_POS                             (8) /* Transfer Type Status.  Indicates the type of transfer currently executing by the */
#define I3C_CURRENT_MASTER                             (1U << 2) /* This Bit is used to check whether the Master is Current Master or not. The Curre */
#define I3C_SDA_LINE_SIGNAL_LEVEL                      (1U << 1) /* This bit is used to check the SDA line level to recover from errors and for debu */
#define I3C_SCL_LINE_SIGNAL_LEVEL                      (1U << 0) /* This bit is used to check the SCL line level to recover from errors and for debu */

/* I3C_QUEUE_SIZE_CAPABILITY Register */

#define I3C_IBI_BUF_SIZE_MASK                          (0xF << 16) /* IBI Queue Size  This field reflects the configured IBI Queue size (in DWORDS) in */
#define I3C_IBI_BUF_SIZE_POS                           (16) /* IBI Queue Size  This field reflects the configured IBI Queue size (in DWORDS) in */
#define I3C_RESP_BUF_SIZE_MASK                         (0xF << 12) /* Response Queue Size  This field reflects the configured Response Queue size (in  */
#define I3C_RESP_BUF_SIZE_POS                          (12) /* Response Queue Size  This field reflects the configured Response Queue size (in  */
#define I3C_CMD_BUF_SIZE_MASK                          (0xF << 8) /* Command Queue Size  This field reflects the configured Command Queue size (in DW */
#define I3C_CMD_BUF_SIZE_POS                           (8) /* Command Queue Size  This field reflects the configured Command Queue size (in DW */
#define I3C_RX_BUF_SIZE_MASK                           (0xF << 4) /* Receive Data Buffer Size  This field reflects the configured Receive Buffer size */
#define I3C_RX_BUF_SIZE_POS                            (4) /* Receive Data Buffer Size  This field reflects the configured Receive Buffer size */
#define I3C_TX_BUF_SIZE_MASK                           (0xF << 0) /* Transmit Data Buffer Size  This field reflects the configured Transmit Buffer si */
#define I3C_TX_BUF_SIZE_POS                            (0) /* Transmit Data Buffer Size  This field reflects the configured Transmit Buffer si */

/* I3C_QUEUE_STATUS_LEVEL Register */

#define I3C_IBI_STS_CNT_MASK                           (0x1F << 24) /* IBI Buffer Status Count.  Contains the number of IBI status entries in the IBI B */
#define I3C_IBI_STS_CNT_POS                            (24) /* IBI Buffer Status Count.  Contains the number of IBI status entries in the IBI B */
#define I3C_IBI_BUF_BLR_MASK                           (0xFF << 16) /* IBI Buffer Level Value.  Contains the number of valid entries in the IBI Buffer. */
#define I3C_IBI_BUF_BLR_POS                            (16) /* IBI Buffer Level Value.  Contains the number of valid entries in the IBI Buffer. */
#define I3C_RESP_BUF_BLR_MASK                          (0xFF << 8) /* Response Buffer Level Value.  Contains the number of valid data entries in the r */
#define I3C_RESP_BUF_BLR_POS                           (8) /* Response Buffer Level Value.  Contains the number of valid data entries in the r */
#define I3C_CMD_QUEUE_EMPTY_LOC_MASK                   (0xFF << 0) /* Command Queue Empty Locations.  Contains the number of empty locations in the co */
#define I3C_CMD_QUEUE_EMPTY_LOC_POS                    (0) /* Command Queue Empty Locations.  Contains the number of empty locations in the co */

/* I3C_QUEUE_THLD_CTRL Register */

#define I3C_IBI_STATUS_THLD_MASK                       (0xFF << 24) /* In-Band Interrupt Status Threshold Value.  Every In Band Interrupt received (wit */
#define I3C_IBI_STATUS_THLD_POS                        (24) /* In-Band Interrupt Status Threshold Value.  Every In Band Interrupt received (wit */
#define I3C_RESP_BUF_THLD_MASK                         (0xFF << 8) /* Response Buffer Threshold Value.  Controls the number of entries (or greater) in */
#define I3C_RESP_BUF_THLD_POS                          (8) /* Response Buffer Threshold Value.  Controls the number of entries (or greater) in */
#define I3C_CMD_EMPTY_BUF_THLD_MASK                    (0xFF << 0) /* Command Buffer Empty Threshold Value. Controls the number of empty locations (or */
#define I3C_CMD_EMPTY_BUF_THLD_POS                     (0) /* Command Buffer Empty Threshold Value. Controls the number of empty locations (or */

/* I3C_RESET_CTRL Register */

#define I3C_IBI_QUEUE_RST                              (1U << 5) /* IBI Queue Software Reset.  This bit is only used in master mode of operation.  W */
#define I3C_RX_FIFO_RST                                (1U << 4) /* Receive Buffer Software Reset.  Write 1'b1 to this bit to exercise Receive Buffe */
#define I3C_TX_FIFO_RST                                (1U << 3) /* Transmit Buffer Software Reset.  Write 1'b1 to this bit to exercise Transmit Buf */
#define I3C_RESP_QUEUE_RST                             (1U << 2) /* Response Queue Software Reset.  Write 1'b1 to this bit to exercise Response Queu */
#define I3C_CMD_QUEUE_RST                              (1U << 1) /* Command Queue Software Reset.  Write 1'b1 to this bit to exercise Command Queue  */
#define I3C_SOFT_RST                                   (1U << 0) /* Core Software Reset.  Write 1'b1 to this bit to exercise software reset. This wi */

/* I3C_RESPONSE_QUEUE_PORT Register */

#define I3C_RESPONSE_MASK                              (0xFFFFFFFF << 0) /* 32 bit Response */
#define I3C_RESPONSE_POS                               (0) /* 32 bit Response */

/* I3C_RX_TX_DATA_PORT Register */

#define I3C_RX_TX_DATA_PORT_MASK                       (0xFFFFFFFF << 0) /* Receive and Transmit Data Port. (Merged in Doxbox)  The Receive data port is map */
#define I3C_RX_TX_DATA_PORT_POS                        (0) /* Receive and Transmit Data Port. (Merged in Doxbox)  The Receive data port is map */

/* I3C_SCL_EXT_LCNT_TIMING Register */

#define I3C_I3C_EXT_LCNT_4_MASK                        (0xFF << 24) /* I3C Extended Low Count Register 4  SDR4 uses this register field for data transf */
#define I3C_I3C_EXT_LCNT_4_POS                         (24) /* I3C Extended Low Count Register 4  SDR4 uses this register field for data transf */
#define I3C_I3C_EXT_LCNT_3_MASK                        (0xFF << 16) /* I3C Extended Low Count Register 3  SDR3 uses this register field for data transf */
#define I3C_I3C_EXT_LCNT_3_POS                         (16) /* I3C Extended Low Count Register 3  SDR3 uses this register field for data transf */
#define I3C_I3C_EXT_LCNT_2_MASK                        (0xFF << 8) /* I3C Extended Low Count Register 2  SDR2 uses this register field for data transf */
#define I3C_I3C_EXT_LCNT_2_POS                         (8) /* I3C Extended Low Count Register 2  SDR2 uses this register field for data transf */
#define I3C_I3C_EXT_LCNT_1_MASK                        (0xFF << 0) /* I3C Extended Low Count Register 1  SDR1 uses this register field for data transf */
#define I3C_I3C_EXT_LCNT_1_POS                         (0) /* I3C Extended Low Count Register 1  SDR1 uses this register field for data transf */

/* I3C_SCL_EXT_TERMN_LCNT_TIME Register */

#define I3C_I3C_EXT_TERMN_LCNT_MASK                    (0xF << 0) /* I3C Read Termination Bit Low count.  Extended I3C Read Termination Bit low count */
#define I3C_I3C_EXT_TERMN_LCNT_POS                     (0) /* I3C Read Termination Bit Low count.  Extended I3C Read Termination Bit low count */

/* I3C_SCL_I2C_FMP_TIMING Register */

#define I3C_I2C_FMP_HCNT_MASK                          (0xFF << 16) /* I2C Fast Mode Plus High Count  The SCL open-drain high count timing for I2C fast */
#define I3C_I2C_FMP_HCNT_POS                           (16) /* I2C Fast Mode Plus High Count  The SCL open-drain high count timing for I2C fast */
#define I3C_I2C_FMP_LCNT_MASK                          (0xFFFF << 0) /* I2C Fast Mode Plus Low Count  The SCL open-drain low count timing for I2C fast m */
#define I3C_I2C_FMP_LCNT_POS                           (0) /* I2C Fast Mode Plus Low Count  The SCL open-drain low count timing for I2C fast m */

/* I3C_SCL_I2C_FM_TIMING Register */

#define I3C_I2C_FM_HCNT_MASK                           (0xFFFF << 16) /* I2C Fast Mode High Count  The SCL open-drain high count timing for I2C fast mode */
#define I3C_I2C_FM_HCNT_POS                            (16) /* I2C Fast Mode High Count  The SCL open-drain high count timing for I2C fast mode */
#define I3C_I2C_FM_LCNT_MASK                           (0xFFFF << 0) /* I2C Fast Mode Low Count  The SCL open-drain low count timing for I2C fast mode t */
#define I3C_I2C_FM_LCNT_POS                            (0) /* I2C Fast Mode Low Count  The SCL open-drain low count timing for I2C fast mode t */

/* I3C_SCL_I3C_OD_TIMING Register */

#define I3C_I3C_OD_HCNT_MASK                           (0xFF << 16) /* I3C Open Drain High Count.  SCL open-drain High count (I3C) for I3C transfers ta */
#define I3C_I3C_OD_HCNT_POS                            (16) /* I3C Open Drain High Count.  SCL open-drain High count (I3C) for I3C transfers ta */
#define I3C_I3C_OD_LCNT_MASK                           (0xFF << 0) /* I3C Open Drain Low Count.  SCL Open-drain low count for I3C transfers targeted t */
#define I3C_I3C_OD_LCNT_POS                            (0) /* I3C Open Drain Low Count.  SCL Open-drain low count for I3C transfers targeted t */

/* I3C_SCL_I3C_PP_TIMING Register */

#define I3C_I3C_PP_HCNT_MASK                           (0xFF << 16) /* I3C Push Pull High Count.  SCL push-pull High count for I3C transfers targeted t */
#define I3C_I3C_PP_HCNT_POS                            (16) /* I3C Push Pull High Count.  SCL push-pull High count for I3C transfers targeted t */
#define I3C_I3C_PP_LCNT_MASK                           (0xFF << 0) /* I3C Push Pull Low Count.  SCL Push-pull low count for I3C transfers targeted to  */
#define I3C_I3C_PP_LCNT_POS                            (0) /* I3C Push Pull Low Count.  SCL Push-pull low count for I3C transfers targeted to  */

/* I3C_SDA_HOLD_DLY_TIMING Register */

#define I3C_SDA_TX_HOLD_MASK                           (0x7 << 16) /* This field controls the hold time (in term of the core clock period) of the tran */
#define I3C_SDA_TX_HOLD_POS                            (16) /* This field controls the hold time (in term of the core clock period) of the tran */

/* I3C_SLV_EVENT_STATUS Register */

#define I3C_MWL_UPDATED                                (1U << 7) /* MWL Updated Status.  This bit indicates a SETMWL CCC is received by the slave. T */
#define I3C_MRL_UPDATED                                (1U << 6) /* MRL Updated Status.  This bit indicates a SETMRL CCC is received by the slave. T */
#define I3C_ACTIVITY_STATE_MASK                        (0x3 << 4) /* Activity State Status.  ENTAS0 - 00  ENTAS1 - 01  ENTAS2 - 10  ENTAS3 - 11  This */
#define I3C_ACTIVITY_STATE_POS                         (4) /* Activity State Status.  ENTAS0 - 00  ENTAS1 - 01  ENTAS2 - 10  ENTAS3 - 11  This */

/* I3C_VENDOR_SPECIFIC_PTR Register */

#define I3C_P_VENDOR_REG_START_ADDR_MASK               (0xFFFF << 0) /* Start Address of Vendor specific registers. */
#define I3C_P_VENDOR_REG_START_ADDR_POS                (0) /* Start Address of Vendor specific registers. */

/* I3C_VER_ID Register */

#define I3C_I3C_VER_ID_MASK                            (0xFFFFFFFF << 0) /* Current release type  This field indicates the Synopsys DesignWare Cores DWC_mip */
#define I3C_I3C_VER_ID_POS                             (0) /* Current release type  This field indicates the Synopsys DesignWare Cores DWC_mip */

/* I3C_VER_TYPE Register */

#define I3C_I3C_VER_TYPE_MASK                          (0xFFFFFFFF << 0) /* Current release type  This field indicates the Synopsys DesignWare Cores DWC_mip */
#define I3C_I3C_VER_TYPE_POS                           (0) /* Current release type  This field indicates the Synopsys DesignWare Cores DWC_mip */

#endif /* __DA1470_I3C_H */
