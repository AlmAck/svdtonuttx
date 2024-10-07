/****************************************************************************
 * ./tmp/da1470_dcdc_boost.h
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

#ifndef __DA1470_DCDC_BOOST_H
#define __DA1470_DCDC_BOOST_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_DCDC_BOOST_BOOST_CTRL0_OFFSET        0x0008 /* No description available. */
#define DA1470_DCDC_BOOST_BOOST_CTRL1_OFFSET        0x000C /* No description available. */
#define DA1470_DCDC_BOOST_BOOST_STATUS_OFFSET       0x0014 /* No description available. */
#define DA1470_DCDC_BOOST_BOOST_TEST_CTRL_OFFSET    0x0010 /* No description available. */
#define DA1470_DCDC_BOOST_VLED_PWR_CTRL_OFFSET      0x0000 /* No description available. */
#define DA1470_DCDC_BOOST_VLED_PWR_STATUS_OFFSET    0x0004 /* No description available. */

/* Register addresses *******************************************************/

#define DA1470_DCDC_BOOST_BASE                      0x50000500 /* DCDC_BOOST registers */

#define DA1470_DCDC_BOOST_BOOST_CTRL0               (DA1470_DCDC_BOOST_BASE + DA1470_DCDC_BOOST_BOOST_CTRL0_OFFSET) /* No description available. */
#define DA1470_DCDC_BOOST_BOOST_CTRL1               (DA1470_DCDC_BOOST_BASE + DA1470_DCDC_BOOST_BOOST_CTRL1_OFFSET) /* No description available. */
#define DA1470_DCDC_BOOST_BOOST_STATUS              (DA1470_DCDC_BOOST_BASE + DA1470_DCDC_BOOST_BOOST_STATUS_OFFSET) /* No description available. */
#define DA1470_DCDC_BOOST_BOOST_TEST_CTRL           (DA1470_DCDC_BOOST_BASE + DA1470_DCDC_BOOST_BOOST_TEST_CTRL_OFFSET) /* No description available. */
#define DA1470_DCDC_BOOST_VLED_PWR_CTRL             (DA1470_DCDC_BOOST_BASE + DA1470_DCDC_BOOST_VLED_PWR_CTRL_OFFSET) /* No description available. */
#define DA1470_DCDC_BOOST_VLED_PWR_STATUS           (DA1470_DCDC_BOOST_BASE + DA1470_DCDC_BOOST_VLED_PWR_STATUS_OFFSET) /* No description available. */

/* Register bit definitions *************************************************/


/* BOOST_CTRL0 Register */

#define DCDC_BOOST_BOOST_TIMEOUT_TRIG_DELAY_MASK    (0xF << 17) /* Delay before generating next comparator clock after a timeout event on the P swi */
#define DCDC_BOOST_BOOST_TIMEOUT_TRIG_DELAY_POS     (17) /* Delay before generating next comparator clock after a timeout event on the P swi */
#define DCDC_BOOST_BOOST_PSW_TIMEOUT_MASK           (0xF << 13) /* P switch timeout, if switch is closed longer than this a timeout is generated an */
#define DCDC_BOOST_BOOST_PSW_TIMEOUT_POS            (13) /* P switch timeout, if switch is closed longer than this a timeout is generated an */
#define DCDC_BOOST_BOOST_NSW_TIMEOUT_MASK           (0xF << 9) /* N switch timeout, if switch is closed longer than this a timeout is generated an */
#define DCDC_BOOST_BOOST_NSW_TIMEOUT_POS            (9) /* N switch timeout, if switch is closed longer than this a timeout is generated an */
#define DCDC_BOOST_BOOST_OK_CLR_COUNT_MASK          (0x3 << 7) /* Number of subsequent V_NOK events before BOOST_VLED_OK is reset 0x0: 2 0x1: 4 0x */
#define DCDC_BOOST_BOOST_OK_CLR_COUNT_POS           (7) /* Number of subsequent V_NOK events before BOOST_VLED_OK is reset 0x0: 2 0x1: 4 0x */
#define DCDC_BOOST_BOOST_IDLE_CLK_DIV_MASK          (0x3 << 5) /* Determines times between comparator samples when converter is idle 0x0 = 250 ns  */
#define DCDC_BOOST_BOOST_IDLE_CLK_DIV_POS           (5) /* Determines times between comparator samples when converter is idle 0x0 = 250 ns  */
#define DCDC_BOOST_BOOST_VLED_TRIM_MASK             (0x7 << 2) /* Trim setting for boost converter, sets deviation from nominal output voltage (4  */
#define DCDC_BOOST_BOOST_VLED_TRIM_POS              (2) /* Trim setting for boost converter, sets deviation from nominal output voltage (4  */
#define DCDC_BOOST_BOOST_VLED_SEL_MASK              (0x3 << 0) /* Voltage selection for boost converter, sets nominal output voltage 0x0: 4.50V (d */
#define DCDC_BOOST_BOOST_VLED_SEL_POS               (0) /* Voltage selection for boost converter, sets nominal output voltage 0x0: 4.50V (d */

