/**
 * \file
 *
 * Copyright (c) 2015-2018 Microchip Technology Inc. and its subsidiaries.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Subject to your compliance with these terms, you may use Microchip
 * software and any derivatives exclusively with Microchip products.
 * It is your responsibility to comply with third party license terms applicable
 * to your use of third party software (including open source software) that
 * may accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES,
 * WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE,
 * INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY,
 * AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP BE
 * LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE
 * SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS BEEN ADVISED OF THE
 * POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY
 * RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
 * THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * \asf_license_stop
 *
 */
/*
 * Support and FAQ: visit <a href="https://www.microchip.com/support/">Microchip Support</a>
 */

#ifndef _SAME70_UART2_INSTANCE_
#define _SAME70_UART2_INSTANCE_

/* ========== Register definition for UART2 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
  #define REG_UART2_CR                       (0x400E1A00U) /**< \brief (UART2) Control Register */
  #define REG_UART2_MR                       (0x400E1A04U) /**< \brief (UART2) Mode Register */
  #define REG_UART2_IER                      (0x400E1A08U) /**< \brief (UART2) Interrupt Enable Register */
  #define REG_UART2_IDR                      (0x400E1A0CU) /**< \brief (UART2) Interrupt Disable Register */
  #define REG_UART2_IMR                      (0x400E1A10U) /**< \brief (UART2) Interrupt Mask Register */
  #define REG_UART2_SR                       (0x400E1A14U) /**< \brief (UART2) Status Register */
  #define REG_UART2_RHR                      (0x400E1A18U) /**< \brief (UART2) Receive Holding Register */
  #define REG_UART2_THR                      (0x400E1A1CU) /**< \brief (UART2) Transmit Holding Register */
  #define REG_UART2_BRGR                     (0x400E1A20U) /**< \brief (UART2) Baud Rate Generator Register */
  #define REG_UART2_CMPR                     (0x400E1A24U) /**< \brief (UART2) Comparison Register */
  #define REG_UART2_WPMR                     (0x400E1AE4U) /**< \brief (UART2) Write Protection Mode Register */
  #define REG_UART2_VERSION                  (0x400E1AFCU) /**< \brief (UART2) Version Register */
#else
  #define REG_UART2_CR      (*(__O  uint32_t*)0x400E1A00U) /**< \brief (UART2) Control Register */
  #define REG_UART2_MR      (*(__IO uint32_t*)0x400E1A04U) /**< \brief (UART2) Mode Register */
  #define REG_UART2_IER     (*(__O  uint32_t*)0x400E1A08U) /**< \brief (UART2) Interrupt Enable Register */
  #define REG_UART2_IDR     (*(__O  uint32_t*)0x400E1A0CU) /**< \brief (UART2) Interrupt Disable Register */
  #define REG_UART2_IMR     (*(__I  uint32_t*)0x400E1A10U) /**< \brief (UART2) Interrupt Mask Register */
  #define REG_UART2_SR      (*(__I  uint32_t*)0x400E1A14U) /**< \brief (UART2) Status Register */
  #define REG_UART2_RHR     (*(__I  uint32_t*)0x400E1A18U) /**< \brief (UART2) Receive Holding Register */
  #define REG_UART2_THR     (*(__O  uint32_t*)0x400E1A1CU) /**< \brief (UART2) Transmit Holding Register */
  #define REG_UART2_BRGR    (*(__IO uint32_t*)0x400E1A20U) /**< \brief (UART2) Baud Rate Generator Register */
  #define REG_UART2_CMPR    (*(__IO uint32_t*)0x400E1A24U) /**< \brief (UART2) Comparison Register */
  #define REG_UART2_WPMR    (*(__IO uint32_t*)0x400E1AE4U) /**< \brief (UART2) Write Protection Mode Register */
  #define REG_UART2_VERSION (*(__I  uint32_t*)0x400E1AFCU) /**< \brief (UART2) Version Register */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _SAME70_UART2_INSTANCE_ */
