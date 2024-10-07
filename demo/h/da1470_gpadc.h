/****************************************************************************
 * ./tmp/da1470_gpadc.h
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

#ifndef __DA1470_GPADC_H
#define __DA1470_GPADC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_GPADC_GP_ADC_CLEAR_INT_OFFSET  0x001C /* General Purpose ADC Clear Interrupt Register */
#define DA1470_GPADC_GP_ADC_CTRL2_OFFSET      0x0004 /* General Purpose ADC Second Control Register */
#define DA1470_GPADC_GP_ADC_CTRL3_OFFSET      0x0008 /* General Purpose ADC Third Control Register */
#define DA1470_GPADC_GP_ADC_CTRL_OFFSET       0x0000 /* General Purpose ADC Control Register */
#define DA1470_GPADC_GP_ADC_OFFN_OFFSET       0x0014 /* General Purpose ADC Negative Offset Register */
#define DA1470_GPADC_GP_ADC_OFFP_OFFSET       0x0010 /* General Purpose ADC Positive Offset Register */
#define DA1470_GPADC_GP_ADC_RESULT_OFFSET     0x0020 /* General Purpose ADC Result Register */
#define DA1470_GPADC_GP_ADC_SEL_OFFSET        0x000C /* General Purpose ADC Input Selection Register */
#define DA1470_GPADC_GP_ADC_TRIM_OFFSET       0x0018 /* General Purpose ADC Trim Register */

/* Register addresses *******************************************************/

#define DA1470_GPADC_BASE                     0x50020800 /* GPADC registers */

#define DA1470_GPADC_GP_ADC_CLEAR_INT         (DA1470_GPADC_BASE + DA1470_GPADC_GP_ADC_CLEAR_INT_OFFSET) /* General Purpose ADC Clear Interrupt Register */
#define DA1470_GPADC_GP_ADC_CTRL2             (DA1470_GPADC_BASE + DA1470_GPADC_GP_ADC_CTRL2_OFFSET) /* General Purpose ADC Second Control Register */
#define DA1470_GPADC_GP_ADC_CTRL3             (DA1470_GPADC_BASE + DA1470_GPADC_GP_ADC_CTRL3_OFFSET) /* General Purpose ADC Third Control Register */
#define DA1470_GPADC_GP_ADC_CTRL              (DA1470_GPADC_BASE + DA1470_GPADC_GP_ADC_CTRL_OFFSET) /* General Purpose ADC Control Register */
#define DA1470_GPADC_GP_ADC_OFFN              (DA1470_GPADC_BASE + DA1470_GPADC_GP_ADC_OFFN_OFFSET) /* General Purpose ADC Negative Offset Register */
#define DA1470_GPADC_GP_ADC_OFFP              (DA1470_GPADC_BASE + DA1470_GPADC_GP_ADC_OFFP_OFFSET) /* General Purpose ADC Positive Offset Register */
#define DA1470_GPADC_GP_ADC_RESULT            (DA1470_GPADC_BASE + DA1470_GPADC_GP_ADC_RESULT_OFFSET) /* General Purpose ADC Result Register */
#define DA1470_GPADC_GP_ADC_SEL               (DA1470_GPADC_BASE + DA1470_GPADC_GP_ADC_SEL_OFFSET) /* General Purpose ADC Input Selection Register */
#define DA1470_GPADC_GP_ADC_TRIM              (DA1470_GPADC_BASE + DA1470_GPADC_GP_ADC_TRIM_OFFSET) /* General Purpose ADC Trim Register */

/* Register bit definitions *************************************************/


/* GP_ADC_CLEAR_INT Register */

#define GP_ADC_CLR_INT_MASK                   (0xFFFF << 0) /* Writing any value to this register will clear the ADC_INT interrupt. Reading ret */
#define GP_ADC_CLR_INT_POS                    (0) /* Writing any value to this register will clear the ADC_INT interrupt. Reading ret */

/* GP_ADC_CTRL2 Register */

