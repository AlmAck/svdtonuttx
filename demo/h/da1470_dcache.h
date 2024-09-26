/****************************************************************************
 * ./tmp/da1470_dcache.h
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

#ifndef __DA1470_DCACHE_H
#define __DA1470_DCACHE_H

/* Register offsets *********************************************************/

#define DA1470_DCACHE_DCACHE_BASE_ADDR_OFFSET                 0x0004 /* Dcache base address for cacheable region */
#define DA1470_DCACHE_DCACHE_CTRL_OFFSET                      0x0000 /* Dcache Control register */
#define DA1470_DCACHE_DCACHE_MRM_CTRL_OFFSET                  0x0014 /* Dcache MRM (Miss Rate Monitor) CONTROL register */
#define DA1470_DCACHE_DCACHE_MRM_EVICTS_OFFSET                0x0010 /* Dcache MRM (Miss Rate Monitor) EVICTS register */
#define DA1470_DCACHE_DCACHE_MRM_EVICTS_THRES_OFFSET          0x0024 /* Dcache MRM (Miss Rate Monitor) EVICTS THRESHOLD register */
#define DA1470_DCACHE_DCACHE_MRM_HITS_OFFSET                  0x0008 /* Dcache MRM (Miss Rate Monitor) HITS register */
#define DA1470_DCACHE_DCACHE_MRM_HITS_THRES_OFFSET            0x0020 /* Dcache MRM (Miss Rate Monitor) HITS THRESHOLD register */
#define DA1470_DCACHE_DCACHE_MRM_MISSES_OFFSET                0x000C /* Dcache MRM (Miss Rate Monitor) MISSES register */
#define DA1470_DCACHE_DCACHE_MRM_MISSES_THRES_OFFSET          0x001C /* Dcache MRM (Miss Rate Monitor) THRESHOLD register */
#define DA1470_DCACHE_DCACHE_MRM_TINT_OFFSET                  0x0018 /* Dcache MRM (Miss Rate Monitor) TIME INTERVAL register */

/* Register addresses *******************************************************/

#define DA1470_DCACHE_BASE                                    0x30100000 /* DCACHE registers */

#define DA1470_DCACHE_DCACHE_BASE_ADDR                        (DA1470_DCACHE_BASE + DA1470_DCACHE_DCACHE_BASE_ADDR_OFFSET) /* Dcache base address for cacheable region */
#define DA1470_DCACHE_DCACHE_CTRL                             (DA1470_DCACHE_BASE + DA1470_DCACHE_DCACHE_CTRL_OFFSET) /* Dcache Control register */
#define DA1470_DCACHE_DCACHE_MRM_CTRL                         (DA1470_DCACHE_BASE + DA1470_DCACHE_DCACHE_MRM_CTRL_OFFSET) /* Dcache MRM (Miss Rate Monitor) CONTROL register */
#define DA1470_DCACHE_DCACHE_MRM_EVICTS                       (DA1470_DCACHE_BASE + DA1470_DCACHE_DCACHE_MRM_EVICTS_OFFSET) /* Dcache MRM (Miss Rate Monitor) EVICTS register */
#define DA1470_DCACHE_DCACHE_MRM_EVICTS_THRES                 (DA1470_DCACHE_BASE + DA1470_DCACHE_DCACHE_MRM_EVICTS_THRES_OFFSET) /* Dcache MRM (Miss Rate Monitor) EVICTS THRESHOLD register */
#define DA1470_DCACHE_DCACHE_MRM_HITS                         (DA1470_DCACHE_BASE + DA1470_DCACHE_DCACHE_MRM_HITS_OFFSET) /* Dcache MRM (Miss Rate Monitor) HITS register */
#define DA1470_DCACHE_DCACHE_MRM_HITS_THRES                   (DA1470_DCACHE_BASE + DA1470_DCACHE_DCACHE_MRM_HITS_THRES_OFFSET) /* Dcache MRM (Miss Rate Monitor) HITS THRESHOLD register */
#define DA1470_DCACHE_DCACHE_MRM_MISSES                       (DA1470_DCACHE_BASE + DA1470_DCACHE_DCACHE_MRM_MISSES_OFFSET) /* Dcache MRM (Miss Rate Monitor) MISSES register */
#define DA1470_DCACHE_DCACHE_MRM_MISSES_THRES                 (DA1470_DCACHE_BASE + DA1470_DCACHE_DCACHE_MRM_MISSES_THRES_OFFSET) /* Dcache MRM (Miss Rate Monitor) THRESHOLD register */
#define DA1470_DCACHE_DCACHE_MRM_TINT                         (DA1470_DCACHE_BASE + DA1470_DCACHE_DCACHE_MRM_TINT_OFFSET) /* Dcache MRM (Miss Rate Monitor) TIME INTERVAL register */

/* Register bit definitions *************************************************/

