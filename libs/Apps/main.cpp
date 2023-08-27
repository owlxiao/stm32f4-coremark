#include "Apps/main.h"
#include "Bsp/led.h"

extern "C" {
#include "CoreMark/coremark.h"

#include "main.h"
#include "usb_device.h"
}

#include <iostream>

extern "C" void driver_main(void) {
  MX_USB_DEVICE_Init();

  std::cout << "Begin coremark" << std::endl;

  coremark_main();

  for (;;)
    bsp_led_show();
}