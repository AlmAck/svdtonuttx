/****************************************************************************
 * ./tmp/da1470_dcdc.h
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

#ifndef __DA1470_DCDC_H
#define __DA1470_DCDC_H

/* Register offsets *********************************************************/

#define DA1470_DCDC_BUCK_CTRL_OFFSET          0x0000 /* No description available. */

/* Register addresses *******************************************************/

#define DA1470_DCDC_BASE                      0x50000300 /* DCDC registers */

#define DA1470_DCDC_BUCK_CTRL                 (DA1470_DCDC_BASE + DA1470_DCDC_BUCK_CTRL_OFFSET) /* No description available. */

/* Register bit definitions *************************************************/

#define DCDC_BUCK_CTRL_CFG_TIMEOUT_MASK       (0x3 << 14) /* Sets maximum switch on-time. 0x0: Disabled 0x1: 0.5 ms 0x2: 1.0 ms (Default) 0x3 */
#define DCDC_BUCK_CTRL_CFG_TIMEOUT_POS        (14) /* Sets maximum switch on-time. 0x0: Disabled 0x1: 0.5 ms 0x2: 1.0 ms (Default) 0x3 */
#define DCDC_BUCK_CTRL_EN_FREEWHEEL           (1U << 13) /* Enables freewheel switch when converter is idle. */
#define DCDC_BUCK_CTRL_TRIM_BIAS_MASK         (0x7 << 10) /* Bias current trim. 0x0: -21 % 0x1: -14 % 0x2: -7 % 0x3: +0 % (Default) 0x4: +7 % */
#define DCDC_BUCK_CTRL_TRIM_BIAS_POS          (10) /* Bias current trim. 0x0: -21 % 0x1: -14 % 0x2: -7 % 0x3: +0 % (Default) 0x4: +7 % */
#define DCDC_BUCK_CTRL_CFG_IMAX_UPPER_MASK    (0x7 << 5) /* Sets upper value of inductor peak current limit control. 0x0: 260 mA 0x1: 400 mA */
#define DCDC_BUCK_CTRL_CFG_IMAX_UPPER_POS     (5) /* Sets upper value of inductor peak current limit control. 0x0: 260 mA 0x1: 400 mA */
#define DCDC_BUCK_CTRL_CFG_IMAX_LOWER_MASK    (0x7 << 2) /* Sets lower value of inductor peak current limit control. 0x0: 260 mA (Default) 0 */
#define DCDC_BUCK_CTRL_CFG_IMAX_LOWER_POS     (2) /* Sets lower value of inductor peak current limit control. 0x0: 260 mA (Default) 0 */
#define DCDC_BUCK_CTRL_CFG_HYST_MASK          (0x3 << 0) /* Controls hysteresis on output comparator. Values listed are typical. 0x0: 6 mV ( */
#define DCDC_BUCK_CTRL_CFG_HYST_POS           (0) /* Controls hysteresis on output comparator. Values listed are typical. 0x0: 6 mV ( */

#endif /* __DA1470_DCDC_H */
