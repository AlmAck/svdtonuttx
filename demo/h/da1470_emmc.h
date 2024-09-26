/****************************************************************************
 * ./tmp/da1470_emmc.h
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

#ifndef __DA1470_EMMC_H
#define __DA1470_EMMC_H

/* Register offsets *********************************************************/

#define DA1470_EMMC_EMMC_ADMA_ERR_STAT_R_OFFSET                          0x0054 /* This register stores the ADMA state during an ADMA error. This register is appli */
#define DA1470_EMMC_EMMC_ADMA_SA_LOW_R_OFFSET                            0x0058 /* This register holds the lower 32-bit system address for DMA transfer. This regis */
#define DA1470_EMMC_EMMC_ARGUMENT_R_OFFSET                               0x0008 /* This register is used to configure the SD/eMMC command argument. */
#define DA1470_EMMC_EMMC_AT_CTRL_R_OFFSET                                0x0540 /* This register controls some aspects of tuning and auto-tuning features. Do not p */
#define DA1470_EMMC_EMMC_AT_STAT_R_OFFSET                                0x0544 /* Register to read the Center, Left and Right codes used by tuning and auto-tuning */
#define DA1470_EMMC_EMMC_AUTO_CMD_STAT_R_OFFSET                          0x003C /* This register is used to indicate the CMD12 response error of Auto CMD12, and th */
#define DA1470_EMMC_EMMC_BGAP_CTRL_R_OFFSET                              0x002A /* This register is used by the host driver to control any operation related to Blo */
#define DA1470_EMMC_EMMC_BLOCKCOUNT_R_OFFSET                             0x0006 /* This register is used to configure the number of data blocks. This register is a */
#define DA1470_EMMC_EMMC_BLOCKSIZE_R_OFFSET                              0x0004 /* This register is used to configure an SDMA buffer boundary and the number of byt */
#define DA1470_EMMC_EMMC_BOOT_CTRL_R_OFFSET                              0x052E /* This register is used to control the eMMC Boot operation. */
#define DA1470_EMMC_EMMC_BUF_DATA_R_OFFSET                               0x0020 /* This register is used to access the packet buffer. This register is applicable f */
#define DA1470_EMMC_EMMC_CAPABILITIES1_R_OFFSET                          0x0040 /* This register provides the Host Driver with information specific to the Host Con */
#define DA1470_EMMC_EMMC_CAPABILITIES2_R_OFFSET                          0x0044 /* This register provides the Host Driver with information specific to the Host Con */
#define DA1470_EMMC_EMMC_CLK_CTRL_R_OFFSET                               0x002C /* This register controls SDCLK (card clock) in an SD/eMMC mode and RCLK in the UHS */
#define DA1470_EMMC_EMMC_CMD_R_OFFSET                                    0x000E /* This register is used to provide the information related to a command and a resp */
#define DA1470_EMMC_EMMC_CQCAP_OFFSET                                    0x0184 /* This register indicates the capabilities of the command queuing engine. */
#define DA1470_EMMC_EMMC_CURR_CAPABILITIES1_R_OFFSET                     0x0048 /* This register indicate the maximum current capability for each voltage, for VDD1 */
#define DA1470_EMMC_EMMC_CURR_CAPABILITIES2_R_OFFSET                     0x004C /* This register indicates the maximum current capability for each voltage (for VDD */
#define DA1470_EMMC_EMMC_EMBEDDED_CTRL_R_OFFSET                          0x0F6C /* This register controls the embedded device. When the Host Controller is connecte */
#define DA1470_EMMC_EMMC_EMMC_CTRL_R_OFFSET                              0x052C /* This register is used to control the eMMC operation. */
#define DA1470_EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_OFFSET                    0x003A /* This register is used to select the interrupt status that is notified to the Hos */
#define DA1470_EMMC_EMMC_ERROR_INT_STAT_EN_R_OFFSET                      0x0036 /* This register sets the Interrupt Status for Error Interrupt Status register (ERR */
#define DA1470_EMMC_EMMC_ERROR_INT_STAT_R_OFFSET                         0x0032 /* This register enables an interrupt when the Error Interrupt Status Enable is ena */
#define DA1470_EMMC_EMMC_FORCE_AUTO_CMD_STAT_R_OFFSET                    0x0050 /* The register is not a physically implemented but is an address at which the Auto */
#define DA1470_EMMC_EMMC_FORCE_ERROR_INT_STAT_R_OFFSET                   0x0052 /* This register is not physically implemented but is an address at which the Error */
#define DA1470_EMMC_EMMC_HOST_CNTRL_VERS_R_OFFSET                        0x00FE /* This register is used to indicate the Host Controller Version number. */
#define DA1470_EMMC_EMMC_HOST_CTRL1_R_OFFSET                             0x0028 /* This register is used to control the operation of the Host Controller. This regi */
#define DA1470_EMMC_EMMC_HOST_CTRL2_R_OFFSET                             0x003E /* This register is used to control how the Host Controller operates. This register */
#define DA1470_EMMC_EMMC_MBIU_CTRL_R_OFFSET                              0x0510 /* This register is used to select the valid burst types that the AHB Master bus in */
#define DA1470_EMMC_EMMC_MSHC_CTRL_R_OFFSET                              0x0508 /* This register is used to control the operation of MSHC Host Controller. */
#define DA1470_EMMC_EMMC_MSHC_VER_ID_R_OFFSET                            0x0500 /* This register reflects the current release number of DWC_mshc/DWC_mshc_lite. */
#define DA1470_EMMC_EMMC_MSHC_VER_TYPE_R_OFFSET                          0x0504 /* This register reflects the current release type of DWC_mshc/DWC_mshc_lite. */
#define DA1470_EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_OFFSET                   0x0038 /* This register is used to select the interrupt status that is indicated to the Ho */
#define DA1470_EMMC_EMMC_NORMAL_INT_STAT_EN_R_OFFSET                     0x0034 /* This register enables the Interrupt Status for Normal Interrupt Status register  */
#define DA1470_EMMC_EMMC_NORMAL_INT_STAT_R_OFFSET                        0x0030 /* This register reflects the status of the Normal Interrupt. This register is appl */
#define DA1470_EMMC_EMMC_PRESET_DDR50_R_OFFSET                           0x006E /* This register defines the Preset Value for DDR50 and High Speed DDR speed modes  */
#define DA1470_EMMC_EMMC_PRESET_DS_R_OFFSET                              0x0062 /* This register defines Preset Value for Default Speed mode in SD mode. */
#define DA1470_EMMC_EMMC_PRESET_HS_R_OFFSET                              0x0064 /* This register defines Preset Value for High Speed mode in SD mode. */
#define DA1470_EMMC_EMMC_PRESET_INIT_R_OFFSET                            0x0060 /* This register defines Preset Value for Initialization in SD/eMMC mode. */
#define DA1470_EMMC_EMMC_PRESET_SDR104_R_OFFSET                          0x006C /* This register defines Preset Value for SDR104 and HS200 speed modes in the SD an */
#define DA1470_EMMC_EMMC_PRESET_SDR12_R_OFFSET                           0x0066 /* This register defines Preset Value for SDR12 and Legacy speed mode in SD and eMM */
#define DA1470_EMMC_EMMC_PRESET_SDR25_R_OFFSET                           0x0068 /* This register defines Preset Value for SDR25 and High Speed SDR speed mode in SD */
#define DA1470_EMMC_EMMC_PRESET_SDR50_R_OFFSET                           0x006A /* This register defines Preset Value for SDR50 speed mode in SD mode. */
#define DA1470_EMMC_EMMC_PRESET_UHS2_R_OFFSET                            0x0074 /* This register is used to hold the preset value for UHS-II and HS400 speed modes  */
#define DA1470_EMMC_EMMC_PSTATE_OFFSET                                   0x0024 /* This register indicates the present status of the Host Controller. This register */
#define DA1470_EMMC_EMMC_PWR_CTRL_R_OFFSET                               0x0029 /* This register is used to control the bus power for the Card. This register is ap */
#define DA1470_EMMC_EMMC_P_EMBEDDED_CNTRL_OFFSET                         0x00E6 /* This register points to the location of UHS-II embedded control registers. */
#define DA1470_EMMC_EMMC_P_VENDOR_SPECIFIC_AREA_OFFSET                   0x00E8 /* This register used as a pointer for the Vendor Specific Area 1. */
#define DA1470_EMMC_EMMC_P_VNDR2_SPECIFIC_AREA_OFFSET                    0x00EA /* This register is used as a pointer for the Vendor Specific Area 2. */
#define DA1470_EMMC_EMMC_RESP01_R_OFFSET                                 0x0010 /* This register stores 39-08 bits of the Response Field for an SD/eMMC mode.  The  */
#define DA1470_EMMC_EMMC_RESP23_R_OFFSET                                 0x0014 /* This register stores 71-40 bits of the Response Field for an SD/eMMC mode. This  */
#define DA1470_EMMC_EMMC_RESP45_R_OFFSET                                 0x0018 /* This register stores 103-72 bits of the Response Field for an SD/eMMC mode.  The */
#define DA1470_EMMC_EMMC_RESP67_R_OFFSET                                 0x001C /* This register stores 135-104 bits of the Response Field for an SD/eMMC mode.     */
#define DA1470_EMMC_EMMC_SDMASA_R_OFFSET                                 0x0000 /* This register is used to configure a 32-bit Block Count or an SDMA System Addres */
#define DA1470_EMMC_EMMC_SLOT_INTR_STATUS_R_OFFSET                       0x00FC /* This register indicates the Interrupt status of each slot. */
#define DA1470_EMMC_EMMC_SW_RST_R_OFFSET                                 0x002F /* This register is used to generate a reset pulse by writing 1 to each bit of this */
#define DA1470_EMMC_EMMC_TOUT_CTRL_R_OFFSET                              0x002E /* This register is used to set the Data Timeout Counter value for an SD/eMMC mode  */
#define DA1470_EMMC_EMMC_WUP_CTRL_R_OFFSET                               0x002B /* This register is mandatory for the Host Controller, but the wakeup functionality */
#define DA1470_EMMC_EMMC_XFER_MODE_R_OFFSET                              0x000C /* This register is used to control the operation of data transfers for an SD/eMMC  */

/* Register addresses *******************************************************/

#define DA1470_EMMC_BASE                                                 0x30058000 /* EMMC registers */

