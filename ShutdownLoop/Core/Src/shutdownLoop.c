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
        if (HAL_GPIO_ReadPin(shutdownLoopPorts[i], shutdownLoopPins[i]) == GPIO_PIN_SET)
        {
            //going under assumption that the pin states 
            state |= (1 << i);  // Set the corresponding bit if the switch is on
            if (i == 0)
            {
                //turn the LED off because there is power
                HAL_GPIO_WritePin(LEDDisable_GPIO_Port, LEDDisable_Pin, GPIO_PIN_SET);
            } 
            
        }
    }
    return state;
}