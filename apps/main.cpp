#include "apps/main.h"

#include "main.h"
#include "usb_device.h"

void bsp_led_show(void) {
  HAL_GPIO_TogglePin(LED_R_GPIO_Port, LED_R_Pin);
  HAL_GPIO_TogglePin(LED_G_GPIO_Port, LED_G_Pin);
  HAL_GPIO_TogglePin(LED_B_GPIO_Port, LED_B_Pin);
}

extern "C" void driver_main(void) {
  MX_USB_DEVICE_Init();
  for (;;)
    bsp_led_show();
}