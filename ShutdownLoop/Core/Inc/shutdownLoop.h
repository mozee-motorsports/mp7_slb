/**
  ******************************************************************************
  * @file         shutdownLoop.h
  * @brief        This file provides code for the logic behind the shutdown 
  * loop
  ******************************************************************************
  */

 #include "main.h"

#define NUM_SWITCHES 7

GPIO_TypeDef* shutdownLoopPorts[NUM_SWITCHES] = {BRB_GPIO_Port, 
BOTS_GPIO_Port, AMS_GPIO_Port, ToCBRB_GPIO_Port, FromCBRB_GPIO_Port, TSMS_GPIO_Port,
LEDDisable_GPIO_Port,};
uint16_t shutdownLoopPins[NUM_SWITCHES] = {BRB_Pin,
BOTS_Pin, AMS_Pin, ToCBRB_Pin, FromCBRB_Pin, TSMS_Pin, LEDDisable_Pin};

uint8_t readPinStates(void);