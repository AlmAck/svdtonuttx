/****************************************************************************
 * ./tmp/da1470x_sys_wdog.h
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

#ifndef __DA1470X_SYS_WDOG_H
#define __DA1470X_SYS_WDOG_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_SYS_WDOG_WATCHDOG_CTRL_OFFSET  0x0004 /* Watchdog control register. */
#define DA1470X_SYS_WDOG_WATCHDOG_OFFSET       0x0000 /* Watchdog timer register. */

/* Register addresses *******************************************************/

#define DA1470X_SYS_WDOG_BASE                  0x50000700 /* SYS_WDOG registers */

#define DA1470X_SYS_WDOG_WATCHDOG_CTRL         (DA1470X_SYS_WDOG_BASE + DA1470X_SYS_WDOG_WATCHDOG_CTRL_OFFSET) /* Watchdog control register. */
#define DA1470X_SYS_WDOG_WATCHDOG              (DA1470X_SYS_WDOG_BASE + DA1470X_SYS_WDOG_WATCHDOG_OFFSET) /* Watchdog timer register. */

/* Register bit definitions *************************************************/


/* WATCHDOG_CTRL Register */

#define SYS_WDOG_WRITE_BUSY                    (1U << 3) /* 0 = A new WATCHDOG_REG[WDOG_VAL] can be written. 1 = No new WATCHDOG_REG[WDOG_VA */
#define SYS_WDOG_WDOG_FREEZE_EN                (1U << 2) /* 0 = Watchdog timer can not be frozen when NMI_RST=0. 1 = Watchdog timer can be f */
#define SYS_WDOG_NMI_RST                       (1U << 0) /* 0 = Watchdog timer generates NMI at value 0, and WDOG (SYS) reset at <= -16. Tim */

/* WATCHDOG Register */

#define SYS_WDOG_WDOG_WEN_MASK                 (0x3FFFF << 14) /* Bit [31:14] = 0 = Write enable for Watchdog timer else Write disable. This filte */
#define SYS_WDOG_WDOG_WEN_POS                  (14) /* Bit [31:14] = 0 = Write enable for Watchdog timer else Write disable. This filte */
#define SYS_WDOG_WDOG_VAL_NEG                  (1U << 13) /* 0 = Watchdog timer value is positive. 1 = Watchdog timer value is negative. */
#define SYS_WDOG_WDOG_VAL_MASK                 (0x1FFF << 0) /* Write: Watchdog timer reload value. Note that all bits [31-14] must be 0 to relo */
#define SYS_WDOG_WDOG_VAL_POS                  (0) /* Write: Watchdog timer reload value. Note that all bits [31-14] must be 0 to relo */

#endif /* __DA1470X_SYS_WDOG_H */
