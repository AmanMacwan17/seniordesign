#include "main.h"
#include "main.hpp"
  
void app_main(void) {
    // C++ entry point with full HAL access
    // Turn LED ON
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
    //HAL_Delay(500); // Wait 500 ms


    // Turn LED OFF
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
    //HAL_Delay(500); // Wait 500 ms
}