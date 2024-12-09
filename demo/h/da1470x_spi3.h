/****************************************************************************
 * ./tmp/da1470x_spi3.h
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

#ifndef __DA1470X_SPI3_H
#define __DA1470X_SPI3_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>
#include "da1470x_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define DA1470X_SPI3_SPI3_CLOCK_OFFSET           0x0008 /* Spi clock register */
#define DA1470X_SPI3_SPI3_CONFIG_OFFSET          0x0004 /* Spi control register */
#define DA1470X_SPI3_SPI3_CS_CONFIG_OFFSET       0x0024 /* Spi cs configuration register */
#define DA1470X_SPI3_SPI3_CTRL_OFFSET            0x0000 /* Spi control register */
#define DA1470X_SPI3_SPI3_FIFO_CONFIG_OFFSET     0x000C /* Spi fifo configuration register */
#define DA1470X_SPI3_SPI3_FIFO_READ_OFFSET       0x001C /* Spi RX fifo read register */
#define DA1470X_SPI3_SPI3_FIFO_STATUS_OFFSET     0x0018 /* SPI RX/TX fifo status register */
#define DA1470X_SPI3_SPI3_FIFO_WRITE_OFFSET      0x0020 /* Spi TX fifo wtite register */
#define DA1470X_SPI3_SPI3_IRQ_MASK_OFFSET        0x0010 /* Spi interrupt mask register */
#define DA1470X_SPI3_SPI3_STATUS_OFFSET          0x0014 /* Spi status register */
#define DA1470X_SPI3_SPI3_TXBUFFER_FORCE_OFFSET  0x002C /* SPI TX buffer force low value */

/* Register addresses *******************************************************/

#define DA1470X_SPI3_BASE                        0x51000200 /* SPI3 registers */

#define DA1470X_SPI3_SPI3_CLOCK                  (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_CLOCK_OFFSET) /* Spi clock register */
#define DA1470X_SPI3_SPI3_CONFIG                 (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_CONFIG_OFFSET) /* Spi control register */
#define DA1470X_SPI3_SPI3_CS_CONFIG              (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_CS_CONFIG_OFFSET) /* Spi cs configuration register */
#define DA1470X_SPI3_SPI3_CTRL                   (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_CTRL_OFFSET) /* Spi control register */
#define DA1470X_SPI3_SPI3_FIFO_CONFIG            (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_FIFO_CONFIG_OFFSET) /* Spi fifo configuration register */
#define DA1470X_SPI3_SPI3_FIFO_READ              (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_FIFO_READ_OFFSET) /* Spi RX fifo read register */
#define DA1470X_SPI3_SPI3_FIFO_STATUS            (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_FIFO_STATUS_OFFSET) /* SPI RX/TX fifo status register */
#define DA1470X_SPI3_SPI3_FIFO_WRITE             (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_FIFO_WRITE_OFFSET) /* Spi TX fifo wtite register */
#define DA1470X_SPI3_SPI3_IRQ_MASK               (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_IRQ_MASK_OFFSET) /* Spi interrupt mask register */
#define DA1470X_SPI3_SPI3_STATUS                 (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_STATUS_OFFSET) /* Spi status register */
#define DA1470X_SPI3_SPI3_TXBUFFER_FORCE         (DA1470X_SPI3_BASE + DA1470X_SPI3_SPI3_TXBUFFER_FORCE_OFFSET) /* SPI TX buffer force low value */

/* Register bit definitions *************************************************/


/* SPI3_CLOCK Register */

#define SPI3_SPI_CLK_DIV_MASK                    (0x7F << 0) /* Applicable only in master mode Defines the spi clock frequency in master only mo */
#define SPI3_SPI_CLK_DIV_POS                     (0) /* Applicable only in master mode Defines the spi clock frequency in master only mo */

/* SPI3_CONFIG Register */

#define SPI3_SPI_SLAVE_EN                        (1U << 7) /* 0 = SPI module master mode 1 = SPI module slave mode */
#define SPI3_SPI_WORD_LENGTH_MASK                (0x1F << 2) /* Define the spi word length = 1+ SPI_WORD_LENGTH (range 4 to 32) Note: should be  */
#define SPI3_SPI_WORD_LENGTH_POS                 (2) /* Define the spi word length = 1+ SPI_WORD_LENGTH (range 4 to 32) Note: should be  */
#define SPI3_SPI_MODE_MASK                       (0x3 << 0) /* Define the spi mode (CPOL, CPHA) 0 = new data on falling, capture on rising, clk */
#define SPI3_SPI_MODE_POS                        (0) /* Define the spi mode (CPOL, CPHA) 0 = new data on falling, capture on rising, clk */

/* SPI3_CS_CONFIG Register */

#define SPI3_SPI_CS_SELECT_MASK                  (0x7 << 0) /* Control the cs output in master mode 0 = none slave device selected 1 = selected */
#define SPI3_SPI_CS_SELECT_POS                   (0) /* Control the cs output in master mode 0 = none slave device selected 1 = selected */

/* SPI3_CTRL Register */