#define GP_ADC_STORE_DEL_MASK                 (0x7 << 13) /* 0: Data is stored after handshake synchronisation 1: Data is stored 2 ADC_CLK cy */
#define GP_ADC_STORE_DEL_POS                  (13) /* 0: Data is stored after handshake synchronisation 1: Data is stored 2 ADC_CLK cy */
#define GP_ADC_SMPL_TIME_MASK                 (0xF << 9) /* 0: The sample time (switch is closed) is two ADC_CLK cycles 1: The sample time i */
#define GP_ADC_SMPL_TIME_POS                  (9) /* 0: The sample time (switch is closed) is two ADC_CLK cycles 1: The sample time i */
#define GP_ADC_CONV_NRS_MASK                  (0x7 << 6) /* 0: 1 sample is taken or 2 in case ADC_CHOP is active. 1: 2 samples are taken. 2: */
#define GP_ADC_CONV_NRS_POS                   (6) /* 0: 1 sample is taken or 2 in case ADC_CHOP is active. 1: 2 samples are taken. 2: */
#define GP_ADC_I20U                           (1U << 2) /* 1: Adds 20uA constant load current at the ADC LDO to minimize ripple on the refe */
#define GP_ADC_ATTN_MASK                      (0x3 << 0) /* 0: No attenuator (input voltages up to 0.9V allowed) 1: Enabling 2x attenuator ( */
#define GP_ADC_ATTN_POS                       (0) /* 0: No attenuator (input voltages up to 0.9V allowed) 1: Enabling 2x attenuator ( */

/* GP_ADC_CTRL3 Register */

#define GP_ADC_INTERVAL_MASK                  (0xFF << 8) /* Defines the interval between two ADC conversions in case GP_ADC_CONT is set. 0:  */
#define GP_ADC_INTERVAL_POS                   (8) /* Defines the interval between two ADC conversions in case GP_ADC_CONT is set. 0:  */
#define GP_ADC_EN_DEL_MASK                    (0xFF << 0) /* Defines the delay for enabling the ADC after enabling the LDO. 0: Not allowed 1: */
#define GP_ADC_EN_DEL_POS                     (0) /* Defines the delay for enabling the ADC after enabling the LDO. 0: Not allowed 1: */

/* GP_ADC_CTRL Register */

#define GP_ADC_RESULT_MODE_MASK               (0x3 << 15) /* Sample mode 0: Sample extention, the result is aligned on the MSBs. The lowest c */
#define GP_ADC_RESULT_MODE_POS                (15) /* Sample mode 0: Sample extention, the result is aligned on the MSBs. The lowest c */
#define GP_ADC_DIE_TEMP_EN                    (1U << 14) /* Enables the die-temperature sensor. Output can be measured on GPADC input 4. */
#define GP_ADC_DIFF_TEMP_SEL_MASK             (0x3 << 12) /* 0= Gnd, 1 =sensor near radio, 2 =sensor near charger, 3 =sensor near bandgap wit */
#define GP_ADC_DIFF_TEMP_SEL_POS              (12) /* 0= Gnd, 1 =sensor near radio, 2 =sensor near charger, 3 =sensor near bandgap wit */
#define GP_ADC_DIFF_TEMP_EN                   (1U << 11) /* 1: Enable the on-chip temperature sensors */
#define GP_ADC_LDO_HOLD                       (1U << 10) /* 0: GPADC LDO tracking bandgap reference 1: GPADC LDO hold sampled bandgap refere */
#define GP_ADC_CHOP                           (1U << 9) /* 0: Chopper mode off 1: Chopper mode enabled. Takes two samples with opposite GP_ */
#define GP_ADC_SIGN                           (1U << 8) /* 0: Default 1: Conversion with opposite sign at input and output to cancel out th */
#define GP_ADC_MUTE                           (1U << 7) /* 0: Normal operation 1: Mute ADC input. Takes sample at mid-scale (to dertermine  */
#define GP_ADC_SE                             (1U << 6) /* 0: Differential mode 1: Single ended mode */
#define GP_ADC_MINT                           (1U << 5) /* 0: Disable (mask) GP_ADC_INT. 1: Enable GP_ADC_INT to ICU. */
#define GP_ADC_INT                            (1U << 4) /* 1: AD conversion ready and has generated an interrupt. Must be cleared by writin */
#define GP_ADC_DMA_EN                         (1U << 3) /* 0: DMA functionality disabled 1: DMA functionality enabled */
#define GP_ADC_CONT                           (1U << 2) /* 0: Manual ADC mode, a single result will be generated after setting the GP_ADC_S */
#define GP_ADC_START                          (1U << 1) /* 0: ADC conversion ready. 1: If a 1 is written, the ADC starts a conversion. Afte */
#define GP_ADC_EN                             (1U << 0) /* 0: LDO is off and ADC is disabled.. 1: LDO is turned on and afterwards the ADC i */

