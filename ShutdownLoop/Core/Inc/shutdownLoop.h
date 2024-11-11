/**
  ******************************************************************************
  * @file         shutdownLoop.h
  * @brief        This file provides code for the logic behind the shutdown 
  * loop
  ******************************************************************************
  */

 #include "main.h"

#define NUM_SWITCHES 8

GPIO_TypeDef* shutdownLoopPorts[NUM_SWITCHES] = {RightBRB_GPIO_Port, LeftBRB_GPIO_Port, 
BreakOverTravel_GPIO_Port, RL3_GPIO_Port, RL4_GPIO_Port, RL5_GPIO_Port, CockPitBRB_GPIO_Port,
 TSMS_GPIO_Port};
uint16_t shutdownLoopPins[NUM_SWITCHES] = {RightBRB_Pin, LeftBRB_Pin, 
BreakOverTravel_Pin, RL3_Pin, RL4_Pin, RL5_Pin, CockPitBRB_Pin, TSMS_Pin};

uint8_t readPinStates(void);