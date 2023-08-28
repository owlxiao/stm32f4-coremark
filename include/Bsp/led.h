#ifndef BSP_LED_H
#define BSP_LED_H

void bsp_led_show(void);

namespace BSP {

class LED {
public:
  static LED &getInstance(void) {
    static LED instance;
    return instance;
  }

  void show(void);
};

} // namespace BSP

#endif // BSP_LED_H
