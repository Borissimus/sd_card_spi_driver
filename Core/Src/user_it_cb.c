#include "user_it_cb.h"
#include "stm32f1xx_hal.h"
#include "main.h"
// This function is called when an external interrupt occurs.

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {

    switch (GPIO_Pin)  // Check the GPIO pin that triggered the interrupt
    {
    case SD_CARD_DETECT_Pin:
        // Handle SD card detection interrupt
        break;
    
    default:
        break;
    }

}
