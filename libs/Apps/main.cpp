#include "Apps/main.h"
#include "Bsp/led.h"
#include "Bsp/USB.h"

extern "C" {
#include "CoreMark/coremark.h"
}

#include <iostream>

extern "C" void driver_main(void) {
  BSP::USB::getInstance().init();

  std::cout << "Begin coremark" << std::endl;

  coremark_main();

  for (;;)
    BSP::LED::getInstance().show();
}