#define DA1470_EMMC_EMMC_ADMA_ERR_STAT_R                                 (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_ADMA_ERR_STAT_R_OFFSET) /* This register stores the ADMA state during an ADMA error. This register is appli */
#define DA1470_EMMC_EMMC_ADMA_SA_LOW_R                                   (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_ADMA_SA_LOW_R_OFFSET) /* This register holds the lower 32-bit system address for DMA transfer. This regis */
#define DA1470_EMMC_EMMC_ARGUMENT_R                                      (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_ARGUMENT_R_OFFSET) /* This register is used to configure the SD/eMMC command argument. */
#define DA1470_EMMC_EMMC_AT_CTRL_R                                       (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_AT_CTRL_R_OFFSET) /* This register controls some aspects of tuning and auto-tuning features. Do not p */
#define DA1470_EMMC_EMMC_AT_STAT_R                                       (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_AT_STAT_R_OFFSET) /* Register to read the Center, Left and Right codes used by tuning and auto-tuning */
#define DA1470_EMMC_EMMC_AUTO_CMD_STAT_R                                 (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_AUTO_CMD_STAT_R_OFFSET) /* This register is used to indicate the CMD12 response error of Auto CMD12, and th */
#define DA1470_EMMC_EMMC_BGAP_CTRL_R                                     (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_BGAP_CTRL_R_OFFSET) /* This register is used by the host driver to control any operation related to Blo */
#define DA1470_EMMC_EMMC_BLOCKCOUNT_R                                    (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_BLOCKCOUNT_R_OFFSET) /* This register is used to configure the number of data blocks. This register is a */
#define DA1470_EMMC_EMMC_BLOCKSIZE_R                                     (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_BLOCKSIZE_R_OFFSET) /* This register is used to configure an SDMA buffer boundary and the number of byt */
#define DA1470_EMMC_EMMC_BOOT_CTRL_R                                     (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_BOOT_CTRL_R_OFFSET) /* This register is used to control the eMMC Boot operation. */
#define DA1470_EMMC_EMMC_BUF_DATA_R                                      (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_BUF_DATA_R_OFFSET) /* This register is used to access the packet buffer. This register is applicable f */
#define DA1470_EMMC_EMMC_CAPABILITIES1_R                                 (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_CAPABILITIES1_R_OFFSET) /* This register provides the Host Driver with information specific to the Host Con */
#define DA1470_EMMC_EMMC_CAPABILITIES2_R                                 (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_CAPABILITIES2_R_OFFSET) /* This register provides the Host Driver with information specific to the Host Con */
#define DA1470_EMMC_EMMC_CLK_CTRL_R                                      (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_CLK_CTRL_R_OFFSET) /* This register controls SDCLK (card clock) in an SD/eMMC mode and RCLK in the UHS */
#define DA1470_EMMC_EMMC_CMD_R                                           (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_CMD_R_OFFSET) /* This register is used to provide the information related to a command and a resp */
#define DA1470_EMMC_EMMC_CQCAP                                           (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_CQCAP_OFFSET) /* This register indicates the capabilities of the command queuing engine. */
#define DA1470_EMMC_EMMC_CURR_CAPABILITIES1_R                            (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_CURR_CAPABILITIES1_R_OFFSET) /* This register indicate the maximum current capability for each voltage, for VDD1 */
#define DA1470_EMMC_EMMC_CURR_CAPABILITIES2_R                            (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_CURR_CAPABILITIES2_R_OFFSET) /* This register indicates the maximum current capability for each voltage (for VDD */
#define DA1470_EMMC_EMMC_EMBEDDED_CTRL_R                                 (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_EMBEDDED_CTRL_R_OFFSET) /* This register controls the embedded device. When the Host Controller is connecte */
#define DA1470_EMMC_EMMC_EMMC_CTRL_R                                     (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_EMMC_CTRL_R_OFFSET) /* This register is used to control the eMMC operation. */
#define DA1470_EMMC_EMMC_ERROR_INT_SIGNAL_EN_R                           (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_OFFSET) /* This register is used to select the interrupt status that is notified to the Hos */
#define DA1470_EMMC_EMMC_ERROR_INT_STAT_EN_R                             (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_ERROR_INT_STAT_EN_R_OFFSET) /* This register sets the Interrupt Status for Error Interrupt Status register (ERR */
#define DA1470_EMMC_EMMC_ERROR_INT_STAT_R                                (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_ERROR_INT_STAT_R_OFFSET) /* This register enables an interrupt when the Error Interrupt Status Enable is ena */
#define DA1470_EMMC_EMMC_FORCE_AUTO_CMD_STAT_R                           (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_FORCE_AUTO_CMD_STAT_R_OFFSET) /* The register is not a physically implemented but is an address at which the Auto */
#define DA1470_EMMC_EMMC_FORCE_ERROR_INT_STAT_R                          (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_FORCE_ERROR_INT_STAT_R_OFFSET) /* This register is not physically implemented but is an address at which the Error */
#define DA1470_EMMC_EMMC_HOST_CNTRL_VERS_R                               (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_HOST_CNTRL_VERS_R_OFFSET) /* This register is used to indicate the Host Controller Version number. */
#define DA1470_EMMC_EMMC_HOST_CTRL1_R                                    (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_HOST_CTRL1_R_OFFSET) /* This register is used to control the operation of the Host Controller. This regi */
#define DA1470_EMMC_EMMC_HOST_CTRL2_R                                    (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_HOST_CTRL2_R_OFFSET) /* This register is used to control how the Host Controller operates. This register */
#define DA1470_EMMC_EMMC_MBIU_CTRL_R                                     (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_MBIU_CTRL_R_OFFSET) /* This register is used to select the valid burst types that the AHB Master bus in */
#define DA1470_EMMC_EMMC_MSHC_CTRL_R                                     (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_MSHC_CTRL_R_OFFSET) /* This register is used to control the operation of MSHC Host Controller. */
#define DA1470_EMMC_EMMC_MSHC_VER_ID_R                                   (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_MSHC_VER_ID_R_OFFSET) /* This register reflects the current release number of DWC_mshc/DWC_mshc_lite. */
#define DA1470_EMMC_EMMC_MSHC_VER_TYPE_R                                 (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_MSHC_VER_TYPE_R_OFFSET) /* This register reflects the current release type of DWC_mshc/DWC_mshc_lite. */
#define DA1470_EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R                          (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_OFFSET) /* This register is used to select the interrupt status that is indicated to the Ho */
#define DA1470_EMMC_EMMC_NORMAL_INT_STAT_EN_R                            (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_NORMAL_INT_STAT_EN_R_OFFSET) /* This register enables the Interrupt Status for Normal Interrupt Status register  */
#define DA1470_EMMC_EMMC_NORMAL_INT_STAT_R                               (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_NORMAL_INT_STAT_R_OFFSET) /* This register reflects the status of the Normal Interrupt. This register is appl */
#define DA1470_EMMC_EMMC_PRESET_DDR50_R                                  (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PRESET_DDR50_R_OFFSET) /* This register defines the Preset Value for DDR50 and High Speed DDR speed modes  */
#define DA1470_EMMC_EMMC_PRESET_DS_R                                     (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PRESET_DS_R_OFFSET) /* This register defines Preset Value for Default Speed mode in SD mode. */
#define DA1470_EMMC_EMMC_PRESET_HS_R                                     (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PRESET_HS_R_OFFSET) /* This register defines Preset Value for High Speed mode in SD mode. */
#define DA1470_EMMC_EMMC_PRESET_INIT_R                                   (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PRESET_INIT_R_OFFSET) /* This register defines Preset Value for Initialization in SD/eMMC mode. */
#define DA1470_EMMC_EMMC_PRESET_SDR104_R                                 (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PRESET_SDR104_R_OFFSET) /* This register defines Preset Value for SDR104 and HS200 speed modes in the SD an */
#define DA1470_EMMC_EMMC_PRESET_SDR12_R                                  (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PRESET_SDR12_R_OFFSET) /* This register defines Preset Value for SDR12 and Legacy speed mode in SD and eMM */
#define DA1470_EMMC_EMMC_PRESET_SDR25_R                                  (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PRESET_SDR25_R_OFFSET) /* This register defines Preset Value for SDR25 and High Speed SDR speed mode in SD */
#define DA1470_EMMC_EMMC_PRESET_SDR50_R                                  (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PRESET_SDR50_R_OFFSET) /* This register defines Preset Value for SDR50 speed mode in SD mode. */
#define DA1470_EMMC_EMMC_PRESET_UHS2_R                                   (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PRESET_UHS2_R_OFFSET) /* This register is used to hold the preset value for UHS-II and HS400 speed modes  */
#define DA1470_EMMC_EMMC_PSTATE                                          (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PSTATE_OFFSET) /* This register indicates the present status of the Host Controller. This register */
#define DA1470_EMMC_EMMC_PWR_CTRL_R                                      (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_PWR_CTRL_R_OFFSET) /* This register is used to control the bus power for the Card. This register is ap */
#define DA1470_EMMC_EMMC_P_EMBEDDED_CNTRL                                (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_P_EMBEDDED_CNTRL_OFFSET) /* This register points to the location of UHS-II embedded control registers. */
#define DA1470_EMMC_EMMC_P_VENDOR_SPECIFIC_AREA                          (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_P_VENDOR_SPECIFIC_AREA_OFFSET) /* This register used as a pointer for the Vendor Specific Area 1. */
#define DA1470_EMMC_EMMC_P_VNDR2_SPECIFIC_AREA                           (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_P_VNDR2_SPECIFIC_AREA_OFFSET) /* This register is used as a pointer for the Vendor Specific Area 2. */
#define DA1470_EMMC_EMMC_RESP01_R                                        (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_RESP01_R_OFFSET) /* This register stores 39-08 bits of the Response Field for an SD/eMMC mode.  The  */
#define DA1470_EMMC_EMMC_RESP23_R                                        (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_RESP23_R_OFFSET) /* This register stores 71-40 bits of the Response Field for an SD/eMMC mode. This  */
#define DA1470_EMMC_EMMC_RESP45_R                                        (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_RESP45_R_OFFSET) /* This register stores 103-72 bits of the Response Field for an SD/eMMC mode.  The */
#define DA1470_EMMC_EMMC_RESP67_R                                        (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_RESP67_R_OFFSET) /* This register stores 135-104 bits of the Response Field for an SD/eMMC mode.     */
#define DA1470_EMMC_EMMC_SDMASA_R                                        (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_SDMASA_R_OFFSET) /* This register is used to configure a 32-bit Block Count or an SDMA System Addres */
#define DA1470_EMMC_EMMC_SLOT_INTR_STATUS_R                              (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_SLOT_INTR_STATUS_R_OFFSET) /* This register indicates the Interrupt status of each slot. */
#define DA1470_EMMC_EMMC_SW_RST_R                                        (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_SW_RST_R_OFFSET) /* This register is used to generate a reset pulse by writing 1 to each bit of this */
#define DA1470_EMMC_EMMC_TOUT_CTRL_R                                     (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_TOUT_CTRL_R_OFFSET) /* This register is used to set the Data Timeout Counter value for an SD/eMMC mode  */
#define DA1470_EMMC_EMMC_WUP_CTRL_R                                      (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_WUP_CTRL_R_OFFSET) /* This register is mandatory for the Host Controller, but the wakeup functionality */
#define DA1470_EMMC_EMMC_XFER_MODE_R                                     (DA1470_EMMC_BASE + DA1470_EMMC_EMMC_XFER_MODE_R_OFFSET) /* This register is used to control the operation of data transfers for an SD/eMMC  */

/* Register bit definitions *************************************************/

