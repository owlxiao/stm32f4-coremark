

#include "main.h"

void bsp_led_show(void) {
  HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin);
  HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
  HAL_GPIO_TogglePin(LED_B_GPIO_Port, LED_B_Pin);
}
