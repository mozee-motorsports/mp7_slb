/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"
#include "stm32g4xx_nucleo.h"
#include <stdio.h>

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RL3_Pin GPIO_PIN_14
#define RL3_GPIO_Port GPIOC
#define RL4_Pin GPIO_PIN_15
#define RL4_GPIO_Port GPIOC
#define RL5_Pin GPIO_PIN_0
#define RL5_GPIO_Port GPIOF
#define CockPitBRB_Pin GPIO_PIN_1
#define CockPitBRB_GPIO_Port GPIOF
#define TSS_Pin GPIO_PIN_10
#define TSS_GPIO_Port GPIOG
#define RightBRB_Pin GPIO_PIN_13
#define RightBRB_GPIO_Port GPIOA
#define LeftBRB_Pin GPIO_PIN_14
#define LeftBRB_GPIO_Port GPIOA
#define BreakOverTravel_Pin GPIO_PIN_3
#define BreakOverTravel_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