/* BOOST_CTRL1 Register */

#define DCDC_BOOST_BOOST_CUR_LIM_SLEEP_FIXED        (1U << 17) /* Enable fixed current iso dynamic current in sleep mode 0x0: Use dynamic current  */
#define DCDC_BOOST_BOOST_CUR_LIM_SLEEP_MASK         (0x1F << 12) /* Fixed inductor peak current limit in sleep mode I = 30 mA * (1 + N), default 960 */
#define DCDC_BOOST_BOOST_CUR_LIM_SLEEP_POS          (12) /* Fixed inductor peak current limit in sleep mode I = 30 mA * (1 + N), default 960 */
#define DCDC_BOOST_BOOST_CUR_LIM_STEP_MASK          (0x3 << 10) /* Step size taken by automatic inductor peak current limit control 0x0: 0 (disable */
#define DCDC_BOOST_BOOST_CUR_LIM_STEP_POS           (10) /* Step size taken by automatic inductor peak current limit control 0x0: 0 (disable */
#define DCDC_BOOST_BOOST_CUR_LIM_MAX_MASK           (0x1F << 5) /* Maximum inductor peak current limit I = 30 mA * (1 + N), default 960 mA */
#define DCDC_BOOST_BOOST_CUR_LIM_MAX_POS            (5) /* Maximum inductor peak current limit I = 30 mA * (1 + N), default 960 mA */
#define DCDC_BOOST_BOOST_CUR_LIM_MIN_MASK           (0x1F << 0) /* Minimum inductor peak current limit I = 30 mA * (1 + N), default 150 mA */
#define DCDC_BOOST_BOOST_CUR_LIM_MIN_POS            (0) /* Minimum inductor peak current limit I = 30 mA * (1 + N), default 150 mA */

/* BOOST_STATUS Register */

#define DCDC_BOOST_BOOST_COMP_TRIM_MASK             (0x3F << 18) /* Actual P side comparator trim value */
#define DCDC_BOOST_BOOST_COMP_TRIM_POS              (18) /* Actual P side comparator trim value */
#define DCDC_BOOST_BOOST_IDLE                       (1U << 17) /* Converter idle */
#define DCDC_BOOST_BOOST_CUR_LIM_MASK               (0x1F << 12) /* Actual inductor peak current limit */
#define DCDC_BOOST_BOOST_CUR_LIM_POS                (12) /* Actual inductor peak current limit */
#define DCDC_BOOST_BOOST_COMP_P_DYN_P               (1U << 11) /* P output of P side dynamic comparator */
#define DCDC_BOOST_BOOST_COMP_P_DYN_N               (1U << 10) /* N output of P side dynamic comparator */
#define DCDC_BOOST_BOOST_COMP_P_CONT                (1U << 9) /* Output of P side continuous time comparator */
#define DCDC_BOOST_BOOST_COMP_N_CONT                (1U << 8) /* Output of N side continuous time comparator */
#define DCDC_BOOST_BOOST_TIMEOUT_PSW                (1U << 7) /* Timeout on P switch occurred */
#define DCDC_BOOST_BOOST_TIMEOUT_NSW                (1U << 6) /* Timeout on N switch occurred */
#define DCDC_BOOST_BOOST_VOUT_NOK                   (1U << 5) /* NOK output of output voltage comparator */
#define DCDC_BOOST_BOOST_VOUT_OK                    (1U << 4) /* OK output of output voltage comparator */
#define DCDC_BOOST_BOOST_SW_STATE_MASK              (0x3 << 2) /* State of boost converter switches 0x0: Both off 0x1: P switch on 0x2: N switch o */
#define DCDC_BOOST_BOOST_SW_STATE_POS               (2) /* State of boost converter switches 0x0: Both off 0x1: P switch on 0x2: N switch o */
#define DCDC_BOOST_BOOST_STARTUP_COMPLETE           (1U << 1) /* Indicates if the converter is enabled and the startup counter has expired (inter */
#define DCDC_BOOST_BOOST_VLED_OK                    (1U << 0) /* Indicates that V_LED is above its threshold, reset after too many subsequent V_N */

