/****************************************************************************
 * ./tmp/da1470x_snc.h
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

#ifndef __DA1470X_SNC_H
#define __DA1470X_SNC_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_SNC_SNC_STATUS_OFFSET         0x0000 /* Sensor Node Status Register */
#define DA1470X_SNC_SNC_WDOG_OFFSET           0x0004 /* Sensor Node Watchdog Register */

/* Register addresses *******************************************************/

#define DA1470X_SNC_BASE                      0x50021000 /* SNC registers */

#define DA1470X_SNC_SNC_STATUS                (DA1470X_SNC_BASE + DA1470X_SNC_SNC_STATUS_OFFSET) /* Sensor Node Status Register */
#define DA1470X_SNC_SNC_WDOG                  (DA1470X_SNC_BASE + DA1470X_SNC_SNC_WDOG_OFFSET) /* Sensor Node Watchdog Register */

/* Register bit definitions *************************************************/


/* SNC_STATUS Register */

#define SNC_WDOG_EARLY_NOTICE                 (1U << 4) /* 0 = Normal operation 1 = Indicates that the SNC Watchdog counter has reached the */
#define SNC_WDOG_HAS_EXPIRED                  (1U << 3) /* 0 = Normal operation 1 = Indicates that the SNC Watchdog counter has expired */
#define SNC_CPU_LOCKED                        (1U << 2) /* 0 = Normal operation 1 = SNC CPU is locked-up. The specific bit-field is set as  */
#define SNC_CPU_IDLE                          (1U << 1) /* 0 = Normal operation 1 = SNC CPU is in idle mode, activated when the 'sleeping'  */
#define SNC_CPU_HALTED                        (1U << 0) /* 0 = Normal operation 1 = SNC CPU is halted */

/* SNC_WDOG Register */

#define SNC_SYS2SNC_WDOG_FREEZE               (1U << 31) /* This bit-field returns a read-only copy of SET_FREEZE_REG->FRZ_SNC_WDOG value. */
#define SNC_SYS2SNC_WDOG_FREEZE_DIS           (1U << 30) /* If 1, it mask the SYS2SNC_WDOG_FREEZE, which is provided by SET_FREEZE_REG[FRZ_S */
#define SNC_SNC_WDOG_EXPIRE                   (1U << 29) /* This bit automatically set to 1 as soon as SNC_WDOG_CNT = 0, causing: a) The SNC */
#define SNC_SNC_WDOG_SYS_RST_REQ              (1U << 28) /* Refer to the SNC_WDOG_EXPIRE bit-field. */
#define SNC_SNC_WDOG_WRITE_VALID_MASK         (0x3 << 17) /* To allow a write of any remaining fields, this value must also be written simult */
#define SNC_SNC_WDOG_WRITE_VALID_POS          (17) /* To allow a write of any remaining fields, this value must also be written simult */
#define SNC_SNC_WDOG_CNT_MASK                 (0x1FFF << 0) /* Provides access to the counter, which counts down every 10.24 ms. FW should relo */
#define SNC_SNC_WDOG_CNT_POS                  (0) /* Provides access to the counter, which counts down every 10.24 ms. FW should relo */

#endif /* __DA1470X_SNC_H */
