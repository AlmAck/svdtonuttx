/****************************************************************************
 * ./tmp/da1470_memctrl.h
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

#ifndef __DA1470_MEMCTRL_H
#define __DA1470_MEMCTRL_H

/* Register offsets *********************************************************/

#define DA1470_MEMCTRL_BUSY_RESET_OFFSET                   0x0078 /* BSR Reset Register */
#define DA1470_MEMCTRL_BUSY_RESET2_OFFSET                  0x007C /* BSR2 Reset Register */
#define DA1470_MEMCTRL_BUSY_SET_OFFSET                     0x0070 /* BSR Set Register */
#define DA1470_MEMCTRL_BUSY_SET2_OFFSET                    0x0074 /* BSR2 Set Register */
#define DA1470_MEMCTRL_BUSY_STAT_OFFSET                    0x0080 /* BSR Status Register */
#define DA1470_MEMCTRL_BUSY_STAT2_OFFSET                   0x0084 /* BSR2 Status Register */
#define DA1470_MEMCTRL_CMAC_STATUS_OFFSET                  0x0030 /* Memory Arbiter Status Register */
#define DA1470_MEMCTRL_CMI_CODE_BASE_OFFSET                0x0020 /* CMAC code Base Address Register */
#define DA1470_MEMCTRL_CMI_DATA_BASE_OFFSET                0x0024 /* CMAC data Base Address Register */
#define DA1470_MEMCTRL_CMI_END_OFFSET                      0x002C /* CMAC end Address Register */
#define DA1470_MEMCTRL_CMI_SHARED_BASE_OFFSET              0x0028 /* CMAC shared data Base Address Register */
#define DA1470_MEMCTRL_MEM_PRIO_ARB1_4_OFFSET              0x0004 /* Priority Control Register for arbiter 1, 2, 3 and 4 */
#define DA1470_MEMCTRL_MEM_PRIO_ARB5_8_OFFSET              0x0008 /* Priority Control Register for arbiter 5, 6, 7 and 8 */
#define DA1470_MEMCTRL_MEM_STALL_OFFSET                    0x0010 /* Maximum Stall cycles Control Register */
#define DA1470_MEMCTRL_MEM_STATUS2_OFFSET                  0x0018 /* RAM cells Status Register */
#define DA1470_MEMCTRL_MEM_STATUS_OFFSET                   0x0014 /* Memory Arbiter Status Register */

/* Register addresses *******************************************************/

#define DA1470_MEMCTRL_BASE                                0x50050000 /* MEMCTRL registers */

#define DA1470_MEMCTRL_BUSY_RESET                          (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_BUSY_RESET_OFFSET) /* BSR Reset Register */
#define DA1470_MEMCTRL_BUSY_RESET2                         (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_BUSY_RESET2_OFFSET) /* BSR2 Reset Register */
#define DA1470_MEMCTRL_BUSY_SET                            (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_BUSY_SET_OFFSET) /* BSR Set Register */
#define DA1470_MEMCTRL_BUSY_SET2                           (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_BUSY_SET2_OFFSET) /* BSR2 Set Register */
#define DA1470_MEMCTRL_BUSY_STAT                           (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_BUSY_STAT_OFFSET) /* BSR Status Register */
#define DA1470_MEMCTRL_BUSY_STAT2                          (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_BUSY_STAT2_OFFSET) /* BSR2 Status Register */
#define DA1470_MEMCTRL_CMAC_STATUS                         (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_CMAC_STATUS_OFFSET) /* Memory Arbiter Status Register */
#define DA1470_MEMCTRL_CMI_CODE_BASE                       (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_CMI_CODE_BASE_OFFSET) /* CMAC code Base Address Register */
#define DA1470_MEMCTRL_CMI_DATA_BASE                       (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_CMI_DATA_BASE_OFFSET) /* CMAC data Base Address Register */
#define DA1470_MEMCTRL_CMI_END                             (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_CMI_END_OFFSET) /* CMAC end Address Register */
#define DA1470_MEMCTRL_CMI_SHARED_BASE                     (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_CMI_SHARED_BASE_OFFSET) /* CMAC shared data Base Address Register */
#define DA1470_MEMCTRL_MEM_PRIO_ARB1_4                     (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_MEM_PRIO_ARB1_4_OFFSET) /* Priority Control Register for arbiter 1, 2, 3 and 4 */
#define DA1470_MEMCTRL_MEM_PRIO_ARB5_8                     (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_MEM_PRIO_ARB5_8_OFFSET) /* Priority Control Register for arbiter 5, 6, 7 and 8 */
#define DA1470_MEMCTRL_MEM_STALL                           (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_MEM_STALL_OFFSET) /* Maximum Stall cycles Control Register */
#define DA1470_MEMCTRL_MEM_STATUS2                         (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_MEM_STATUS2_OFFSET) /* RAM cells Status Register */
#define DA1470_MEMCTRL_MEM_STATUS                          (DA1470_MEMCTRL_BASE + DA1470_MEMCTRL_MEM_STATUS_OFFSET) /* Memory Arbiter Status Register */

