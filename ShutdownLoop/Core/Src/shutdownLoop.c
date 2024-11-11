/**
  ******************************************************************************
  * @file         shutdownLoop.c
  * @brief        This file provides code for the logic behind the shutdown 
  * loop
  ******************************************************************************
  */

 #include "shutdownLoop.h"

uint8_t readPinStates(void)
{
    uint8_t state = 0;
    for (int i = 0; i < NUM_SWITCHES; i++)
    {
        if (HAL_GPIO_ReadPin(switchPorts[i], switchPins[i]) == GPIO_PIN_SET)
        {
            state |= (1 << i);  // Set the corresponding bit if the switch is on
            // ASK IF FIND IF VALID AND IF SO DO AN EXTRA BIT OR T/F flag and WHERE IT IS
        }
    }
    return state;
}