/* BOOST_TEST_CTRL Register */

#define DCDC_BOOST_BOOST_ILOAD_SEL_TEST_MASK        (0x3 << 27) /* Test mode control for 20mA test-mux 0x0: All switches open (Default) 0x1: Sink 2 */
#define DCDC_BOOST_BOOST_ILOAD_SEL_TEST_POS         (27) /* Test mode control for 20mA test-mux 0x0: All switches open (Default) 0x1: Sink 2 */
#define DCDC_BOOST_BOOST_LSSUP_TRIM_MASK            (0x3 << 22) /* Trim low side supply voltage V = 2 V + 300 mV * N, default 2.9 V */
#define DCDC_BOOST_BOOST_LSSUP_TRIM_POS             (22) /* Trim low side supply voltage V = 2 V + 300 mV * N, default 2.9 V */
#define DCDC_BOOST_BOOST_HSGND_TRIM_MASK            (0x3 << 20) /* Trim high side ground V = VBAT - (2 V + 400 mV * N), default VBAT - 3.2 V */
#define DCDC_BOOST_BOOST_HSGND_TRIM_POS             (20) /* Trim high side ground V = VBAT - (2 V + 400 mV * N), default VBAT - 3.2 V */

/* VLED_PWR_CTRL Register */

#define DCDC_BOOST_VLED_PWR_FORCE_MASK              (0x3 << 11) /* Manual selection of VLED supply source, requires that VLED_PWR_MANUAL = 0x1 0x0: */
#define DCDC_BOOST_VLED_PWR_FORCE_POS               (11) /* Manual selection of VLED supply source, requires that VLED_PWR_MANUAL = 0x1 0x0: */
#define DCDC_BOOST_VLED_PWR_MANUAL                  (1U << 10) /* 0x0: VLED supply source automatically selected 0x1: VLED supply source manually  */
#define DCDC_BOOST_VLED_PWR_USE_VSYS_LVL            (1U << 9) /* Sets the condition for powering VLED from VSYS 0x0: VLED always powered from VSY */
#define DCDC_BOOST_VLED_PWR_ENABLE                  (1U << 8) /* 0x0: VLED power controller disabled 0x1: VLED power controller enabled */
#define DCDC_BOOST_VSYS_OK_DEBOUNCE_MASK            (0xFF << 0) /* Sets debounce time on VSYS comparator in steps of 1.024 ms Note: actual delay ca */
#define DCDC_BOOST_VSYS_OK_DEBOUNCE_POS             (0) /* Sets debounce time on VSYS comparator in steps of 1.024 ms Note: actual delay ca */

/* VLED_PWR_STATUS Register */

#define DCDC_BOOST_VLED_PWR_ALLOW_BOOST             (1U << 5) /* Indicates whether boost converter is blocked or not */
#define DCDC_BOOST_VLED_PWR_VSYS_CONNECTED          (1U << 4) /* Indicates that VSYS switch is closed */
#define DCDC_BOOST_VLED_PWR_SWITCH_CTRL_STATE_MASK  (0x3 << 2) /* State of the VLED power control FSM 0x0: Disabled 0x1: VSYS 0x2: Boost 0x3: N.A. */
#define DCDC_BOOST_VLED_PWR_SWITCH_CTRL_STATE_POS   (2) /* State of the VLED power control FSM 0x0: Disabled 0x1: VSYS 0x2: Boost 0x3: N.A. */
#define DCDC_BOOST_VSYS_OK_DEBOUNCED                (1U << 1) /* Output of VSYS OK debounce logic */
#define DCDC_BOOST_VSYS_OK                          (1U << 0) /* Output of VSYS OK logic */

#endif /* __DA1470_DCDC_BOOST_H */