/* Register bit definitions *************************************************/

#define MEMCTRL_BUSY_RESET_BUSY_SDADC_MASK                 (0x3 << 30) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SDADC_POS                  (30) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_GPADC_MASK                 (0x3 << 28) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_GPADC_POS                  (28) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SRC2_MASK                  (0x3 << 26) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SRC2_POS                   (26) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SRC_MASK                   (0x3 << 24) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SRC_POS                    (24) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_PDM_MASK                   (0x3 << 22) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_PDM_POS                    (22) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_PCM_MASK                   (0x3 << 20) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_PCM_POS                    (20) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_I3C_MASK                   (0x3 << 18) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_I3C_POS                    (18) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_I2C3_MASK                  (0x3 << 16) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_I2C3_POS                   (16) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_I2C2_MASK                  (0x3 << 14) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_I2C2_POS                   (14) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_I2C_MASK                   (0x3 << 12) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_I2C_POS                    (12) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SPI3_MASK                  (0x3 << 10) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SPI3_POS                   (10) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SPI2_MASK                  (0x3 << 8) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SPI2_POS                   (8) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SPI_MASK                   (0x3 << 6) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_SPI_POS                    (6) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_UART3_MASK                 (0x3 << 4) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_UART3_POS                  (4) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_UART2_MASK                 (0x3 << 2) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_UART2_POS                  (2) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_UART_MASK                  (0x3 << 0) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET_BUSY_UART_POS                   (0) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER6_MASK               (0x3 << 10) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER6_POS                (10) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER5_MASK               (0x3 << 8) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER5_POS                (8) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER4_MASK               (0x3 << 6) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER4_POS                (6) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER3_MASK               (0x3 << 4) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER3_POS                (4) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER2_MASK               (0x3 << 2) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER2_POS                (2) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER_MASK                (0x3 << 0) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_RESET2_BUSY_TIMER_POS                 (0) /* Clear the BUSY bitfield, by writing the master code which has claimed to this fi */
#define MEMCTRL_BUSY_SET_BUSY_SDADC_MASK                   (0x3 << 30) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SDADC_POS                    (30) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_GPADC_MASK                   (0x3 << 28) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_GPADC_POS                    (28) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SRC2_MASK                    (0x3 << 26) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SRC2_POS                     (26) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SRC_MASK                     (0x3 << 24) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SRC_POS                      (24) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_PDM_MASK                     (0x3 << 22) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_PDM_POS                      (22) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_PCM_MASK                     (0x3 << 20) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_PCM_POS                      (20) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_I3C_MASK                     (0x3 << 18) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_I3C_POS                      (18) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_I2C3_MASK                    (0x3 << 16) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_I2C3_POS                     (16) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_I2C2_MASK                    (0x3 << 14) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_I2C2_POS                     (14) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_I2C_MASK                     (0x3 << 12) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_I2C_POS                      (12) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SPI3_MASK                    (0x3 << 10) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SPI3_POS                     (10) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SPI2_MASK                    (0x3 << 8) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SPI2_POS                     (8) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SPI_MASK                     (0x3 << 6) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_SPI_POS                      (6) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_UART3_MASK                   (0x3 << 4) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_UART3_POS                    (4) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_UART2_MASK                   (0x3 << 2) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_UART2_POS                    (2) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_UART_MASK                    (0x3 << 0) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET_BUSY_UART_POS                     (0) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER6_MASK                 (0x3 << 10) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER6_POS                  (10) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER5_MASK                 (0x3 << 8) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER5_POS                  (8) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER4_MASK                 (0x3 << 6) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER4_POS                  (6) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER3_MASK                 (0x3 << 4) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER3_POS                  (4) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER2_MASK                 (0x3 << 2) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER2_POS                  (2) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER_MASK                  (0x3 << 0) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_SET2_BUSY_TIMER_POS                   (0) /* Writing a non-zero value to this field sets the corresponding BUSY bit, but only */
#define MEMCTRL_BUSY_STAT_BUSY_SDADC_MASK                  (0x3 << 30) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SDADC_POS                   (30) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_GPADC_MASK                  (0x3 << 28) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_GPADC_POS                   (28) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SRC2_MASK                   (0x3 << 26) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SRC2_POS                    (26) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SRC_MASK                    (0x3 << 24) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SRC_POS                     (24) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_PDM_MASK                    (0x3 << 22) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_PDM_POS                     (22) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_PCM_MASK                    (0x3 << 20) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_PCM_POS                     (20) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_I3C_MASK                    (0x3 << 18) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_I3C_POS                     (18) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_I2C3_MASK                   (0x3 << 16) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_I2C3_POS                    (16) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_I2C2_MASK                   (0x3 << 14) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_I2C2_POS                    (14) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_I2C_MASK                    (0x3 << 12) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_I2C_POS                     (12) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SPI3_MASK                   (0x3 << 10) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SPI3_POS                    (10) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SPI2_MASK                   (0x3 << 8) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SPI2_POS                    (8) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SPI_MASK                    (0x3 << 6) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_SPI_POS                     (6) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_UART3_MASK                  (0x3 << 4) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_UART3_POS                   (4) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_UART2_MASK                  (0x3 << 2) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_UART2_POS                   (2) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_UART_MASK                   (0x3 << 0) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT_BUSY_UART_POS                    (0) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER6_MASK                (0x3 << 10) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER6_POS                 (10) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER5_MASK                (0x3 << 8) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER5_POS                 (8) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER4_MASK                (0x3 << 6) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER4_POS                 (6) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER3_MASK                (0x3 << 4) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER3_POS                 (4) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER2_MASK                (0x3 << 2) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER2_POS                 (2) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER_MASK                 (0x3 << 0) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_BUSY_STAT2_BUSY_TIMER_POS                  (0) /* A non-zero value indicates the resource is busy. The value represents which mast */
#define MEMCTRL_CMAC_STATUS_CMI_CLEAR_READY                (1U << 13) /* Writing a '1' clears CMI_NOT_READY bit. */
#define MEMCTRL_CMAC_STATUS_CMI_NOT_READY                  (1U << 12) /* 0: Normal operation 1: CMI access performed which couldn't be handled right away */
#define MEMCTRL_CMAC_STATUS_AHB_RFMON_WR_BUFF_CNT_MASK     (0xF << 8) /* The maximum number of arbiter clock cycles that an CPUC AHB access has been buff */
#define MEMCTRL_CMAC_STATUS_AHB_RFMON_WR_BUFF_CNT_POS      (8) /* The maximum number of arbiter clock cycles that an CPUC AHB access has been buff */
#define MEMCTRL_CMAC_STATUS_AHB_SYS2CMAC_WR_BUFF_CNT_MASK  (0xF << 4) /* The maximum number of arbiter clock cycles that an CPUS_AHB access has been buff */
#define MEMCTRL_CMAC_STATUS_AHB_SYS2CMAC_WR_BUFF_CNT_POS   (4) /* The maximum number of arbiter clock cycles that an CPUS_AHB access has been buff */
#define MEMCTRL_CMAC_STATUS_AHB_RFMON_CLR_WR_BUFF          (1U << 3) /* Writing a '1' clears AHB_CPUC_WR_BUFF_CNT. */
#define MEMCTRL_CMAC_STATUS_AHB_SYS2CMAC_CLR_WR_BUFF       (1U << 2) /* Writing a '1' clears AHB_CPUS_WR_BUFF_CNT. */
#define MEMCTRL_CMAC_STATUS_AHB_RFMON_WRITE_BUFF           (1U << 1) /* 0: No CPUC AHB write access is buffered. 1: Currently a single CPUC AHB write ac */
#define MEMCTRL_CMAC_STATUS_AHB_SYS2CMAC_WRITE_BUFF        (1U << 0) /* 0: No CPUS AHB write access is buffered. 1: Currently a single CPUS AHB write ac */
#define MEMCTRL_CMI_CODE_BASE_CMI_CODE_BASE_ADDR_MASK      (0x3FF << 10) /* Base address for CMAC code with steps of 1 kB. 0x001: 1 kB base address 0x010: 1 */
#define MEMCTRL_CMI_CODE_BASE_CMI_CODE_BASE_ADDR_POS       (10) /* Base address for CMAC code with steps of 1 kB. 0x001: 1 kB base address 0x010: 1 */
#define MEMCTRL_CMI_DATA_BASE_CMI_DATA_BASE_ADDR_MASK      (0x3FFFF << 2) /* Base address for CMAC data with steps of 4 bytes. Note that the CMAC address sch */
#define MEMCTRL_CMI_DATA_BASE_CMI_DATA_BASE_ADDR_POS       (2) /* Base address for CMAC data with steps of 4 bytes. Note that the CMAC address sch */
#define MEMCTRL_CMI_END_CMI_END_ADDR_MASK                  (0x3FF << 10) /* End address for CMAC code and data accesses with steps of 1 kB. Note that the CM */
#define MEMCTRL_CMI_END_CMI_END_ADDR_POS                   (10) /* End address for CMAC code and data accesses with steps of 1 kB. Note that the CM */
#define MEMCTRL_CMI_SHARED_BASE_CMI_SHARED_BASE_ADDR_MASK  (0x3FF << 10) /* Base address for CMAC shared data with steps of 1 kB. Note that the CMAC address */
#define MEMCTRL_CMI_SHARED_BASE_CMI_SHARED_BASE_ADDR_POS   (10) /* Base address for CMAC shared data with steps of 1 kB. Note that the CMAC address */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB4_AHB_DMA_PRIO_MASK     (0x3 << 28) /* Priority for the DMA AHB interface of arbiter 4 00: low priority (default) 01: m */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB4_AHB_DMA_PRIO_POS      (28) /* Priority for the DMA AHB interface of arbiter 4 00: low priority (default) 01: m */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB4_AHB_CPUS_PRIO_MASK    (0x3 << 26) /* Priority for the CPUS AHB interface of arbiter 4. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB4_AHB_CPUS_PRIO_POS     (26) /* Priority for the CPUS AHB interface of arbiter 4. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB3_AHB_DMA_PRIO_MASK     (0x3 << 20) /* Priority for the DMA AHB interface of arbiter 3 00: low priority (default) 01: m */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB3_AHB_DMA_PRIO_POS      (20) /* Priority for the DMA AHB interface of arbiter 3 00: low priority (default) 01: m */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB3_AHB_CPUS_PRIO_MASK    (0x3 << 18) /* Priority for the CPUS AHB interface of arbiter 3. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB3_AHB_CPUS_PRIO_POS     (18) /* Priority for the CPUS AHB interface of arbiter 3. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB3_AHB_CPUC_PRIO_MASK    (0x3 << 16) /* Priority for the CPUC AHB interface of arbiter 3. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB3_AHB_CPUC_PRIO_POS     (16) /* Priority for the CPUC AHB interface of arbiter 3. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB2_SNC_PRIO_MASK         (0x3 << 14) /* Priority for the SNC interface of arbiter 2. 00: low priority (default) 01: mid  */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB2_SNC_PRIO_POS          (14) /* Priority for the SNC interface of arbiter 2. 00: low priority (default) 01: mid  */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB2_AHB_DMA_PRIO_MASK     (0x3 << 12) /* Priority for the DMA AHB interface of arbiter 2. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB2_AHB_DMA_PRIO_POS      (12) /* Priority for the DMA AHB interface of arbiter 2. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB2_AHB_CPUS_PRIO_MASK    (0x3 << 10) /* Priority for the CPUS AHB interface of arbiter 2. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB2_AHB_CPUS_PRIO_POS     (10) /* Priority for the CPUS AHB interface of arbiter 2. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB2_AHB_CPUC_PRIO_MASK    (0x3 << 8) /* Priority for the CPUC AHB interface of arbiter 2. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB2_AHB_CPUC_PRIO_POS     (8) /* Priority for the CPUC AHB interface of arbiter 2. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB1_SNC_PRIO_MASK         (0x3 << 6) /* Priority for the SNC interface of arbiter 1. 00: low priority (default) 01: mid  */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB1_SNC_PRIO_POS          (6) /* Priority for the SNC interface of arbiter 1. 00: low priority (default) 01: mid  */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB1_AHB_DMA_PRIO_MASK     (0x3 << 4) /* Priority for the DMA AHB interface of arbiter 1. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB1_AHB_DMA_PRIO_POS      (4) /* Priority for the DMA AHB interface of arbiter 1. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB1_AHB_CPUS_PRIO_MASK    (0x3 << 2) /* Priority for the CPUS AHB interface of arbiter 1. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB1_AHB_CPUS_PRIO_POS     (2) /* Priority for the CPUS AHB interface of arbiter 1. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB1_AHB_CPUC_PRIO_MASK    (0x3 << 0) /* Priority for the CPUC AHB interface of arbiter 1. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB1_4_ARB1_AHB_CPUC_PRIO_POS     (0) /* Priority for the CPUC AHB interface of arbiter 1. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB8_SNC_PRIO_MASK         (0x3 << 30) /* Priority for the SNC interface of arbiter 8. 00: low priority (default) 01: mid  */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB8_SNC_PRIO_POS          (30) /* Priority for the SNC interface of arbiter 8. 00: low priority (default) 01: mid  */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB8_AHB_DMA_PRIO_MASK     (0x3 << 28) /* Priority for the DMA AHB interface of arbiter 8. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB8_AHB_DMA_PRIO_POS      (28) /* Priority for the DMA AHB interface of arbiter 8. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB8_AHB_CPUS_PRIO_MASK    (0x3 << 26) /* Priority for the CPUS AHB interface of arbiter 8. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB8_AHB_CPUS_PRIO_POS     (26) /* Priority for the CPUS AHB interface of arbiter 8. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB7_AHB_DMA_PRIO_MASK     (0x3 << 20) /* Priority for the DMA AHB interface of arbiter 7. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB7_AHB_DMA_PRIO_POS      (20) /* Priority for the DMA AHB interface of arbiter 7. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB7_AHB_CPUS_PRIO_MASK    (0x3 << 18) /* Priority for the CPUS AHB interface of arbiter 7. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB7_AHB_CPUS_PRIO_POS     (18) /* Priority for the CPUS AHB interface of arbiter 7. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB6_AHB_DMA_PRIO_MASK     (0x3 << 12) /* Priority for the DMA AHB interface of arbiter 6. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB6_AHB_DMA_PRIO_POS      (12) /* Priority for the DMA AHB interface of arbiter 6. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB6_AHB_CPUS_PRIO_MASK    (0x3 << 10) /* Priority for the CPUS AHB interface of arbiter 6. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB6_AHB_CPUS_PRIO_POS     (10) /* Priority for the CPUS AHB interface of arbiter 6. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB5_AHB_DMA_PRIO_MASK     (0x3 << 4) /* Priority for the DMA AHB interface of arbiter 5. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB5_AHB_DMA_PRIO_POS      (4) /* Priority for the DMA AHB interface of arbiter 5. 00: low priority (default) 01:  */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB5_AHB_CPUS_PRIO_MASK    (0x3 << 2) /* Priority for the CPUS AHB interface of arbiter 5. 00: low priority (default) 01: */
#define MEMCTRL_MEM_PRIO_ARB5_8_ARB5_AHB_CPUS_PRIO_POS     (2) /* Priority for the CPUS AHB interface of arbiter 5. 00: low priority (default) 01: */
#define MEMCTRL_MEM_STALL_SNC_MAX_STALL_MASK               (0xF << 12) /* Maximum allowed number of stall cycles for the SNC interface. If exceeded, the i */
#define MEMCTRL_MEM_STALL_SNC_MAX_STALL_POS                (12) /* Maximum allowed number of stall cycles for the SNC interface. If exceeded, the i */
#define MEMCTRL_MEM_STALL_AHB_DMA_MAX_STALL_MASK           (0xF << 8) /* Maximum allowed number of stall cycles for the DMA AHB interface. If exceeded, t */
#define MEMCTRL_MEM_STALL_AHB_DMA_MAX_STALL_POS            (8) /* Maximum allowed number of stall cycles for the DMA AHB interface. If exceeded, t */
#define MEMCTRL_MEM_STALL_AHB_CPUS_MAX_STALL_MASK          (0xF << 4) /* Maximum allowed number of stall cycles for the CPUS AHB interface. If exceeded,  */
#define MEMCTRL_MEM_STALL_AHB_CPUS_MAX_STALL_POS           (4) /* Maximum allowed number of stall cycles for the CPUS AHB interface. If exceeded,  */
#define MEMCTRL_MEM_STALL_AHB_CPUC_MAX_STALL_MASK          (0xF << 0) /* Maximum allowed number of stall cycles for the CPUC AHB interface. If exceeded,  */
#define MEMCTRL_MEM_STALL_AHB_CPUC_MAX_STALL_POS           (0) /* Maximum allowed number of stall cycles for the CPUC AHB interface. If exceeded,  */
#define MEMCTRL_MEM_STATUS2_RAM13_OFF_BUT_ACCESS           (1U << 13) /* Reading a '1' indicates RAM13 was off but still access was performed. Writing a  */
#define MEMCTRL_MEM_STATUS2_RAM12_OFF_BUT_ACCESS           (1U << 12) /* Reading a '1' indicates RAM12 was off but still access was performed. Writing a  */
#define MEMCTRL_MEM_STATUS2_RAM11_OFF_BUT_ACCESS           (1U << 11) /* Reading a '1' indicates RAM11 was off but still access was performed. Writing a  */
#define MEMCTRL_MEM_STATUS2_RAM10_OFF_BUT_ACCESS           (1U << 10) /* Reading a '1' indicates RAM10 was off but still access was performed. Writing a  */
#define MEMCTRL_MEM_STATUS2_RAM9_OFF_BUT_ACCESS            (1U << 9) /* Reading a '1' indicates RAM9 was off but still access was performed. Writing a ' */
#define MEMCTRL_MEM_STATUS2_RAM8_OFF_BUT_ACCESS            (1U << 8) /* Reading a '1' indicates RAM8 was off but still access was performed. Writing a ' */
#define MEMCTRL_MEM_STATUS2_RAM7_OFF_BUT_ACCESS            (1U << 7) /* Reading a '1' indicates RAM7 was off but still access was performed. Writing a ' */
#define MEMCTRL_MEM_STATUS2_RAM6_OFF_BUT_ACCESS            (1U << 6) /* Reading a '1' indicates RAM6 was off but still access was performed. Writing a ' */
#define MEMCTRL_MEM_STATUS2_RAM5_OFF_BUT_ACCESS            (1U << 5) /* Reading a '1' indicates RAM5 was off but still access was performed. Writing a ' */
#define MEMCTRL_MEM_STATUS2_RAM4_OFF_BUT_ACCESS            (1U << 4) /* Reading a '1' indicates RAM4 was off but still access was performed. Writing a ' */
#define MEMCTRL_MEM_STATUS2_RAM3_OFF_BUT_ACCESS            (1U << 3) /* Reading a '1' indicates RAM3 was off but still access was performed. Writing a ' */
#define MEMCTRL_MEM_STATUS2_RAM2_OFF_BUT_ACCESS            (1U << 2) /* Reading a '1' indicates RAM2 was off but still access was performed. Writing a ' */
#define MEMCTRL_MEM_STATUS2_RAM1_OFF_BUT_ACCESS            (1U << 1) /* Reading a '1' indicates RAM1 was off but still access was performed. Writing a ' */
#define MEMCTRL_MEM_STATUS2_RAM0_OFF_BUT_ACCESS            (1U << 0) /* Reading a '1' indicates RAM0 was off but still access was performed. Writing a ' */
#define MEMCTRL_MEM_STATUS_AHB_SNC_WR_BUFF_CNT_MASK        (0xF << 20) /* The maximum number of arbiter clock cycles that an SNC AHB access has been buffe */
#define MEMCTRL_MEM_STATUS_AHB_SNC_WR_BUFF_CNT_POS         (20) /* The maximum number of arbiter clock cycles that an SNC AHB access has been buffe */
#define MEMCTRL_MEM_STATUS_AHB_DMA_WR_BUFF_CNT_MASK        (0xF << 16) /* The maximum number of arbiter clock cycles that an DMA AHB access has been buffe */
#define MEMCTRL_MEM_STATUS_AHB_DMA_WR_BUFF_CNT_POS         (16) /* The maximum number of arbiter clock cycles that an DMA AHB access has been buffe */
#define MEMCTRL_MEM_STATUS_AHB_CPUC_WR_BUFF_CNT_MASK       (0xF << 12) /* The maximum number of arbiter clock cycles that an CPUC AHB access has been buff */
#define MEMCTRL_MEM_STATUS_AHB_CPUC_WR_BUFF_CNT_POS        (12) /* The maximum number of arbiter clock cycles that an CPUC AHB access has been buff */
#define MEMCTRL_MEM_STATUS_AHB_CPUS_WR_BUFF_CNT_MASK       (0xF << 8) /* The maximum number of arbiter clock cycles that an CPUS_AHB access has been buff */
#define MEMCTRL_MEM_STATUS_AHB_CPUS_WR_BUFF_CNT_POS        (8) /* The maximum number of arbiter clock cycles that an CPUS_AHB access has been buff */
#define MEMCTRL_MEM_STATUS_AHB_SNC_CLR_WR_BUFF             (1U << 7) /* Writing a '1' clears AHB_SNC_WR_BUFF_CNT. */
#define MEMCTRL_MEM_STATUS_AHB_DMA_CLR_WR_BUFF             (1U << 6) /* Writing a '1' clears AHB_DMA_WR_BUFF_CNT. */
#define MEMCTRL_MEM_STATUS_AHB_CPUC_CLR_WR_BUFF            (1U << 5) /* Writing a '1' clears AHB_CPUC_WR_BUFF_CNT. */
#define MEMCTRL_MEM_STATUS_AHB_CPUS_CLR_WR_BUFF            (1U << 4) /* Writing a '1' clears AHB_CPUS_WR_BUFF_CNT. */
#define MEMCTRL_MEM_STATUS_AHB_SNC_WRITE_BUFF              (1U << 3) /* 0: No SNC AHB write access is buffered. 1: Currently a single SNC AHB write acce */
#define MEMCTRL_MEM_STATUS_AHB_DMA_WRITE_BUFF              (1U << 2) /* 0: No DMA AHB write access is buffered. 1: Currently a single DMA AHB write acce */
#define MEMCTRL_MEM_STATUS_AHB_CPUC_WRITE_BUFF             (1U << 1) /* 0: No CPUC AHB write access is buffered. 1: Currently a single CPUC AHB write ac */
#define MEMCTRL_MEM_STATUS_AHB_CPUS_WRITE_BUFF             (1U << 0) /* 0: No CPUS AHB write access is buffered. 1: Currently a single CPUS AHB write ac */

#endif /* __DA1470_MEMCTRL_H */