/* GP_ADC_OFFN Register */

#define GP_ADC_OFFN_MASK                      (0x3FF << 0) /* Offset adjust of 'negative' array of ADC-network (effective if "GP_ADC_SE=0", or */
#define GP_ADC_OFFN_POS                       (0) /* Offset adjust of 'negative' array of ADC-network (effective if "GP_ADC_SE=0", or */

/* GP_ADC_OFFP Register */

#define GP_ADC_OFFP_MASK                      (0x3FF << 0) /* Offset adjust of 'positive' array of ADC-network (effective if "GP_ADC_SE=0", or */
#define GP_ADC_OFFP_POS                       (0) /* Offset adjust of 'positive' array of ADC-network (effective if "GP_ADC_SE=0", or */

/* GP_ADC_RESULT Register */

#define GP_ADC_VAL_MASK                       (0xFFFF << 0) /* Returns the 10 up to 16 bits linear value of the last AD conversion. The upper 1 */
#define GP_ADC_VAL_POS                        (0) /* Returns the 10 up to 16 bits linear value of the last AD conversion. The upper 1 */

/* GP_ADC_SEL Register */

#define GP_ADC_LDO_SENSE_SEL_MASK             (0x7 << 14) /* Enable and select the current sensing logic for one of the LDO's 0: LDO current  */
#define GP_ADC_LDO_SENSE_SEL_POS              (14) /* Enable and select the current sensing logic for one of the LDO's 0: LDO current  */
#define GP_ADC_SEL_MUX2_MASK                  (0x7 << 11) /* 0: No rail selected 1: V18P 2: V18 3: V14 4: V12 5: VSYS monitor 6: VBUS monitor */
#define GP_ADC_SEL_MUX2_POS                   (11) /* 0: No rail selected 1: V18P 2: V18 3: V14 4: V12 5: VSYS monitor 6: VBUS monitor */
#define GP_ADC_SEL_MUX1_MASK                  (0x7 << 8) /* 0: No rail selected 1: NC 2: Reserved 3: I_sense_bus 4: Reserved 5: V30 6: VMIPI */
#define GP_ADC_SEL_MUX1_POS                   (8) /* 0: No rail selected 1: NC 2: Reserved 3: I_sense_bus 4: Reserved 5: V30 6: VMIPI */
#define GP_ADC_SEL_P_TST                      (1U << 7) /* When set to 1, GP_ADC_SEL_P selection becomes 0: VSSA 1: VDDA_CONT 2: RF_TEST_OU */
#define GP_ADC_SEL_P_MASK                     (0x7 << 4) /* ADC positive input selection. 0: ADC0 (P1[0]) 1: ADC1 (P1[1]) 2: ADC2 (P1[2]) 3: */
#define GP_ADC_SEL_P_POS                      (4) /* ADC positive input selection. 0: ADC0 (P1[0]) 1: ADC1 (P1[1]) 2: ADC2 (P1[2]) 3: */
#define GP_ADC_SEL_N_MASK                     (0x7 << 0) /* ADC negative input selection. Differential only (GP_ADC_SE=0). 0: ADC0 (P1[0]) 1 */
#define GP_ADC_SEL_N_POS                      (0) /* ADC negative input selection. Differential only (GP_ADC_SE=0). 0: ADC0 (P1[0]) 1 */

/* GP_ADC_TRIM Register */

#define GP_ADC_LDO_LEVEL_MASK                 (0x7 << 0) /* GPADC LDO level 0: 825mV 1: 850mV 2: 875mV 3: 900mV (reset) 4: 925mV (default) 5 */
#define GP_ADC_LDO_LEVEL_POS                  (0) /* GPADC LDO level 0: 825mV 1: 850mV 2: 875mV 3: 900mV (reset) 4: 925mV (default) 5 */

#endif /* __DA1470_GPADC_H */
