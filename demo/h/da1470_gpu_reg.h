/****************************************************************************
 * ./tmp/da1470_gpu_reg.h
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

#ifndef __DA1470_GPU_REG_H
#define __DA1470_GPU_REG_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470_GPU_REG_GPU_CTRL_OFFSET        0x0000 /* No description available. */

/* Register addresses *******************************************************/

#define DA1470_GPU_REG_BASE                   0x51001100 /* GPU_REG registers */

#define DA1470_GPU_REG_GPU_CTRL               (DA1470_GPU_REG_BASE + DA1470_GPU_REG_GPU_CTRL_OFFSET) /* No description available. */

/* Register bit definitions *************************************************/


/* GPU_CTRL Register */

#define PWRS_B                                (1U << 6) /* Power save mode read port memories 0: Disabled 1: Enabled */
#define GPU_RAM_MS_MASK                       (0xF << 2) /* Margin setting for GPU memories */
#define GPU_RAM_MS_POS                        (2) /* Margin setting for GPU memories */
#define GPU_RAM_MSE                           (1U << 1) /* Margin enable for GPU memories */
#define GPU_EN                                (1U << 0) /* GPU enable 0:Enable 1:Disable */

#endif /* __DA1470_GPU_REG_H */
