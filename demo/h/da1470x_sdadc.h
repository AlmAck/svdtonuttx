/****************************************************************************
 * ./tmp/da1470x_sdadc.h
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

#ifndef __DA1470X_SDADC_H
#define __DA1470X_SDADC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_SDADC_SDADC_AUDIO_FILT_OFFSET  0x0014 /* Sigma Delta ADC Audio Filter Register */
#define DA1470X_SDADC_SDADC_CLEAR_INT_OFFSET   0x000C /* Sigma Delta ADC Clear Interrupt Register */
#define DA1470X_SDADC_SDADC_CTRL_OFFSET        0x0000 /* Sigma Delta ADC Control Register */
#define DA1470X_SDADC_SDADC_PGA_CTRL_OFFSET    0x0004 /* Sigma Delta ADC PGA Control Registers */
#define DA1470X_SDADC_SDADC_RESULT_OFFSET      0x0010 /* Sigma Delta ADC Result Register */

/* Register addresses *******************************************************/

#define DA1470X_SDADC_BASE                     0x50040500 /* SDADC registers */

#define DA1470X_SDADC_SDADC_AUDIO_FILT         (DA1470X_SDADC_BASE + DA1470X_SDADC_SDADC_AUDIO_FILT_OFFSET) /* Sigma Delta ADC Audio Filter Register */
#define DA1470X_SDADC_SDADC_CLEAR_INT          (DA1470X_SDADC_BASE + DA1470X_SDADC_SDADC_CLEAR_INT_OFFSET) /* Sigma Delta ADC Clear Interrupt Register */
#define DA1470X_SDADC_SDADC_CTRL               (DA1470X_SDADC_BASE + DA1470X_SDADC_SDADC_CTRL_OFFSET) /* Sigma Delta ADC Control Register */
#define DA1470X_SDADC_SDADC_PGA_CTRL           (DA1470X_SDADC_BASE + DA1470X_SDADC_SDADC_PGA_CTRL_OFFSET) /* Sigma Delta ADC PGA Control Registers */
#define DA1470X_SDADC_SDADC_RESULT             (DA1470X_SDADC_BASE + DA1470X_SDADC_SDADC_RESULT_OFFSET) /* Sigma Delta ADC Result Register */

/* Register bit definitions *************************************************/


/* SDADC_AUDIO_FILT Register */

#define SDADC_SDADC_CIC_OFFSET_MASK            (0x1FFFFF << 0) /* Constant CIC offset */
#define SDADC_SDADC_CIC_OFFSET_POS             (0) /* Constant CIC offset */

/* SDADC_CLEAR_INT Register */

#define SDADC_SDADC_CLR_INT_MASK               (0xFFFFFFFF << 0) /* Writing any value to this register will clear the ADC_INT interrupt. Reading ret */
#define SDADC_SDADC_CLR_INT_POS                (0) /* Writing any value to this register will clear the ADC_INT interrupt. Reading ret */

/* SDADC_CTRL Register */

#define SDADC_SDADC_DMA_EN                     (1U << 18) /* 0: DMA functionality disabled 1: DMA functionality enabled */
#define SDADC_SDADC_MINT                       (1U << 17) /* 0: Disable (mask) SDADC_ADC_INT. 1: Enable SDADC_ADC_INT to ICU. */
#define SDADC_SDADC_INT                        (1U << 16) /* 1: AD conversion ready and has generated an interrupt. Must be cleared by writin */
#define SDADC_SDADC_LDO_OK                     (1U << 15) /* 1: Internal LDO is ready for use */
#define SDADC_SDADC_AUDIO_FILTER_EN            (1U << 12) /* 0: Disable audio filter, ADC is forced into reset. When setting to 0 while SDADC */
#define SDADC_SDADC_RESULT_MODE_MASK           (0x3 << 10) /* Sample mode 0: Sample extention, SDADC_RESULT_REG = {sample[15:2], sample[2], sa */
#define SDADC_SDADC_RESULT_MODE_POS            (10) /* Sample mode 0: Sample extention, SDADC_RESULT_REG = {sample[15:2], sample[2], sa */
#define SDADC_SDADC_START                      (1U << 1) /* 0: ADC idle 1: Start ADC */
#define SDADC_SDADC_EN                         (1U << 0) /* 0: LDO is off and ADC is disabled. 1: LDO, bias currents and modulator are enabl */

/* SDADC_PGA_CTRL Register */

#define SDADC_PGA_GAIN_MASK                    (0x7 << 9) /* select the PGA gain select: 0 : -12 dB 1 : -6 dB 2 : 0 dB 3 : 6 dB 4 : 12 dB 5 : */
#define SDADC_PGA_GAIN_POS                     (9) /* select the PGA gain select: 0 : -12 dB 1 : -6 dB 2 : 0 dB 3 : 6 dB 4 : 12 dB 5 : */
#define SDADC_PGA_MODE_MASK                    (0x3 << 7) /* Use PGA in single ended mode 0 : Differential mode (default) 1 : Use N-branch as */
#define SDADC_PGA_MODE_POS                     (7) /* Use PGA in single ended mode 0 : Differential mode (default) 1 : Use N-branch as */
#define SDADC_PGA_MUTE                         (1U << 6) /* Mute the PGA output 0 : Unmuted (default) 1 : Mute */
#define SDADC_PGA_BIAS_MASK                    (0x7 << 3) /* Configure the PGA bias control: 0: 0.40 x Ibias 1: 0.44 x Ibias 2: 0.50 x Ibias  */
#define SDADC_PGA_BIAS_POS                     (3) /* Configure the PGA bias control: 0: 0.40 x Ibias 1: 0.44 x Ibias 2: 0.50 x Ibias  */
#define SDADC_PGA_SHORTIN                      (1U << 2) /* PGA input short 0 : Normal mode (default) 1 : Short PGA inputs */
#define SDADC_PGA_EN_MASK                      (0x3 << 0) /* PGA enable: 00: both branches of PGA disabled 01: Positive branch of PGA enabled */
#define SDADC_PGA_EN_POS                       (0) /* PGA enable: 00: both branches of PGA disabled 01: Positive branch of PGA enabled */

/* SDADC_RESULT Register */

#define SDADC_SDADC_VAL_MASK                   (0xFFFF << 0) /* Returns 16 bits linear value of the last AD conversion. */
#define SDADC_SDADC_VAL_POS                    (0) /* Returns 16 bits linear value of the last AD conversion. */

#endif /* __DA1470X_SDADC_H */