#define DCACHE_DCACHE_BASE_ADDR_DCACHE_BASE_ADDR_MASK         (0x1FFFF << 0) /* Base of PSRAM cacheable memory N*1kByte. N = 0 to 131072 (max. of 128 MByte). */
#define DCACHE_DCACHE_BASE_ADDR_DCACHE_BASE_ADDR_POS          (0) /* Base of PSRAM cacheable memory N*1kByte. N = 0 to 131072 (max. of 128 MByte). */
#define DCACHE_DCACHE_CTRL_DCACHE_DISABLE_CLKGATE             (1U << 25) /* Disable the clockgating for the DCACHE 0: Enable clockgating (default) 1: Disabl */
#define DCACHE_DCACHE_CTRL_DCACHE_WBUFFER_FLUSH               (1U << 24) /* Write buffer flush 0: Write buffer isn't flushed (default) 1: Write buffer is fl */
#define DCACHE_DCACHE_CTRL_DCACHE_WBUFFER_EMPTY               (1U << 23) /* Status of the write buffer 0: Write buffer isn't empty 1: Write buffer is empty */
#define DCACHE_DCACHE_CTRL_DCACHE_WFLUSHED                    (1U << 22) /* 0: DCACHE is not write flushed yet. 1: DCACHE is write flushed.  Note 1: Setting */
#define DCACHE_DCACHE_CTRL_DCACHE_READY                       (1U << 21) /* 0: DCACHE isn't initialized yet 1: DCACHE initialization has been completed */
#define DCACHE_DCACHE_CTRL_DCACHE_WFLUSH                      (1U << 20) /* Write a '1' to this field will trigger a write flush of the 'dirty' lines. All m */
#define DCACHE_DCACHE_CTRL_DCACHE_INIT                        (1U << 19) /* Write a '1' to this field will trigger an initialization of the cache ('0's are  */
#define DCACHE_DCACHE_CTRL_DCACHE_ENABLE                      (1U << 18) /* Enable the dcache controller HW block: 0: Disabled, all AHB accesses towards the */
#define DCACHE_DCACHE_CTRL_DCACHE_LEN_MASK                    (0x3FFFF << 0) /* Length of PSRAM cacheable memory N*1kByte. N = 0 to 131072 (max. of 128 MByte).  */
#define DCACHE_DCACHE_CTRL_DCACHE_LEN_POS                     (0) /* Length of PSRAM cacheable memory N*1kByte. N = 0 to 131072 (max. of 128 MByte).  */
#define DCACHE_DCACHE_MRM_CTRL_MRM_IRQ_EVICTS_THRES_STATUS    (1U << 5) /* 0: No interrupt is generated. 1: Interrupt (pulse-sensitive) is generated becaus */
#define DCACHE_DCACHE_MRM_CTRL_MRM_IRQ_HITS_THRES_STATUS      (1U << 4) /* 0: No interrupt is generated. 1: Interrupt (pulse-sensitive) is generated becaus */
#define DCACHE_DCACHE_MRM_CTRL_MRM_IRQ_MISSES_THRES_STATUS    (1U << 3) /* 0: No interrupt is generated. 1: Interrupt (pulse-sensitive) is generated becaus */
#define DCACHE_DCACHE_MRM_CTRL_MRM_IRQ_TINT_STATUS            (1U << 2) /* 0: No interrupt is generated. 1: Interrupt (pulse-sensitive) is generated becaus */
#define DCACHE_DCACHE_MRM_CTRL_MRM_IRQ_MASK                   (1U << 1) /* 0: Disables interrupt generation. 1: Enables interrupt generation. Note: The Cac */
#define DCACHE_DCACHE_MRM_CTRL_MRM_START                      (1U << 0) /* 0: Freeze the "misses/hits" counters and reset the time interval counter to the  */
#define DCACHE_DCACHE_MRM_EVICTS_MRM_EVICTS_MASK              (0xFFFFFFFF << 0) /* Contains the amount of cache evicts */
#define DCACHE_DCACHE_MRM_EVICTS_MRM_EVICTS_POS               (0) /* Contains the amount of cache evicts */
#define DCACHE_DCACHE_MRM_EVICTS_THRES_MRM_EVICTS_THRES_MASK  (0xFFFFFFFF << 0) /* Defines the hits threshold to trigger the interrupt generation. See also the des */
#define DCACHE_DCACHE_MRM_EVICTS_THRES_MRM_EVICTS_THRES_POS   (0) /* Defines the hits threshold to trigger the interrupt generation. See also the des */
#define DCACHE_DCACHE_MRM_HITS_MRM_HITS_MASK                  (0xFFFFFFFF << 0) /* Contains the amount of cache hits. */
#define DCACHE_DCACHE_MRM_HITS_MRM_HITS_POS                   (0) /* Contains the amount of cache hits. */
#define DCACHE_DCACHE_MRM_HITS_THRES_MRM_HITS_THRES_MASK      (0xFFFFFFFF << 0) /* Defines the hits threshold to trigger the interrupt generation. See also the des */
#define DCACHE_DCACHE_MRM_HITS_THRES_MRM_HITS_THRES_POS       (0) /* Defines the hits threshold to trigger the interrupt generation. See also the des */
#define DCACHE_DCACHE_MRM_MISSES_MRM_MISSES_MASK              (0xFFFFFFFF << 0) /* Contains the amount of cache misses. */
#define DCACHE_DCACHE_MRM_MISSES_MRM_MISSES_POS               (0) /* Contains the amount of cache misses. */
#define DCACHE_DCACHE_MRM_MISSES_THRES_MRM_MISSES_THRES_MASK  (0xFFFFFFFF << 0) /* Defines the misses threshold to trigger the interrupt generation. See also the d */
#define DCACHE_DCACHE_MRM_MISSES_THRES_MRM_MISSES_THRES_POS   (0) /* Defines the misses threshold to trigger the interrupt generation. See also the d */
#define DCACHE_DCACHE_MRM_TINT_MRM_TINT_MASK                  (0x7FFFF << 0) /* Defines the time interval for the monitoring in 32 MHz clock cycles. See also th */
#define DCACHE_DCACHE_MRM_TINT_MRM_TINT_POS                   (0) /* Defines the time interval for the monitoring in 32 MHz clock cycles. See also th */

#endif /* __DA1470_DCACHE_H */