#define SPI3_SPI_SWAP_BYTES                      (1U << 7) /* 0 = normal operation 1 = LSB and MSB are swaped in APB interface In case of 8-bi */
#define SPI3_SPI_CAPTURE_AT_NEXT_EDGE            (1U << 6) /* 0 = SPI captures data at correct clock edge 1 = SPI captures data at next clock  */
#define SPI3_SPI_FIFO_RESET                      (1U << 5) /* 0 = Fifo normal operation 1 = Fifo in reset state */
#define SPI3_SPI_DMA_RX_EN                       (1U << 4) /* Applicable only when SPI_RX_EN=1 0 = No DMA request for RX 1 = DMA request when  */
#define SPI3_SPI_DMA_TX_EN                       (1U << 3) /* Applicable only when SPI_TX_EN=1 0 = No DMA request for TX 1 = DMA request when  */
#define SPI3_SPI_RX_EN                           (1U << 2) /* 0 = RX path is disabled 1 = RX path is enabled Note: if spi mode=1 or spi mode=3 */
#define SPI3_SPI_TX_EN                           (1U << 1) /* 0 = TX path is disabled 1 = TX path is enabled */
#define SPI3_SPI_EN                              (1U << 0) /* 0 = SPI module is disable 1 = SPI module is enable */

/* SPI3_FIFO_CONFIG Register */

#define SPI3_SPI_RX_TL_MASK                      (0xFF << 8) /* Receive FIFO threshold level in bytes. Control the level of bytes in fifo that t */
#define SPI3_SPI_RX_TL_POS                       (8) /* Receive FIFO threshold level in bytes. Control the level of bytes in fifo that t */
#define SPI3_SPI_TX_TL_MASK                      (0xFF << 0) /* Transmit FIFO threshold level in bytes. Control the level of bytes in fifo that  */
#define SPI3_SPI_TX_TL_POS                       (0) /* Transmit FIFO threshold level in bytes. Control the level of bytes in fifo that  */

/* SPI3_FIFO_READ Register */

#define SPI3_SPI_FIFO_READ_MASK                  (0xFFFFFFFF << 0) /* Read from RX fifo. Read access is permit only if SPI_RX_FIFO_EMPTY=0. */
#define SPI3_SPI_FIFO_READ_POS                   (0) /* Read from RX fifo. Read access is permit only if SPI_RX_FIFO_EMPTY=0. */

/* SPI3_FIFO_STATUS Register */

#define SPI3_SPI_TRANSACTION_ACTIVE              (1U << 15) /* In master mode 0 = spi transaction is inactive 1 = spi transaction is active */
#define SPI3_SPI_RX_FIFO_OVFL                    (1U << 14) /* When 1, receive data is not written to fifo because fifo was full and interrupt  */
#define SPI3_SPI_STATUS_TX_FULL                  (1U << 13) /* 0 = TX fifo is not full 1 = TX fifo is full */
#define SPI3_SPI_STATUS_RX_EMPTY                 (1U << 12) /* 0 = RX fifo is not empty 1 = RX fifo is empty */
#define SPI3_SPI_TX_FIFO_LEVEL_MASK              (0x3F << 6) /* Gives the number of bytes in TX fifo */
#define SPI3_SPI_TX_FIFO_LEVEL_POS               (6) /* Gives the number of bytes in TX fifo */
#define SPI3_SPI_RX_FIFO_LEVEL_MASK              (0x3F << 0) /* Gives the number of bytes in RX fifo */
#define SPI3_SPI_RX_FIFO_LEVEL_POS               (0) /* Gives the number of bytes in RX fifo */

/* SPI3_FIFO_WRITE Register */

#define SPI3_SPI_FIFO_WRITE_MASK                 (0xFFFFFFFF << 0) /* Write to TX fifo. Write access is permit only if SPI_TX_FIFO_FULL is 0 */
#define SPI3_SPI_FIFO_WRITE_POS                  (0) /* Write to TX fifo. Write access is permit only if SPI_TX_FIFO_FULL is 0 */

/* SPI3_IRQ_MASK Register */

#define SPI3_SPI_IRQ_MASK_RX_FULL                (1U << 1) /* 0 = FIFO RX full irq is masked 1 = FIFO RX full irq is enabled */
#define SPI3_SPI_IRQ_MASK_TX_EMPTY               (1U << 0) /* 0 = FIFO TX empty irq is masked 1 = FIFO TX empy irq is enabled */

/* SPI3_STATUS Register */

#define SPI3_SPI_STATUS_RX_FULL                  (1U << 1) /* Auto clear 0 = RX fifo level is less than SPI_RX_TL+1 1 = RX fifo level is more  */
#define SPI3_SPI_STATUS_TX_EMPTY                 (1U << 0) /* Auto clear 0 = TX fifo level is larger than SPI_TX_TL 1 = TX fifo level is less  */

/* SPI3_TXBUFFER_FORCE Register */

#define SPI3_SPI_TXBUFFER_FORCE_MASK             (0xFFFFFFFF << 0) /* Write directly the tx buffer . It must to be used only in slave mode */
#define SPI3_SPI_TXBUFFER_FORCE_POS              (0) /* Write directly the tx buffer . It must to be used only in slave mode */

#endif /* __DA1470X_SPI3_H */
