/**
 *      __            ____
 *     / /__ _  __   / __/                      __  
 *    / //_/(_)/ /_ / /  ___   ____ ___  __ __ / /_ 
 *   / ,<  / // __/_\ \ / _ \ / __// _ \/ // // __/ 
 *  /_/|_|/_/ \__//___// .__//_/   \___/\_,_/ \__/  
 *                    /_/   github.com/KitSprout    
 * 
 *  @file    boardConfig.h
 *  @author  KitSprout
 *  @date    03-Jun-2018
 *  @brief   
 * 
 */

/* Define to prevent recursive inclusion ---------------------------------------------------*/
#ifndef __BOARDCONFIG_H
#define __BOARDCONFIG_H

#ifdef __cplusplus
  extern "C" {
#endif

/* Includes --------------------------------------------------------------------------------*/
/* Define ----------------------------------------------------------------------------------*/

#define KS_HW_BOARD_NAME                "SmartIMU"
#define KS_HW_MCU_NAME                  "STM32F411CE"

#define KS_HW_USE_CLOCK_SOUCE_INT       (0U)
#define KS_HW_USE_CLOCK_SOUCE_EXT       (1U)
#define KS_HW_HCLOCK_SOUCE              KS_HW_USE_CLOCK_SOUCE_EXT
#define KS_HW_LCLOCK_SOUCE              KS_HW_USE_CLOCK_SOUCE_INT

#define KS_FW_UART_HAL_LIBRARY          (0U)
#define KS_FW_SPI_HAL_LIBRARY           (0U)
#define KS_FW_I2C_HAL_LIBRARY           (0U)
#define KS_FW_USB_ENABLE                (1U)

#define KS_SYSCLK                       SystemCoreClock


/* -------- LED and KEY */

#define LED_R_PIN                       GPIO_PIN_13
#define LED_R_GPIO_PORT                 GPIOC
#define LED_R_Set()                     __GPIO_SET(LED_R_GPIO_PORT, LED_R_PIN)
#define LED_R_Reset()                   __GPIO_RST(LED_R_GPIO_PORT, LED_R_PIN)
#define LED_R_Toggle()                  __GPIO_TOG(LED_R_GPIO_PORT, LED_R_PIN)
#define LED_R_On()                      LED_R_Reset()
#define LED_R_Off()                     LED_R_Set()

#define LED_G_PIN                       GPIO_PIN_14
#define LED_G_GPIO_PORT                 GPIOC
#define LED_G_Set()                     __GPIO_SET(LED_G_GPIO_PORT, LED_G_PIN)
#define LED_G_Reset()                   __GPIO_RST(LED_G_GPIO_PORT, LED_G_PIN)
#define LED_G_Toggle()                  __GPIO_TOG(LED_G_GPIO_PORT, LED_G_PIN)
#define LED_G_On()                      LED_G_Reset()
#define LED_G_Off()                     LED_G_Set()

#define LED_B_PIN                       GPIO_PIN_15
#define LED_B_GPIO_PORT                 GPIOC
#define LED_B_Set()                     __GPIO_SET(LED_B_GPIO_PORT, LED_B_PIN)
#define LED_B_Reset()                   __GPIO_RST(LED_B_GPIO_PORT, LED_B_PIN)
#define LED_B_Toggle()                  __GPIO_TOG(LED_B_GPIO_PORT, LED_B_PIN)
#define LED_B_On()                      LED_B_Reset()
#define LED_B_Off()                     LED_B_Set()


/* -------- TIM Timer */

#define TIMER10                         TIM10
#define TIMER10_CLK_ENABLE()            __HAL_RCC_TIM10_CLK_ENABLE()
#define TIMER10_IRQn                    TIM1_UP_TIM10_IRQn
#define TIMER10_TIMx_IRQn_PREEMPT       0x0F
#define TIMER10_TIMx_IRQn_SUB           1


/* -------- UART Serial */

#define SERIAL_MAX_TXBUF                16
#define SERIAL_MAX_RXBUF                16

#define SERIAL_UARTx                    USART1
#define SERIAL_UARTx_CLK_ENABLE()       __HAL_RCC_USART1_CLK_ENABLE()
#define SERIAL_UARTx_IRQn               USART1_IRQn
#define SERIAL_UARTx_IRQn_PREEMPT       0x0F
#define SERIAL_UARTx_IRQn_SUB           1

#define SERIAL_UARTx_FORCE_RESET()      __HAL_RCC_USART1_FORCE_RESET()
#define SERIAL_UARTx_RELEASE_RESET()    __HAL_RCC_USART1_RELEASE_RESET()

#define SERIAL_TX_PIN                   GPIO_PIN_6
#define SERIAL_TX_GPIO_PORT             GPIOB
#define SERIAL_TX_AF                    GPIO_AF7_USART1

#define SERIAL_RX_PIN                   GPIO_PIN_7
#define SERIAL_RX_GPIO_PORT             GPIOB
#define SERIAL_RX_AF                    GPIO_AF7_USART1

#define SERIAL_BAUDRATE                 115200
#define SERIAL_BYTESIZE                 UART_WORDLENGTH_8B
#define SERIAL_STOPBITS                 UART_STOPBITS_1
#define SERIAL_PARITY                   UART_PARITY_NONE
#define SERIAL_HARDWARECTRL             UART_HWCONTROL_NONE
#define SERIAL_MODE                     UART_MODE_TX_RX
#define SERIAL_OVERSAMPLE               UART_OVERSAMPLING_16


/* -------- Inertial Sensor */

#define IMU_MAX_TXBUF                   16
#define IMU_MAX_RXBUF                   16

#define IMU_SPIx                        SPI2
#define IMU_SPIx_CLK_ENABLE()           __HAL_RCC_SPI2_CLK_ENABLE()
#define IMU_SPIx_IRQn                   SPI2_IRQn
#define IMU_SPIx_IRQn_PREEMPT           0x0F
#define IMU_SPIx_IRQn_SUB               1
#define IMU_SPIx_FORCE_RESET()          __HAL_RCC_SPI2_FORCE_RESET()
#define IMU_SPIx_RELEASE_RESET()        __HAL_RCC_SPI2_RELEASE_RESET()

#define IMU_SPIx_SPEED_HIGH             SPI_BAUDRATEPRESCALER_4   // 12 MHz
#define IMU_SPIx_SPEED_LOW              SPI_BAUDRATEPRESCALER_64  // 0.75 MHz

#define IMU_SCK_PIN                     GPIO_PIN_13
#define IMU_SCK_GPIO_PORT               GPIOB
#define IMU_SCK_AF                      GPIO_AF5_SPI2

#define IMU_SDO_PIN                     GPIO_PIN_14
#define IMU_SDO_GPIO_PORT               GPIOB
#define IMU_SDO_AF                      GPIO_AF5_SPI2

#define IMU_SDI_PIN                     GPIO_PIN_15
#define IMU_SDI_GPIO_PORT               GPIOB
#define IMU_SDI_AF                      GPIO_AF5_SPI2

#define IMU_CSM_PIN                     GPIO_PIN_12
#define IMU_CSM_GPIO_PORT               GPIOB
#define IMU_CSM_H()                     __GPIO_SET(IMU_CSM_GPIO_PORT, IMU_CSM_PIN)
#define IMU_CSM_L()                     __GPIO_RST(IMU_CSM_GPIO_PORT, IMU_CSM_PIN)

#define IMU_CSB_PIN                     GPIO_PIN_8
#define IMU_CSB_GPIO_PORT               GPIOA
#define IMU_CSB_H()                     __GPIO_SET(IMU_CSB_GPIO_PORT, IMU_CSB_PIN)
#define IMU_CSB_L()                     __GPIO_RST(IMU_CSB_GPIO_PORT, IMU_CSB_PIN)


/* Macro -----------------------------------------------------------------------------------*/
/* Typedef ---------------------------------------------------------------------------------*/
/* Extern ----------------------------------------------------------------------------------*/
/* Functions -------------------------------------------------------------------------------*/


#ifdef __cplusplus
}
#endif

#endif

/*************************************** END OF FILE ****************************************/
