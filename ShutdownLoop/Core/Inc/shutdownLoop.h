/**
  ******************************************************************************
  * @file         shutdownLoop.h
  * @brief        This file provides code for the logic behind the shutdown 
  * loop
  ******************************************************************************
  */

 #include "main.h"
 #include "stm32g491xx.h"

#define NUM_SWITCHES 7

extern GPIO_TypeDef* shutdownLoopPorts[NUM_SWITCHES];
extern uint16_t shutdownLoopPins[NUM_SWITCHES];

uint8_t readPinStates(void);