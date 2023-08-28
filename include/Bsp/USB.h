#ifndef BSP_USB_H_
#define BSP_USB_H_

namespace BSP {

class USB {
public:
  static USB &getInstance(void) {
    static USB instance;
    return instance;
  }

  void init(void);
};

} // namespace BSP

#endif // BSP_USB_H_
