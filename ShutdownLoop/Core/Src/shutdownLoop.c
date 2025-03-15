/**
  ******************************************************************************
  * @file         shutdownLoop.c
  * @brief        This file provides code for the logic behind the shutdown 
  * loop
  ******************************************************************************
  */

 #include "shutdownLoop.h"

GPIO_TypeDef* shutdownLoopPorts[NUM_SWITCHES] = {BRB_GPIO_Port, 
BOTS_GPIO_Port, AMS_GPIO_Port, ToCBRB_GPIO_Port, FromCBRB_GPIO_Port, TSMS_GPIO_Port,
LEDDisable_GPIO_Port,};

uint16_t shutdownLoopPins[NUM_SWITCHES] = {BRB_Pin,
BOTS_Pin, AMS_Pin, ToCBRB_Pin, FromCBRB_Pin, TSMS_Pin, LEDDisable_Pin};

uint8_t readPinStates(void)
{
    uint8_t state = 0;
    for (int i = 0; i < NUM_SWITCHES; i++)
    {
        if (HAL_GPIO_ReadPin(shutdownLoopPorts[i], shutdownLoopPins[i]) == GPIO_PIN_SET)
        {
            //going under assumption that the pin states 
            state |= (1 << i);  // Set the corresponding bit if the switch is on
            printf("bit %d: %d\n", i, state);
            
        }
    }
    return state;
}