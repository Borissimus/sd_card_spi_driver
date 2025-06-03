/*
 * user_it_cb.h
 *
 *  Created on: Jun 3, 2025
 *      Author: bnykytiuk
 */

#ifndef INC_USER_IT_CB_H_
#define INC_USER_IT_CB_H_
#include "stm32f1xx_hal.h"
#include <stdint.h>

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);

#endif /* INC_USER_IT_CB_H_ */