#define EMMC_EMMC_ADMA_ERR_STAT_R_ADMA_LEN_ERR                           (1U << 2) /* ADMA Length Mismatch Error States This error occurs in the following instances:  */
#define EMMC_EMMC_ADMA_ERR_STAT_R_ADMA_ERR_STATES_MASK                   (0x3 << 0) /* ADMA Error States These bits indicate the state of ADMA when an error occurs dur */
#define EMMC_EMMC_ADMA_ERR_STAT_R_ADMA_ERR_STATES_POS                    (0) /* ADMA Error States These bits indicate the state of ADMA when an error occurs dur */
#define EMMC_EMMC_ADMA_SA_LOW_R_ADMA_SA_LOW_MASK                         (0xFFFFFFFF << 0) /* ADMA System Address  These bits indicate the lower 32 bits of the ADMA system ad */
#define EMMC_EMMC_ADMA_SA_LOW_R_ADMA_SA_LOW_POS                          (0) /* ADMA System Address  These bits indicate the lower 32 bits of the ADMA system ad */
#define EMMC_EMMC_ARGUMENT_R_ARGUMENT_MASK                               (0xFFFFFFFF << 0) /* Command Argument. These bits specify the SD/eMMC command argument that is specif */
#define EMMC_EMMC_ARGUMENT_R_ARGUMENT_POS                                (0) /* Command Argument. These bits specify the SD/eMMC command argument that is specif */
#define EMMC_EMMC_AT_CTRL_R_SWIN_TH_VAL_MASK                             (0x7 << 24) /* Sampling window threshold value setting The maximum value that can be set here d */
#define EMMC_EMMC_AT_CTRL_R_SWIN_TH_VAL_POS                              (24) /* Sampling window threshold value setting The maximum value that can be set here d */
#define EMMC_EMMC_AT_CTRL_R_POST_CHANGE_DLY_MASK                         (0x3 << 19) /* Time taken for phase switching and stable clock output. Specifies the maximum ti */
#define EMMC_EMMC_AT_CTRL_R_POST_CHANGE_DLY_POS                          (19) /* Time taken for phase switching and stable clock output. Specifies the maximum ti */
#define EMMC_EMMC_AT_CTRL_R_PRE_CHANGE_DLY_MASK                          (0x3 << 17) /* Maximum Latency specification between cclk_tx and cclk_rx. Values: 0x0 (LATENCY_ */
#define EMMC_EMMC_AT_CTRL_R_PRE_CHANGE_DLY_POS                           (17) /* Maximum Latency specification between cclk_tx and cclk_rx. Values: 0x0 (LATENCY_ */
#define EMMC_EMMC_AT_CTRL_R_TUNE_CLK_STOP_EN                             (1U << 16) /* Clock stopping control for Tuning and auto-tuning circuit. When enabled, clock g */
#define EMMC_EMMC_AT_CTRL_R_SW_TUNE_EN                                   (1U << 4) /* This fields enables software-managed tuning flow. Values: 0x1 (SW_TUNING_ENABLE) */
#define EMMC_EMMC_AT_CTRL_R_RPT_TUNE_ERR                                 (1U << 3) /* Framing errors are not generated when executing tuning. This debug bit allows us */
#define EMMC_EMMC_AT_CTRL_R_SWIN_TH_EN                                   (1U << 2) /* Sampling window Threshold enable Selects the tuning mode Field should be program */
#define EMMC_EMMC_AT_STAT_R_L_EDGE_PH_CODE_MASK                          (0xFF << 16) /* Left Edge Phase code. Reading this field returns the phase code value used by Au */
#define EMMC_EMMC_AT_STAT_R_L_EDGE_PH_CODE_POS                           (16) /* Left Edge Phase code. Reading this field returns the phase code value used by Au */
#define EMMC_EMMC_AT_STAT_R_R_EDGE_PH_CODE_MASK                          (0xFF << 8) /* Right Edge Phase code. Reading this field returns the phase code value used by A */
#define EMMC_EMMC_AT_STAT_R_R_EDGE_PH_CODE_POS                           (8) /* Right Edge Phase code. Reading this field returns the phase code value used by A */
#define EMMC_EMMC_AT_STAT_R_CENTER_PH_CODE_MASK                          (0xFF << 0) /* Centered Phase code. Reading this field returns the current value on tuning_cclk */
#define EMMC_EMMC_AT_STAT_R_CENTER_PH_CODE_POS                           (0) /* Centered Phase code. Reading this field returns the current value on tuning_cclk */
#define EMMC_EMMC_AUTO_CMD_STAT_R_CMD_NOT_ISSUED_AUTO_CMD12              (1U << 7) /* Command Not Issued By Auto CMD12 Error If this bit is set to 1, CMD_wo_DAT is no */
#define EMMC_EMMC_AUTO_CMD_STAT_R_AUTO_CMD_RESP_ERR                      (1U << 5) /* Auto CMD Response Error This bit is set when Response Error Check Enable in the  */
#define EMMC_EMMC_AUTO_CMD_STAT_R_AUTO_CMD_IDX_ERR                       (1U << 4) /* Auto CMD Index Error This bit is set if the command index error occurs in respon */
#define EMMC_EMMC_AUTO_CMD_STAT_R_AUTO_CMD_EBIT_ERR                      (1U << 3) /* Auto CMD End Bit Error This bit is set when detecting that the end bit of comman */
#define EMMC_EMMC_AUTO_CMD_STAT_R_AUTO_CMD_CRC_ERR                       (1U << 2) /* Auto CMD CRC Error This bit is set when detecting a CRC error in the command res */
#define EMMC_EMMC_AUTO_CMD_STAT_R_AUTO_CMD_TOUT_ERR                      (1U << 1) /* Auto CMD Timeout Error This bit is set if no response is returned with 64 SDCLK  */
#define EMMC_EMMC_AUTO_CMD_STAT_R_AUTO_CMD12_NOT_EXEC                    (1U << 0) /* Auto CMD12 Not Executed If multiple memory block data transfer is not started du */
#define EMMC_EMMC_BGAP_CTRL_R_INT_AT_BGAP                                (1U << 3) /* Interrupt At Block Gap. This bit is valid only in the 4-bit mode of an SDIO card */
#define EMMC_EMMC_BGAP_CTRL_R_RD_WAIT_CTRL                               (1U << 2) /* Read Wait Control. This bit is used to enable the read wait protocol to stop rea */
#define EMMC_EMMC_BGAP_CTRL_R_CONTINUE_REQ                               (1U << 1) /* Continue Request. This bit is used to restart the transaction, which was stopped */
#define EMMC_EMMC_BGAP_CTRL_R_STOP_BG_REQ                                (1U << 0) /* Stop At Block Gap Request. This bit is used to stop executing read and write tra */
#define EMMC_EMMC_BLOCKCOUNT_R_BLOCK_CNT_MASK                            (0xFFFF << 0) /* 16-bit Block Count. - If the Host Version 4 Enable bit is set 0 or the 16-bit Bl */
#define EMMC_EMMC_BLOCKCOUNT_R_BLOCK_CNT_POS                             (0) /* 16-bit Block Count. - If the Host Version 4 Enable bit is set 0 or the 16-bit Bl */
#define EMMC_EMMC_BLOCKSIZE_R_SDMA_BUF_BDARY_MASK                        (0x7 << 12) /* SDMA Buffer Boundary. These bits specify the size of contiguous buffer in system */
#define EMMC_EMMC_BLOCKSIZE_R_SDMA_BUF_BDARY_POS                         (12) /* SDMA Buffer Boundary. These bits specify the size of contiguous buffer in system */
#define EMMC_EMMC_BLOCKSIZE_R_XFER_BLOCK_SIZE_MASK                       (0xFFF << 0) /* Transfer Block Size. These bits specify the block size of data transfers. In cas */
#define EMMC_EMMC_BLOCKSIZE_R_XFER_BLOCK_SIZE_POS                        (0) /* Transfer Block Size. These bits specify the block size of data transfers. In cas */
#define EMMC_EMMC_BOOT_CTRL_R_BOOT_TOUT_CNT_MASK                         (0xF << 12) /* Boot Ack Timeout Counter Value. This value determines the interval by which boot */
#define EMMC_EMMC_BOOT_CTRL_R_BOOT_TOUT_CNT_POS                          (12) /* Boot Ack Timeout Counter Value. This value determines the interval by which boot */
#define EMMC_EMMC_BOOT_CTRL_R_BOOT_ACK_ENABLE                            (1U << 8) /* Boot Acknowledge Enable When this bit set, DWC_mshc checks for boot acknowledge  */
#define EMMC_EMMC_BOOT_CTRL_R_VALIDATE_BOOT                              (1U << 7) /* Validate Mandatory Boot Enable bit This bit is used to validate the MAN_BOOT_EN  */
#define EMMC_EMMC_BOOT_CTRL_R_MAN_BOOT_EN                                (1U << 0) /* Mandatory Boot Enable This bit is used to initiate the mandatory boot operation. */
#define EMMC_EMMC_BUF_DATA_R_BUF_DATA_MASK                               (0xFFFFFFFF << 0) /* Buffer Data. These bits enable access to the Host Controller packet buffer. */
#define EMMC_EMMC_BUF_DATA_R_BUF_DATA_POS                                (0) /* Buffer Data. These bits enable access to the Host Controller packet buffer. */
#define EMMC_EMMC_CAPABILITIES1_R_SLOT_TYPE_R_MASK                       (0x3 << 30) /* Slot Type These bits indicate usage of a slot by a specific Host System. Values: */
#define EMMC_EMMC_CAPABILITIES1_R_SLOT_TYPE_R_POS                        (30) /* Slot Type These bits indicate usage of a slot by a specific Host System. Values: */
#define EMMC_EMMC_CAPABILITIES1_R_ASYNC_INT_SUPPORT                      (1U << 29) /* Asynchronous Interrupt Support (SD Mode only) Values: 0x0 (FALSE): Asynchronous  */
#define EMMC_EMMC_CAPABILITIES1_R_SYS_ADDR_64_V3                         (1U << 28) /* 64-bit System Address Support for V3 This bit sets the Host controller to suppor */
#define EMMC_EMMC_CAPABILITIES1_R_SYS_ADDR_64_V4                         (1U << 27) /* 64-bit System Address Support for V4 This bit sets the Host Controller to suppor */
#define EMMC_EMMC_CAPABILITIES1_R_VOLT_18                                (1U << 26) /* Voltage Support for 1.8V Values: 0x0 (FALSE): 1.8V Not Supported 0x1 (TRUE): 1.8 */
#define EMMC_EMMC_CAPABILITIES1_R_VOLT_30                                (1U << 25) /* Voltage Support for SD 3.0V or Embedded 1.2V Values: 0x0 (FALSE): SD 3.0V or Emb */
#define EMMC_EMMC_CAPABILITIES1_R_VOLT_33                                (1U << 24) /* Voltage Support for 3.3V Values: 0x0 (FALSE): 3.3V Not Supported 0x1 (TRUE): 3.3 */
#define EMMC_EMMC_CAPABILITIES1_R_SUS_RES_SUPPORT                        (1U << 23) /* Suspense/Resume Support This bit indicates whether the Host Controller supports  */
#define EMMC_EMMC_CAPABILITIES1_R_SDMA_SUPPORT                           (1U << 22) /* SDMA Support This bit indicates whether the Host Controller is capable of using  */
#define EMMC_EMMC_CAPABILITIES1_R_HIGH_SPEED_SUPPORT                     (1U << 21) /* High Speed Support This bit indicates whether the Host Controller and the Host S */
#define EMMC_EMMC_CAPABILITIES1_R_ADMA2_SUPPORT                          (1U << 19) /* ADMA2 Support This bit indicates whether the Host Controller is capable of using */
#define EMMC_EMMC_CAPABILITIES1_R_EMBEDDED_8_BIT                         (1U << 18) /* 8-bit Support for Embedded Device This bit indicates whether the Host Controller */
#define EMMC_EMMC_CAPABILITIES1_R_MAX_BLK_LEN_MASK                       (0x3 << 16) /* Maximum Block Length This bit indicates the maximum block size that the Host dri */
#define EMMC_EMMC_CAPABILITIES1_R_MAX_BLK_LEN_POS                        (16) /* Maximum Block Length This bit indicates the maximum block size that the Host dri */
#define EMMC_EMMC_CAPABILITIES1_R_BASE_CLK_FREQ_MASK                     (0xFF << 8) /* Base Clock Frequency for SD clock These bits indicate the base (maximum) clock f */
#define EMMC_EMMC_CAPABILITIES1_R_BASE_CLK_FREQ_POS                      (8) /* Base Clock Frequency for SD clock These bits indicate the base (maximum) clock f */
#define EMMC_EMMC_CAPABILITIES1_R_TOUT_CLK_UNIT                          (1U << 7) /* Timeout Clock Unit This bit shows the unit of base clock frequency used to detec */
#define EMMC_EMMC_CAPABILITIES1_R_TOUT_CLK_FREQ_MASK                     (0x3F << 0) /* Timeout Clock Frequency  This bit shows the base clock frequency used to detect  */
#define EMMC_EMMC_CAPABILITIES1_R_TOUT_CLK_FREQ_POS                      (0) /* Timeout Clock Frequency  This bit shows the base clock frequency used to detect  */
#define EMMC_EMMC_CAPABILITIES2_R_VDD2_18V_SUPPORT                       (1U << 28) /* 1.8V VDD2 Support This bit indicates support of VDD2 for the Host System. Values */
#define EMMC_EMMC_CAPABILITIES2_R_ADMA3_SUPPORT                          (1U << 27) /* ADMA3 Support This bit indicates whether the Host Controller is capable of using */
#define EMMC_EMMC_CAPABILITIES2_R_CLK_MUL_MASK                           (0xFF << 16) /* Clock Multiplier These bits indicate the clock multiplier of the programmable cl */
#define EMMC_EMMC_CAPABILITIES2_R_CLK_MUL_POS                            (16) /* Clock Multiplier These bits indicate the clock multiplier of the programmable cl */
#define EMMC_EMMC_CAPABILITIES2_R_RE_TUNING_MODES_MASK                   (0x3 << 14) /* Re-Tuning Modes (UHS-I only) These bits select the re-tuning method and limit th */
#define EMMC_EMMC_CAPABILITIES2_R_RE_TUNING_MODES_POS                    (14) /* Re-Tuning Modes (UHS-I only) These bits select the re-tuning method and limit th */
#define EMMC_EMMC_CAPABILITIES2_R_USE_TUNING_SDR50                       (1U << 13) /* Use Tuning for SDR50 (UHS-I only) */
#define EMMC_EMMC_CAPABILITIES2_R_RETUNE_CNT_MASK                        (0xF << 8) /* Timer Count for Re-Tuning (UHS-I only) - 0x0: Re-Tuning Timer disabled - 0x1: 1  */
#define EMMC_EMMC_CAPABILITIES2_R_RETUNE_CNT_POS                         (8) /* Timer Count for Re-Tuning (UHS-I only) - 0x0: Re-Tuning Timer disabled - 0x1: 1  */
#define EMMC_EMMC_CAPABILITIES2_R_DRV_TYPED                              (1U << 6) /* Driver Type D Support (UHS-I only) This bit indicates support of Driver Type D f */
#define EMMC_EMMC_CAPABILITIES2_R_DRV_TYPEC                              (1U << 5) /* Driver Type C Support (UHS-I only) This bit indicates support of Driver Type C f */
#define EMMC_EMMC_CAPABILITIES2_R_DRV_TYPEA                              (1U << 4) /* Driver Type A Support (UHS-I only) This bit indicates support of Driver Type A f */
#define EMMC_EMMC_CAPABILITIES2_R_UHS2_SUPPORT                           (1U << 3) /* UHS-II Support (UHS-II only) This bit indicates whether Host Controller supports */
#define EMMC_EMMC_CAPABILITIES2_R_DDR50_SUPPORT                          (1U << 2) /* DDR50 Support (UHS-I only) Values: 0x0 (FALSE): DDR50 is not supported 0x1 (TRUE */
#define EMMC_EMMC_CAPABILITIES2_R_SDR104_SUPPORT                         (1U << 1) /* SDR104 Support (UHS-I only) This bit mentions that SDR104 requires tuning. Value */
#define EMMC_EMMC_CAPABILITIES2_R_SDR50_SUPPORT                          (1U << 0) /* SDR50 Support (UHS-I only) Thsi bit indicates that SDR50 is supported. The bit 1 */
#define EMMC_EMMC_CLK_CTRL_R_FREQ_SEL_MASK                               (0xFF << 8) /* SDCLK/RCLK Frequency Select. These bits are used to select the frequency of the  */
#define EMMC_EMMC_CLK_CTRL_R_FREQ_SEL_POS                                (8) /* SDCLK/RCLK Frequency Select. These bits are used to select the frequency of the  */
#define EMMC_EMMC_CLK_CTRL_R_UPPER_FREQ_SEL_MASK                         (0x3 << 6) /* These bits specify the upper 2 bits of 10-bit SDCLK/RCLK Frequency Select contro */
#define EMMC_EMMC_CLK_CTRL_R_UPPER_FREQ_SEL_POS                          (6) /* These bits specify the upper 2 bits of 10-bit SDCLK/RCLK Frequency Select contro */
#define EMMC_EMMC_CLK_CTRL_R_CLK_GEN_SELECT                              (1U << 5) /* Clock Generator Select. This bit is used to select the clock generator mode in S */
#define EMMC_EMMC_CLK_CTRL_R_PLL_ENABLE                                  (1U << 3) /* PLL Enable. This bit is used to activate the PLL (applicable when Host Version 4 */
#define EMMC_EMMC_CLK_CTRL_R_SD_CLK_EN                                   (1U << 2) /* SD/eMMC Clock Enable. This bit stops the SDCLK or RCLK when set to 0. The SDCLK/ */
#define EMMC_EMMC_CLK_CTRL_R_INTERNAL_CLK_STABLE                         (1U << 1) /* Internal Clock Stable This bit enables the Host Driver to check the clock stabil */
#define EMMC_EMMC_CLK_CTRL_R_INTERNAL_CLK_EN                             (1U << 0) /* Internal Clock Enable. This bit is set to 0 when the Host Driver is not using th */
#define EMMC_EMMC_CMD_R_CMD_INDEX_MASK                                   (0x3F << 8) /* Command Index. These bits are set to the command number that is specified in bit */
#define EMMC_EMMC_CMD_R_CMD_INDEX_POS                                    (8) /* Command Index. These bits are set to the command number that is specified in bit */
#define EMMC_EMMC_CMD_R_CMD_TYPE_MASK                                    (0x3 << 6) /* Command Type. These bits indicate the command type. Note: While issuing Abort CM */
#define EMMC_EMMC_CMD_R_CMD_TYPE_POS                                     (6) /* Command Type. These bits indicate the command type. Note: While issuing Abort CM */
#define EMMC_EMMC_CMD_R_DATA_PRESENT_SEL                                 (1U << 5) /* Data Present Select. This bit is set to 1 to indicate that data is present and t */
#define EMMC_EMMC_CMD_R_CMD_IDX_CHK_ENABLE                               (1U << 4) /* Command Index Check Enable. This bit enables the Host Controller to check the in */
#define EMMC_EMMC_CMD_R_CMD_CRC_CHK_ENABLE                               (1U << 3) /* Command CRC Check Enable. This bit enables the Host Controller to check the CRC  */
#define EMMC_EMMC_CMD_R_SUB_CMD_FLAG                                     (1U << 2) /* Sub Command Flag. This bit distinguishes between a main command and a sub comman */
#define EMMC_EMMC_CMD_R_RESP_TYPE_SELECT_MASK                            (0x3 << 0) /* Response Type Select. This bit indicates the type of response expected from the  */
#define EMMC_EMMC_CMD_R_RESP_TYPE_SELECT_POS                             (0) /* Response Type Select. This bit indicates the type of response expected from the  */
#define EMMC_EMMC_CQCAP_CRYPTO_SUPPORT                                   (1U << 28) /* Crypto Support    This bit indicates whether the Host Controller supports crypto */
#define EMMC_EMMC_CQCAP_CQCCAP_RSVD2_MASK                                (0xFFF << 16) /* These bits [27:16] of the CQCAP register are reserved. They always return 0. */
#define EMMC_EMMC_CQCAP_CQCCAP_RSVD2_POS                                 (16) /* These bits [27:16] of the CQCAP register are reserved. They always return 0. */
#define EMMC_EMMC_CQCAP_ITCFMUL_MASK                                     (0xF << 12) /* Internal Timer Clock Frequency Multiplier (ITCFMUL) This field indicates the fre */
#define EMMC_EMMC_CQCAP_ITCFMUL_POS                                      (12) /* Internal Timer Clock Frequency Multiplier (ITCFMUL) This field indicates the fre */
#define EMMC_EMMC_CQCAP_ITCFVAL_MASK                                     (0x3FF << 0) /* Internal Timer Clock Frequency Value (ITCFVAL) This field scales the frequency o */
#define EMMC_EMMC_CQCAP_ITCFVAL_POS                                      (0) /* Internal Timer Clock Frequency Value (ITCFVAL) This field scales the frequency o */
#define EMMC_EMMC_CURR_CAPABILITIES1_R_MAX_CUR_18V_MASK                  (0xFF << 16) /* Maximum Current for 1.8V This bit specifies the Maximum Current for 1.8V VDD1 po */
#define EMMC_EMMC_CURR_CAPABILITIES1_R_MAX_CUR_18V_POS                   (16) /* Maximum Current for 1.8V This bit specifies the Maximum Current for 1.8V VDD1 po */
#define EMMC_EMMC_CURR_CAPABILITIES1_R_MAX_CUR_30V_MASK                  (0xFF << 8) /* Maximum Current for 3.0V This bit specifies the Maximum Current for 3.0V VDD1 po */
#define EMMC_EMMC_CURR_CAPABILITIES1_R_MAX_CUR_30V_POS                   (8) /* Maximum Current for 3.0V This bit specifies the Maximum Current for 3.0V VDD1 po */
#define EMMC_EMMC_CURR_CAPABILITIES1_R_MAX_CUR_33V_MASK                  (0xFF << 0) /* Maximum Current for 3.3V This bit specifies the Maximum Current for 3.3V VDD1 po */
#define EMMC_EMMC_CURR_CAPABILITIES1_R_MAX_CUR_33V_POS                   (0) /* Maximum Current for 3.3V This bit specifies the Maximum Current for 3.3V VDD1 po */
#define EMMC_EMMC_CURR_CAPABILITIES2_R_MAX_CUR_VDD2_18V_MASK             (0xFF << 0) /* Maximum Current for 1.8V VDD2 This bit specifies the Maximum Current for 1.8V VD */
#define EMMC_EMMC_CURR_CAPABILITIES2_R_MAX_CUR_VDD2_18V_POS              (0) /* Maximum Current for 1.8V VDD2 This bit specifies the Maximum Current for 1.8V VD */
#define EMMC_EMMC_EMBEDDED_CTRL_R_BACK_END_PWR_CTRL_MASK                 (0x7F << 24) /* Back-End Power Control (SD Mode)  Each bit of this field controls back-end power */
#define EMMC_EMMC_EMBEDDED_CTRL_R_BACK_END_PWR_CTRL_POS                  (24) /* Back-End Power Control (SD Mode)  Each bit of this field controls back-end power */
#define EMMC_EMMC_EMBEDDED_CTRL_R_INT_PIN_SEL_MASK                       (0x7 << 20) /* Interrupt Pin Select  These bits enable the interrupt pin inputs. - 000 : Interr */
#define EMMC_EMMC_EMBEDDED_CTRL_R_INT_PIN_SEL_POS                        (20) /* Interrupt Pin Select  These bits enable the interrupt pin inputs. - 000 : Interr */
#define EMMC_EMMC_EMBEDDED_CTRL_R_CLK_PIN_SEL_MASK                       (0x7 << 16) /* Clock Pin Select (SD Mode)  This bit is selected by one of clock pin outputs. -  */
#define EMMC_EMMC_EMBEDDED_CTRL_R_CLK_PIN_SEL_POS                        (16) /* Clock Pin Select (SD Mode)  This bit is selected by one of clock pin outputs. -  */
#define EMMC_EMMC_EMBEDDED_CTRL_R_BUS_WIDTH_PRESET_MASK                  (0x7F << 8) /* Bus Width Preset (SD Mode)  Each bit of this field specifies the bus width for e */
#define EMMC_EMMC_EMBEDDED_CTRL_R_BUS_WIDTH_PRESET_POS                   (8) /* Bus Width Preset (SD Mode)  Each bit of this field specifies the bus width for e */
#define EMMC_EMMC_EMBEDDED_CTRL_R_NUM_INT_PIN_MASK                       (0x3 << 4) /* Number of Interrupt Input Pins  This field indicates support of interrupt input  */
#define EMMC_EMMC_EMBEDDED_CTRL_R_NUM_INT_PIN_POS                        (4) /* Number of Interrupt Input Pins  This field indicates support of interrupt input  */
#define EMMC_EMMC_EMBEDDED_CTRL_R_NUM_CLK_PIN_MASK                       (0x7 << 0) /* Number of Clock Pins (SD Mode)  This field indicates support of clock pins to se */
#define EMMC_EMMC_EMBEDDED_CTRL_R_NUM_CLK_PIN_POS                        (0) /* Number of Clock Pins (SD Mode)  This field indicates support of clock pins to se */
#define EMMC_EMMC_EMMC_CTRL_R_EMMC_RST_N_OE                              (1U << 3) /* Output Enable control for EMMC Device Reset signal PAD control. This field drive */
#define EMMC_EMMC_EMMC_CTRL_R_EMMC_RST_N                                 (1U << 2) /* EMMC Device Reset signal control. This register field controls the sd_rst_n outp */
#define EMMC_EMMC_EMMC_CTRL_R_DISABLE_DATA_CRC_CHK                       (1U << 1) /* Disable Data CRC Check This bit controls masking of CRC16 error for Card Write i */
#define EMMC_EMMC_EMMC_CTRL_R_CARD_IS_EMMC                               (1U << 0) /* eMMC Card present This bit indicates the type of card connected. An application  */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_VENDOR_ERR_SIGNAL_EN3            (1U << 15) /* The 16th bit of Error Interrupt Signal Enable is reserved. Values:  0x0 (FALSE): */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_VENDOR_ERR_SIGNAL_EN2            (1U << 14) /* The 15th bit of Error Interrupt Signal Enable is reserved. Values:  0x0 (FALSE): */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_VENDOR_ERR_SIGNAL_EN1            (1U << 13) /* The 14th bit of Error Interrupt Signal Enable is reserved. Values:  0x0 (FALSE): */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_BOOT_ACK_ERR_SIGNAL_EN           (1U << 12) /* Boot Acknowledgment Error (eMMC Mode only). Setting this bit to 1 enables genera */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_RESP_ERR_SIGNAL_EN               (1U << 11) /* Response Error Signal Enable (SD Mode only) Values:  0x0 (FALSE): Masked 0x1 (TR */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_TUNING_ERR_SIGNAL_EN             (1U << 10) /* Tuning Error Signal Enable (UHS-I Mode only) Values:  0x0 (FALSE): Masked 0x1 (T */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_ADMA_ERR_SIGNAL_EN               (1U << 9) /* ADMA Error Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_AUTO_CMD_ERR_SIGNAL_EN           (1U << 8) /* Auto CMD Error Signal Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Masked 0x */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_CUR_LMT_ERR_SIGNAL_EN            (1U << 7) /* Current Limit Error Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabl */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_DATA_END_BIT_ERR_SIGNAL_EN       (1U << 6) /* Data End Bit Error Signal Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Maske */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_DATA_CRC_ERR_SIGNAL_EN           (1U << 5) /* Data CRC Error Signal Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Masked 0x */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_DATA_TOUT_ERR_SIGNAL_EN          (1U << 4) /* Data Timeout Error Signal Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Maske */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_CMD_IDX_ERR_SIGNAL_EN            (1U << 3) /* Command Index Error Signal Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Mask */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_CMD_END_BIT_ERR_SIGNAL_EN        (1U << 2) /* Command End Bit Error Signal Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Ma */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_CMD_CRC_ERR_SIGNAL_EN            (1U << 1) /* Command CRC Error Signal Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Masked */
#define EMMC_EMMC_ERROR_INT_SIGNAL_EN_R_CMD_TOUT_ERR_SIGNAL_EN           (1U << 0) /* Command Timeout Error Signal Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Ma */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_VENDOR_ERR_STAT_EN3                (1U << 15) /* The 15th bit of Error Interrupt Status Enable register is reserved. Values:  0x0 */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_VENDOR_ERR_STAT_EN2                (1U << 14) /* The 14th bit of Error Interrupt Status Enable register is reserved. Values:  0x0 */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_VENDOR_ERR_STAT_EN1                (1U << 13) /* The 13th bit of Error Interrupt Status Enable register is reserved. Values:  0x0 */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_BOOT_ACK_ERR_STAT_EN               (1U << 12) /* Boot Acknowledgment Error (eMMC Mode only) Setting this bit to 1 enables setting */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_RESP_ERR_STAT_EN                   (1U << 11) /* Response Error Status Enable (SD Mode only) Values:  0x0 (FALSE): Masked 0x1 (TR */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_TUNING_ERR_STAT_EN                 (1U << 10) /* Tuning Error Status Enable (UHS-I Mode only) Values:  0x0 (FALSE): Masked 0x1 (T */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_ADMA_ERR_STAT_EN                   (1U << 9) /* ADMA Error Status Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_AUTO_CMD_ERR_STAT_EN               (1U << 8) /* Auto CMD Error Status Enable (SD/eMMC Mode only). Values:  0x0 (FALSE): Masked 0 */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_CUR_LMT_ERR_STAT_EN                (1U << 7) /* Current Limit Error Status Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabl */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_DATA_END_BIT_ERR_STAT_EN           (1U << 6) /* Data End Bit Error Status Enable (SD/eMMC Mode only). Values:  0x0 (FALSE): Mask */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_DATA_CRC_ERR_STAT_EN               (1U << 5) /* Data CRC Error Status Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Masked 0x */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_DATA_TOUT_ERR_STAT_EN              (1U << 4) /* Data Timeout Error Status Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Maske */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_CMD_IDX_ERR_STAT_EN                (1U << 3) /* Command Index Error Status Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Mask */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_CMD_END_BIT_ERR_STAT_EN            (1U << 2) /* Command End Bit Error Status Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Ma */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_CMD_CRC_ERR_STAT_EN                (1U << 1) /* Command CRC Error Status Enable (SD/eMMC Mode only) Values:  0x0 (FALSE): Masked */
#define EMMC_EMMC_ERROR_INT_STAT_EN_R_CMD_TOUT_ERR_STAT_EN               (1U << 0) /* Command Timeout Error Status Enable (SD/eMMC Mode only). Values:  0x0 (FALSE): M */
#define EMMC_EMMC_ERROR_INT_STAT_R_BOOT_ACK_ERR                          (1U << 12) /* Boot Acknowledgement Error. This bit is set when there is a timeout for boot ack */
#define EMMC_EMMC_ERROR_INT_STAT_R_RESP_ERR                              (1U << 11) /* Response Error. Host Controller Version 4.00 supports response error check funct */
#define EMMC_EMMC_ERROR_INT_STAT_R_TUNING_ERR                            (1U << 10) /* Tuning Error. This bit is set when an unrecoverable error is detected in a tunin */
#define EMMC_EMMC_ERROR_INT_STAT_R_ADMA_ERR                              (1U << 9) /* ADMA Error. This bit is set when the Host Controller detects error during ADMA-b */
#define EMMC_EMMC_ERROR_INT_STAT_R_AUTO_CMD_ERR                          (1U << 8) /* Auto CMD Error. This error status is used by Auto CMD12 and Auto CMD23 in SD/eMM */
#define EMMC_EMMC_ERROR_INT_STAT_R_CUR_LMT_ERR                           (1U << 7) /* Current Limit Error. By setting the SD Bus Power bit in the Power Control regist */
#define EMMC_EMMC_ERROR_INT_STAT_R_DATA_END_BIT_ERR                      (1U << 6) /* Data End Bit Error. This error occurs in SD/eMMC mode either when detecting 0 at */
#define EMMC_EMMC_ERROR_INT_STAT_R_DATA_CRC_ERR                          (1U << 5) /* Data CRC Error. This error occurs in SD/eMMC mode when detecting CRC error when  */
#define EMMC_EMMC_ERROR_INT_STAT_R_DATA_TOUT_ERR                         (1U << 4) /* Data Timeout Error. This bit is set in SD/eMMC mode when detecting one of the fo */
#define EMMC_EMMC_ERROR_INT_STAT_R_CMD_IDX_ERR                           (1U << 3) /* Command Index Error. This bit is set if a Command Index error occurs in the comm */
#define EMMC_EMMC_ERROR_INT_STAT_R_CMD_END_BIT_ERR                       (1U << 2) /* Command End Bit Error. This bit is set when detecting that the end bit of a comm */
#define EMMC_EMMC_ERROR_INT_STAT_R_CMD_CRC_ERR                           (1U << 1) /* Command CRC Error. Command CRC Error is generated in SD/eMMC mode for following  */
#define EMMC_EMMC_ERROR_INT_STAT_R_CMD_TOUT_ERR                          (1U << 0) /* Command Timeout Error. In SD/eMMC Mode,this bit is set only if no response is re */
#define EMMC_EMMC_FORCE_AUTO_CMD_STAT_R_FORCE_CMD_NOT_ISSUED_AUTO_CMD12  (1U << 7) /* Force Event for Command Not Issued By Auto CMD12 Error Values: 0x1 (TRUE): Comma */
#define EMMC_EMMC_FORCE_AUTO_CMD_STAT_R_FORCE_AUTO_CMD_RESP_ERR          (1U << 5) /* Force Event for Auto CMD Response Error Values: 0x1 (TRUE): Auto CMD Response Er */
#define EMMC_EMMC_FORCE_AUTO_CMD_STAT_R_FORCE_AUTO_CMD_IDX_ERR           (1U << 4) /* Force Event for Auto CMD Index Error Values: 0x1 (TRUE): Auto CMD Index Error St */
#define EMMC_EMMC_FORCE_AUTO_CMD_STAT_R_FORCE_AUTO_CMD_EBIT_ERR          (1U << 3) /* Force Event for Auto CMD End Bit Error Values: 0x1 (TRUE): Auto CMD End Bit Erro */
#define EMMC_EMMC_FORCE_AUTO_CMD_STAT_R_FORCE_AUTO_CMD_CRC_ERR           (1U << 2) /* Force Event for Auto CMD CRC Error Values: 0x1 (TRUE): Auto CMD CRC Error Status */
#define EMMC_EMMC_FORCE_AUTO_CMD_STAT_R_FORCE_AUTO_CMD_TOUT_ERR          (1U << 1) /* Force Event for Auto CMD Timeout Error Values: 0x1 (TRUE): Auto CMD Timeout Erro */
#define EMMC_EMMC_FORCE_AUTO_CMD_STAT_R_FORCE_AUTO_CMD12_NOT_EXEC        (1U << 0) /* Force Event for Auto CMD12 Not Executed Values: 0x1 (TRUE): Auto CMD12 Not Execu */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_VENDOR_ERR3               (1U << 15) /* This bit (FORCE_VENDOR_ERR3) of the FORCE_ERROR_INT_STAT_R register is reserved. */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_VENDOR_ERR2               (1U << 14) /* This bit (FORCE_VENDOR_ERR2) of the FORCE_ERROR_INT_STAT_R register is reserved. */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_VENDOR_ERR1               (1U << 13) /* This bit (FORCE_VENDOR_ERR1) of the FORCE_ERROR_INT_STAT_R register is reserved. */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_BOOT_ACK_ERR              (1U << 12) /* Force Event for Boot Ack error Values:  0x0 (FALSE): Not Affected 0x1 (TRUE): Bo */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_RESP_ERR                  (1U << 11) /* Force Event for Response Error (SD Mode only) Values: 0x0 (FALSE): Not Affected  */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_TUNING_ERR                (1U << 10) /* Force Event for Tuning Error (UHS-I Mode only) */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_ADMA_ERR                  (1U << 9) /* Force Event for ADMA Error Values: 0x0 (FALSE): Not Affected 0x1 (TRUE): ADMA Er */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_AUTO_CMD_ERR              (1U << 8) /* Force Event for Auto CMD Error (SD/eMMC Mode only) Values: 0x0 (FALSE): Not Affe */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_CUR_LMT_ERR               (1U << 7) /* Force Event for Current Limit Error Values: 0x0 (FALSE): Not Affected 0x1 (TRUE) */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_DATA_END_BIT_ERR          (1U << 6) /* Force Event for Data End Bit Error (SD/eMMC Mode only) Values: 0x0 (FALSE): Not  */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_DATA_CRC_ERR              (1U << 5) /* Force Event for Data CRC Error (SD/eMMC Mode only) Values: 0x0 (FALSE): Not Affe */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_DATA_TOUT_ERR             (1U << 4) /* Force Event for Data Timeout Error (SD/eMMC Mode only) Values: 0x0 (FALSE): Not  */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_CMD_IDX_ERR               (1U << 3) /* Force Event for Command Index Error (SD/eMMC Mode only) Values: 0x0 (FALSE): Not */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_CMD_END_BIT_ERR           (1U << 2) /* Force Event for Command End Bit Error (SD/eMMC Mode only) Values: 0x0 (FALSE): N */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_CMD_CRC_ERR               (1U << 1) /* Force Event for Command CRC Error (SD/eMMC Mode only) Values: 0x0 (FALSE): Not A */
#define EMMC_EMMC_FORCE_ERROR_INT_STAT_R_FORCE_CMD_TOUT_ERR              (1U << 0) /* Force Event for Command Timeout Error (SD/eMMC Mode only) Values: 0x0 (FALSE): N */
#define EMMC_EMMC_HOST_CNTRL_VERS_R_VENDOR_VERSION_NUM_MASK              (0xFF << 8) /* Vendor Version Number               This field is reserved for the vendor versio */
#define EMMC_EMMC_HOST_CNTRL_VERS_R_VENDOR_VERSION_NUM_POS               (8) /* Vendor Version Number               This field is reserved for the vendor versio */
#define EMMC_EMMC_HOST_CNTRL_VERS_R_SPEC_VERSION_NUM_MASK                (0xFF << 0) /* Specification Version Number These bits indicate the Host controller specificati */
#define EMMC_EMMC_HOST_CNTRL_VERS_R_SPEC_VERSION_NUM_POS                 (0) /* Specification Version Number These bits indicate the Host controller specificati */
#define EMMC_EMMC_HOST_CTRL1_R_CARD_DETECT_SIG_SEL                       (1U << 7) /* Card Detect Signal Selection. This bit selects a source for card detection. When */
#define EMMC_EMMC_HOST_CTRL1_R_CARD_DETECT_TEST_LVL                      (1U << 6) /* Card Detect Test Level. This bit is enabled while the Card Detect Signal Selecti */
#define EMMC_EMMC_HOST_CTRL1_R_EXT_DAT_XFER                              (1U << 5) /* Extended Data Transfer Width. This bit controls 8-bit bus width mode of embedded */
#define EMMC_EMMC_HOST_CTRL1_R_DMA_SEL_MASK                              (0x3 << 3) /* DMA Select. This field is used to select the DMA type. When Host Version 4 Enabl */
#define EMMC_EMMC_HOST_CTRL1_R_DMA_SEL_POS                               (3) /* DMA Select. This field is used to select the DMA type. When Host Version 4 Enabl */
#define EMMC_EMMC_HOST_CTRL1_R_HIGH_SPEED_EN                             (1U << 2) /* High Speed Enable (SD/eMMC Mode only). In SD/eMMC mode, this bit is used to dete */
#define EMMC_EMMC_HOST_CTRL1_R_DAT_XFER_WIDTH                            (1U << 1) /* Data Transfer Width. For SD/eMMC mode,this bit selects the data transfer width o */
#define EMMC_EMMC_HOST_CTRL1_R_LED_CTRL                                  (1U << 0) /* LED Control. This bit is used to caution the user not to remove the card while t */
#define EMMC_EMMC_HOST_CTRL2_R_PRESET_VAL_ENABLE                         (1U << 15) /* Preset Value Enable This bit enables automatic selection of SDCLK frequency and  */
#define EMMC_EMMC_HOST_CTRL2_R_ASYNC_INT_ENABLE                          (1U << 14) /* Asynchronous Interrupt Enable This bit can be set if a card supports asynchronou */
#define EMMC_EMMC_HOST_CTRL2_R_ADDRESSING                                (1U << 13) /* 64-bit Addressing This bit is effective when Host Version 4 Enable is set to 1.  */
#define EMMC_EMMC_HOST_CTRL2_R_HOST_VER4_ENABLE                          (1U << 12) /* Host Version 4 Enable This bit selects either Version 3.00 compatible mode or Ve */
#define EMMC_EMMC_HOST_CTRL2_R_CMD23_ENABLE                              (1U << 11) /* CMD23 Enable If the card supports CMD23, this bit is set to 1. This bit is used  */
#define EMMC_EMMC_HOST_CTRL2_R_ADMA2_LEN_MODE                            (1U << 10) /* ADMA2 Length Mode This bit selects ADMA2 Length mode to be either 16-bit or 26-b */
#define EMMC_EMMC_HOST_CTRL2_R_UHS2_IF_ENABLE                            (1U << 8) /* UHS-II Interface Enable This bit is used to enable the UHS-II Interface. The val */
#define EMMC_EMMC_HOST_CTRL2_R_SAMPLE_CLK_SEL                            (1U << 7) /* Sampling Clock Select This bit is used by the Host Controller to select the samp */
#define EMMC_EMMC_HOST_CTRL2_R_EXEC_TUNING                               (1U << 6) /* Execute Tuning This bit is set to 1 to start the tuning procedure in UHS-I/eMMC  */
#define EMMC_EMMC_HOST_CTRL2_R_DRV_STRENGTH_SEL_MASK                     (0x3 << 4) /* Driver Strength Select This bit is used to select the Host Controller output dri */
#define EMMC_EMMC_HOST_CTRL2_R_DRV_STRENGTH_SEL_POS                      (4) /* Driver Strength Select This bit is used to select the Host Controller output dri */
#define EMMC_EMMC_HOST_CTRL2_R_SIGNALING_EN                              (1U << 3) /* 1.8V Signaling Enable This bit controls voltage regulator for I/O cell in UHS-I/ */
#define EMMC_EMMC_HOST_CTRL2_R_UHS_MODE_SEL_MASK                         (0x7 << 0) /* UHS Mode/eMMC Speed Mode Select These bits are used to select UHS mode in the SD */
#define EMMC_EMMC_HOST_CTRL2_R_UHS_MODE_SEL_POS                          (0) /* UHS Mode/eMMC Speed Mode Select These bits are used to select UHS mode in the SD */
#define EMMC_EMMC_MBIU_CTRL_R_BURST_INCR16_EN                            (1U << 3) /* INCR16 Burst Controls generation of INCR16 transfers on Master interface. Values */
#define EMMC_EMMC_MBIU_CTRL_R_BURST_INCR8_EN                             (1U << 2) /* INCR8 Burst Controls generation of INCR8 transfers on Master interface. Values:  */
#define EMMC_EMMC_MBIU_CTRL_R_BURST_INCR4_EN                             (1U << 1) /* INCR4 Burst Controls generation of INCR4 transfers on Master interface. Values:  */
#define EMMC_EMMC_MBIU_CTRL_R_UNDEFL_INCR_EN                             (1U << 0) /* Undefined INCR Burst Controls generation of undefined length INCR transfer on Ma */
#define EMMC_EMMC_MSHC_CTRL_R_SW_CG_DIS                                  (1U << 4) /* Internal clock gating disable control This bit must be used to disable IP's inte */
#define EMMC_EMMC_MSHC_CTRL_R_CMD_CONFLICT_CHECK                         (1U << 0) /* Command conflict check This bit enables command conflict check. Note: DWC_mshc c */
#define EMMC_EMMC_MSHC_VER_ID_R_MSHC_VER_ID_MASK                         (0xFFFFFFFF << 0) /* Current release number This field indicates the Synopsys DesignWare Cores DWC_ms */
#define EMMC_EMMC_MSHC_VER_ID_R_MSHC_VER_ID_POS                          (0) /* Current release number This field indicates the Synopsys DesignWare Cores DWC_ms */
#define EMMC_EMMC_MSHC_VER_TYPE_R_MSHC_VER_TYPE_MASK                     (0xFFFFFFFF << 0) /* Current release type This field indicates the Synopsys DesignWare Cores DWC_mshc */
#define EMMC_EMMC_MSHC_VER_TYPE_R_MSHC_VER_TYPE_POS                      (0) /* Current release type This field indicates the Synopsys DesignWare Cores DWC_mshc */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_CQE_EVENT_SIGNAL_EN             (1U << 14) /* Command Queuing Engine Event Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRU */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_FX_EVENT_SIGNAL_EN              (1U << 13) /* FX Event Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_RE_TUNE_EVENT_SIGNAL_EN         (1U << 12) /* Re-Tuning Event (UHS-I only) Signal Enable. Values:  0x0 (FALSE): Masked 0x1 (TR */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_INT_C_SIGNAL_EN                 (1U << 11) /* INT_C (Embedded) Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_INT_B_SIGNAL_EN                 (1U << 10) /* INT_B (Embedded) Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_INT_A_SIGNAL_EN                 (1U << 9) /* INT_A (Embedded) Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_CARD_INTERRUPT_SIGNAL_EN        (1U << 8) /* Card Interrupt Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_CARD_REMOVAL_SIGNAL_EN          (1U << 7) /* Card Removal Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_CARD_INSERTION_SIGNAL_EN        (1U << 6) /* Card Insertion Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_BUF_RD_READY_SIGNAL_EN          (1U << 5) /* Buffer Read Ready Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_BUF_WR_READY_SIGNAL_EN          (1U << 4) /* Buffer Write Ready Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enable */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_DMA_INTERRUPT_SIGNAL_EN         (1U << 3) /* DMA Interrupt Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_BGAP_EVENT_SIGNAL_EN            (1U << 2) /* Block Gap Event Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_XFER_COMPLETE_SIGNAL_EN         (1U << 1) /* Transfer Complete Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_SIGNAL_EN_R_CMD_COMPLETE_SIGNAL_EN          (1U << 0) /* Command Complete Signal Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_CQE_EVENT_STAT_EN                 (1U << 14) /* CQE Event Status Enable  Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_FX_EVENT_STAT_EN                  (1U << 13) /* FX Event Status Enable This bit is added from Version 4.10.  Values:  0x0 (FALSE */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_RE_TUNE_EVENT_STAT_EN             (1U << 12) /* Re-Tuning Event (UHS-I only) Status Enable  Values:  0x0 (FALSE): Masked 0x1 (TR */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_INT_C_STAT_EN                     (1U << 11) /* INT_C (Embedded) Status Enable  If this bit is set to 0, the Host Controller cle */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_INT_B_STAT_EN                     (1U << 10) /* INT_B (Embedded) Status Enable  If this bit is set to 0, the Host Controller cle */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_INT_A_STAT_EN                     (1U << 9) /* INT_A (Embedded) Status Enable  If this bit is set to 0, the Host Controller cle */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_CARD_INTERRUPT_STAT_EN            (1U << 8) /* Card Interrupt Status Enable  If this bit is set to 0, the Host Controller clear */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_CARD_REMOVAL_STAT_EN              (1U << 7) /* Card Removal Status Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_CARD_INSERTION_STAT_EN            (1U << 6) /* Card Insertion Status Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_BUF_RD_READY_STAT_EN              (1U << 5) /* Buffer Read Ready Status Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_BUF_WR_READY_STAT_EN              (1U << 4) /* Buffer Write Ready Status Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enable */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_DMA_INTERRUPT_STAT_EN             (1U << 3) /* DMA Interrupt Status Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_BGAP_EVENT_STAT_EN                (1U << 2) /* Block Gap Event Status Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_XFER_COMPLETE_STAT_EN             (1U << 1) /* Transfer Complete Status Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_STAT_EN_R_CMD_COMPLETE_STAT_EN              (1U << 0) /* Command Complete Status Enable Values:  0x0 (FALSE): Masked 0x1 (TRUE): Enabled */
#define EMMC_EMMC_NORMAL_INT_STAT_R_ERR_INTERRUPT                        (1U << 15) /* Error Interrupt. If any of the bits in the Error Interrupt Status register are s */
#define EMMC_EMMC_NORMAL_INT_STAT_R_CQE_EVENT                            (1U << 14) /* Command Queuing Event This status is set if Command Queuing/Crypto related event */
#define EMMC_EMMC_NORMAL_INT_STAT_R_FX_EVENT                             (1U << 13) /* FX Event. This status is set when R[14] of response register is set to 1 and Res */
#define EMMC_EMMC_NORMAL_INT_STAT_R_RE_TUNE_EVENT                        (1U << 12) /* Re-tuning Event. This bit is set if the Re-Tuning Request changes from 0 to 1. R */
#define EMMC_EMMC_NORMAL_INT_STAT_R_INT_C                                (1U << 11) /* INT_C (Embedded). This bit is set if INT_C is enabled and if INT_C# pin is in lo */
#define EMMC_EMMC_NORMAL_INT_STAT_R_INT_B                                (1U << 10) /* INT_B (Embedded). This bit is set if INT_B is enabled and if INT_B# pin is in lo */
#define EMMC_EMMC_NORMAL_INT_STAT_R_INT_A                                (1U << 9) /* INT_A (Embedded). This bit is set if INT_A is enabled and if INT_A# pin is in lo */
#define EMMC_EMMC_NORMAL_INT_STAT_R_CARD_INTERRUPT                       (1U << 8) /* Card Interrupt. This bit reflects the synchronized value of: - DAT[1] Interrupt  */
#define EMMC_EMMC_NORMAL_INT_STAT_R_CARD_REMOVAL_STAT_R                  (1U << 7) /* Card Removal. This bit is set if the Card Inserted in the Present State register */
#define EMMC_EMMC_NORMAL_INT_STAT_R_CARD_INSERTION                       (1U << 6) /* Card Insertion This bit is set if the Card Inserted in the Present State registe */
#define EMMC_EMMC_NORMAL_INT_STAT_R_BUF_RD_READY                         (1U << 5) /* Buffer Read Ready. This bit is set if the Buffer Read Enable changes from 0 to 1 */
#define EMMC_EMMC_NORMAL_INT_STAT_R_BUF_WR_READY                         (1U << 4) /* Buffer Write Ready. This bit is set if the Buffer Write Enable changes from 0 to */
#define EMMC_EMMC_NORMAL_INT_STAT_R_DMA_INTERRUPT                        (1U << 3) /* DMA Interrupt. This bit is set if the Host Controller detects the SDMA Buffer Bo */
#define EMMC_EMMC_NORMAL_INT_STAT_R_BGAP_EVENT                           (1U << 2) /* Block Gap Event. This bit is set when both read/write transaction is stopped at  */
#define EMMC_EMMC_NORMAL_INT_STAT_R_XFER_COMPLETE                        (1U << 1) /* Transfer Complete. This bit is set when a read/write transfer and a command with */
#define EMMC_EMMC_NORMAL_INT_STAT_R_CMD_COMPLETE                         (1U << 0) /* Command Complete. In an SD/eMMC Mode, this bit is set when the end bit of a resp */
#define EMMC_EMMC_PRESET_DDR50_R_DRV_SEL_VAL_MASK                        (0x3 << 14) /* Driver Strength Select Value These bits indicate Driver strength value supported */
#define EMMC_EMMC_PRESET_DDR50_R_DRV_SEL_VAL_POS                         (14) /* Driver Strength Select Value These bits indicate Driver strength value supported */
#define EMMC_EMMC_PRESET_DDR50_R_CLK_GEN_SEL_VAL                         (1U << 10) /* Clock Generator Select Value This bit is effective when Host Controller supports */
#define EMMC_EMMC_PRESET_DDR50_R_FREQ_SEL_VAL_MASK                       (0x3FF << 0) /* SDCLK/RCLK Frequency Select Value These bits specify a 10-bit preset value that  */
#define EMMC_EMMC_PRESET_DDR50_R_FREQ_SEL_VAL_POS                        (0) /* SDCLK/RCLK Frequency Select Value These bits specify a 10-bit preset value that  */
#define EMMC_EMMC_PRESET_DS_R_DRV_SEL_VAL_MASK                           (0x3 << 14) /* Driver Strength Select Value These bits indicate the Driver strength value suppo */
#define EMMC_EMMC_PRESET_DS_R_DRV_SEL_VAL_POS                            (14) /* Driver Strength Select Value These bits indicate the Driver strength value suppo */
#define EMMC_EMMC_PRESET_DS_R_CLK_GEN_SEL_VAL                            (1U << 10) /* Clock Generator Select Value This bit is effective when Host Controller supports */
#define EMMC_EMMC_PRESET_DS_R_FREQ_SEL_VAL_MASK                          (0x3FF << 0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_DS_R_FREQ_SEL_VAL_POS                           (0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_HS_R_DRV_SEL_VAL_MASK                           (0x3 << 14) /* Driver Strength Select Value These bits indicate the Driver strength value suppo */
#define EMMC_EMMC_PRESET_HS_R_DRV_SEL_VAL_POS                            (14) /* Driver Strength Select Value These bits indicate the Driver strength value suppo */
#define EMMC_EMMC_PRESET_HS_R_CLK_GEN_SEL_VAL                            (1U << 10) /* Clock Generator Select Value This bit is effective when Host Controller supports */
#define EMMC_EMMC_PRESET_HS_R_FREQ_SEL_VAL_MASK                          (0x3FF << 0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_HS_R_FREQ_SEL_VAL_POS                           (0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_INIT_R_DRV_SEL_VAL_MASK                         (0x3 << 14) /* Driver Strength Select Value These bits indicate that the Driver strength is sup */
#define EMMC_EMMC_PRESET_INIT_R_DRV_SEL_VAL_POS                          (14) /* Driver Strength Select Value These bits indicate that the Driver strength is sup */
#define EMMC_EMMC_PRESET_INIT_R_CLK_GEN_SEL_VAL                          (1U << 10) /* Clock Generator Select Value This bit is effective when the Host Controller supp */
#define EMMC_EMMC_PRESET_INIT_R_FREQ_SEL_VAL_MASK                        (0x3FF << 0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_INIT_R_FREQ_SEL_VAL_POS                         (0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_SDR104_R_DRV_SEL_VAL_MASK                       (0x3 << 14) /* Driver Strength Select Value These bits indicate Driver strength value supported */
#define EMMC_EMMC_PRESET_SDR104_R_DRV_SEL_VAL_POS                        (14) /* Driver Strength Select Value These bits indicate Driver strength value supported */
#define EMMC_EMMC_PRESET_SDR104_R_CLK_GEN_SEL_VAL                        (1U << 10) /* Clock Generator Select Value This bit is effective when Host Controller supports */
#define EMMC_EMMC_PRESET_SDR104_R_FREQ_SEL_VAL_MASK                      (0x3FF << 0) /* SDCLK/RCLK Frequency Select Value These bits specify a 10-bit preset value that  */
#define EMMC_EMMC_PRESET_SDR104_R_FREQ_SEL_VAL_POS                       (0) /* SDCLK/RCLK Frequency Select Value These bits specify a 10-bit preset value that  */
#define EMMC_EMMC_PRESET_SDR12_R_DRV_SEL_VAL_MASK                        (0x3 << 14) /* Driver Strength Select Value These bits indicate the Driver strength value suppo */
#define EMMC_EMMC_PRESET_SDR12_R_DRV_SEL_VAL_POS                         (14) /* Driver Strength Select Value These bits indicate the Driver strength value suppo */
#define EMMC_EMMC_PRESET_SDR12_R_CLK_GEN_SEL_VAL                         (1U << 10) /* Clock Generator Select Value This bit is effective when Host Controller supports */
#define EMMC_EMMC_PRESET_SDR12_R_FREQ_SEL_VAL_MASK                       (0x3FF << 0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_SDR12_R_FREQ_SEL_VAL_POS                        (0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_SDR25_R_DRV_SEL_VAL_MASK                        (0x3 << 14) /* Driver Strength Select Value These bits indicate the Driver strength value suppo */
#define EMMC_EMMC_PRESET_SDR25_R_DRV_SEL_VAL_POS                         (14) /* Driver Strength Select Value These bits indicate the Driver strength value suppo */
#define EMMC_EMMC_PRESET_SDR25_R_CLK_GEN_SEL_VAL                         (1U << 10) /* Clock Generator Select Value This bit is effective when Host Controller supports */
#define EMMC_EMMC_PRESET_SDR25_R_FREQ_SEL_VAL_MASK                       (0x3FF << 0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_SDR25_R_FREQ_SEL_VAL_POS                        (0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_SDR50_R_DRV_SEL_VAL_MASK                        (0x3 << 14) /* Driver Strength Select Value These bits indicate Driver strength value supported */
#define EMMC_EMMC_PRESET_SDR50_R_DRV_SEL_VAL_POS                         (14) /* Driver Strength Select Value These bits indicate Driver strength value supported */
#define EMMC_EMMC_PRESET_SDR50_R_CLK_GEN_SEL_VAL                         (1U << 10) /* Clock Generator Select Value This bit is effective when Host Controller supports */
#define EMMC_EMMC_PRESET_SDR50_R_FREQ_SEL_VAL_MASK                       (0x3FF << 0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_SDR50_R_FREQ_SEL_VAL_POS                        (0) /* SDCLK/RCLK Frequency Select Value 10-bit preset value to be set in SDCLK/RCLK Fr */
#define EMMC_EMMC_PRESET_UHS2_R_DRV_SEL_VAL_MASK                         (0x3 << 14) /* Driver Strength Select Value These bits indicate the Driver strength value suppo */
#define EMMC_EMMC_PRESET_UHS2_R_DRV_SEL_VAL_POS                          (14) /* Driver Strength Select Value These bits indicate the Driver strength value suppo */
#define EMMC_EMMC_PRESET_UHS2_R_CLK_GEN_SEL_VAL                          (1U << 10) /* Clock Generator Select Value This bit is effective when the Host Controller supp */
#define EMMC_EMMC_PRESET_UHS2_R_FREQ_SEL_VAL_MASK                        (0x3FF << 0) /* SDCLK/RCLK Frequency Select Value These bits specify the 10-bit preset value tha */
#define EMMC_EMMC_PRESET_UHS2_R_FREQ_SEL_VAL_POS                         (0) /* SDCLK/RCLK Frequency Select Value These bits specify the 10-bit preset value tha */
#define EMMC_EMMC_PSTATE_UHS2_IF_DETECT                                  (1U << 31) /* UHS-II Interface Detection. For SD/eMMC mode, this bit always returns 0.  Values */
#define EMMC_EMMC_PSTATE_LANE_SYNC                                       (1U << 30) /* Lane Synchronization. For SD/eMMC mode, this bit always returns 0.  Values: 0x0  */
#define EMMC_EMMC_PSTATE_IN_DORMANT_ST                                   (1U << 29) /* In Dormant Status For SD/eMMC mode, this bit always returns 0.  Values: 0x0 (FAL */
#define EMMC_EMMC_PSTATE_SUB_CMD_STAT                                    (1U << 28) /* Sub Command Status. This bit is used to distinguish between a main command and a */
#define EMMC_EMMC_PSTATE_CMD_ISSUE_ERR                                   (1U << 27) /* Command Not Issued by Error. This bit is set if a command cannot be issued after */
#define EMMC_EMMC_PSTATE_HOST_REG_VOL                                    (1U << 25) /* Host Regulator Voltage Stable. This bit is used to check whether the host regula */
#define EMMC_EMMC_PSTATE_CMD_LINE_LVL                                    (1U << 24) /* Command-Line Signal Level. This bit is used to check the CMD line level to recov */
#define EMMC_EMMC_PSTATE_DAT_3_0_MASK                                    (0xF << 20) /* DAT[3:0] Line Signal Level. This bit is used to check the DAT line level to reco */
#define EMMC_EMMC_PSTATE_DAT_3_0_POS                                     (20) /* DAT[3:0] Line Signal Level. This bit is used to check the DAT line level to reco */
#define EMMC_EMMC_PSTATE_WR_PROTECT_SW_LVL                               (1U << 19) /* Write Protect Switch Pin Level. This bit is supported only for memory and combo  */
#define EMMC_EMMC_PSTATE_CARD_DETECT_PIN_LEVEL                           (1U << 18) /* Card Detect Pin Level. This bit reflects the inverse synchronized value of the c */
#define EMMC_EMMC_PSTATE_CARD_STABLE                                     (1U << 17) /* Card Stable. This bit indicates the stability of the Card Detect Pin Level. A ca */
#define EMMC_EMMC_PSTATE_CARD_INSERTED                                   (1U << 16) /* Card Inserted. This bit indicates whether a card has been inserted. The Host Con */
#define EMMC_EMMC_PSTATE_BUF_RD_ENABLE                                   (1U << 11) /* Buffer Read Enable. This bit is used for non-DMA transfers. This bit is set if v */
#define EMMC_EMMC_PSTATE_BUF_WR_ENABLE                                   (1U << 10) /* Buffer Write Enable. This bit is used for non-DMA transfers. This bit is set if  */
#define EMMC_EMMC_PSTATE_RD_XFER_ACTIVE                                  (1U << 9) /* Read Transfer Active. This bit indicates whether a read transfer is active for S */
#define EMMC_EMMC_PSTATE_WR_XFER_ACTIVE                                  (1U << 8) /* Write Transfer Active. This status indicates whether a write transfer is active  */
#define EMMC_EMMC_PSTATE_DAT_7_4_MASK                                    (0xF << 4) /* DAT[7:4] Line Signal Level. This bit is used to check the DAT line level to reco */
#define EMMC_EMMC_PSTATE_DAT_7_4_POS                                     (4) /* DAT[7:4] Line Signal Level. This bit is used to check the DAT line level to reco */
#define EMMC_EMMC_PSTATE_RE_TUNE_REQ                                     (1U << 3) /* Re-Tuning Request. DWC_mshc does not generate retuning request. The software mus */
#define EMMC_EMMC_PSTATE_DAT_LINE_ACTIVE                                 (1U << 2) /* DAT Line Active (SD/eMMC Mode only). This bit indicates whether one of the DAT l */
#define EMMC_EMMC_PSTATE_CMD_INHIBIT_DAT                                 (1U << 1) /* Command Inhibit (DAT). This bit is applicable for SD/eMMC mode and is generated  */
#define EMMC_EMMC_PSTATE_CMD_INHIBIT                                     (1U << 0) /* Command Inhibit (CMD). This bit indicates the following : - SD/eMMC mode: If thi */
#define EMMC_EMMC_PWR_CTRL_R_SD_BUS_VOL_VDD2_MASK                        (0x7 << 5) /* SD Bus Voltage Select for VDD2. This is irrelevant for SD/eMMC card.  Values: 0x */
#define EMMC_EMMC_PWR_CTRL_R_SD_BUS_VOL_VDD2_POS                         (5) /* SD Bus Voltage Select for VDD2. This is irrelevant for SD/eMMC card.  Values: 0x */
#define EMMC_EMMC_PWR_CTRL_R_SD_BUS_PWR_VDD2                             (1U << 4) /* SD Bus Power for VDD2. This is irrelevant for SD/eMMC card.  Values: 0x0 (OFF):  */
#define EMMC_EMMC_PWR_CTRL_R_SD_BUS_VOL_VDD1_MASK                        (0x7 << 1) /* SD Bus Voltage Select for VDD1/eMMC Bus Voltage Select for VDD. These bits enabl */
#define EMMC_EMMC_PWR_CTRL_R_SD_BUS_VOL_VDD1_POS                         (1) /* SD Bus Voltage Select for VDD1/eMMC Bus Voltage Select for VDD. These bits enabl */
#define EMMC_EMMC_PWR_CTRL_R_SD_BUS_PWR_VDD1                             (1U << 0) /* SD Bus Power for VDD1. This bit enables VDD1 power of the card. This setting is  */
#define EMMC_EMMC_P_EMBEDDED_CNTRL_REG_OFFSET_EMBEDDED_CNTRL_ADDR_MASK   (0xFFF << 0) /* Offset Address of Embedded Control register. */
#define EMMC_EMMC_P_EMBEDDED_CNTRL_REG_OFFSET_EMBEDDED_CNTRL_ADDR_POS    (0) /* Offset Address of Embedded Control register. */
#define EMMC_EMMC_P_VENDOR_SPECIFIC_AREA_REG_OFFSET_ADDR_VENDOR_MASK     (0xFFF << 0) /* Base offset Address for Vendor-Specific registers. */
#define EMMC_EMMC_P_VENDOR_SPECIFIC_AREA_REG_OFFSET_ADDR_VENDOR_POS      (0) /* Base offset Address for Vendor-Specific registers. */
#define EMMC_EMMC_P_VNDR2_SPECIFIC_AREA_REG_OFFSET_ADDR_VNDR2_MASK       (0xFFFF << 0) /* Base offset Address for Command Queuing registers. */
#define EMMC_EMMC_P_VNDR2_SPECIFIC_AREA_REG_OFFSET_ADDR_VNDR2_POS        (0) /* Base offset Address for Command Queuing registers. */
#define EMMC_EMMC_RESP01_R_RESP01_MASK                                   (0xFFFFFFFF << 0) /* Command Response. These bits reflect 39-8 bits of SD/eMMC Response Field. Note:  */
#define EMMC_EMMC_RESP01_R_RESP01_POS                                    (0) /* Command Response. These bits reflect 39-8 bits of SD/eMMC Response Field. Note:  */
#define EMMC_EMMC_RESP23_R_RESP23_MASK                                   (0xFFFFFFFF << 0) /* Command Response. These bits reflect 71-40 bits of the SD/eMMC Response Field. */
#define EMMC_EMMC_RESP23_R_RESP23_POS                                    (0) /* Command Response. These bits reflect 71-40 bits of the SD/eMMC Response Field. */
#define EMMC_EMMC_RESP45_R_RESP45_MASK                                   (0xFFFFFFFF << 0) /* Command Response. These bits reflect 103-72 bits of the Response Field. */
#define EMMC_EMMC_RESP45_R_RESP45_POS                                    (0) /* Command Response. These bits reflect 103-72 bits of the Response Field. */
#define EMMC_EMMC_RESP67_R_RESP67_MASK                                   (0xFFFFFFFF << 0) /* Command Response. These bits reflect bits 135-104 of SD/EMMC Response Field. Not */
#define EMMC_EMMC_RESP67_R_RESP67_POS                                    (0) /* Command Response. These bits reflect bits 135-104 of SD/EMMC Response Field. Not */
#define EMMC_EMMC_SDMASA_R_BLOCKCNT_SDMASA_MASK                          (0xFFFFFFFF << 0) /* 32-bit Block Count (SDMA System Address). - SDMA System Address (Host Version 4  */
#define EMMC_EMMC_SDMASA_R_BLOCKCNT_SDMASA_POS                           (0) /* 32-bit Block Count (SDMA System Address). - SDMA System Address (Host Version 4  */
#define EMMC_EMMC_SLOT_INTR_STATUS_R_INTR_SLOT_MASK                      (0xFF << 0) /* Interrupt signal for each Slot       These status bits indicate the logical OR o */
#define EMMC_EMMC_SLOT_INTR_STATUS_R_INTR_SLOT_POS                       (0) /* Interrupt signal for each Slot       These status bits indicate the logical OR o */
#define EMMC_EMMC_SW_RST_R_SW_RST_DAT                                    (1U << 2) /* Software Reset For DAT line. This bit is used in SD/eMMC mode and it resets only */
#define EMMC_EMMC_SW_RST_R_SW_RST_CMD                                    (1U << 1) /* Software Reset For CMD line. This bit resets only a part of the command circuit  */
#define EMMC_EMMC_SW_RST_R_SW_RST_ALL                                    (1U << 0) /* Software Reset For All. This reset affects the entire Host Controller except for */
#define EMMC_EMMC_TOUT_CTRL_R_TOUT_CNT_MASK                              (0xF << 0) /* Data Timeout Counter Value. This value determines the interval by which DAT line */
#define EMMC_EMMC_TOUT_CTRL_R_TOUT_CNT_POS                               (0) /* Data Timeout Counter Value. This value determines the interval by which DAT line */
#define EMMC_EMMC_WUP_CTRL_R_CARD_REMOVAL                                (1U << 2) /* Wakeup Event Enable on SD Card Removal. This bit enables wakeup event through Ca */
#define EMMC_EMMC_WUP_CTRL_R_CARD_INSERT                                 (1U << 1) /* Wakeup Event Enable on SD Card Insertion. This bit enables wakeup event through  */
#define EMMC_EMMC_WUP_CTRL_R_CARD_INT                                    (1U << 0) /* Wakeup Event Enable on Card Interrupt. This bit enables wakeup event through a C */
#define EMMC_EMMC_XFER_MODE_R_RESP_INT_DISABLE                           (1U << 8) /* Response Interrupt Disable. The Host Controller supports response check function */
#define EMMC_EMMC_XFER_MODE_R_RESP_ERR_CHK_ENABLE                        (1U << 7) /* Response Error Check Enable. The Host Controller supports response check functio */
#define EMMC_EMMC_XFER_MODE_R_RESP_TYPE                                  (1U << 6) /* Response Type R1/R5. This bit selects either R1 or R5 as a response type when th */
#define EMMC_EMMC_XFER_MODE_R_MULTI_BLK_SEL                              (1U << 5) /* Multi/Single Block Select. This bit is set when issuing multiple-block transfer  */
#define EMMC_EMMC_XFER_MODE_R_DATA_XFER_DIR                              (1U << 4) /* Data Transfer Direction Select. This bit defines the direction of DAT line data  */
#define EMMC_EMMC_XFER_MODE_R_AUTO_CMD_ENABLE_MASK                       (0x3 << 2) /* Auto Command Enable. This field determines use of Auto Command functions. Note:  */
#define EMMC_EMMC_XFER_MODE_R_AUTO_CMD_ENABLE_POS                        (2) /* Auto Command Enable. This field determines use of Auto Command functions. Note:  */
#define EMMC_EMMC_XFER_MODE_R_BLOCK_COUNT_ENABLE                         (1U << 1) /* Block Count Enable. This bit is used to enable the Block Count register, which i */
#define EMMC_EMMC_XFER_MODE_R_DMA_EN_EMMC                                (1U << 0) /* DMA Enable. This bit enables the DMA functionality. If this bit is set to 1, a D */

#endif /* __DA1470_EMMC_H */
