#include "Bsp/USB.h"

#include "usb_device.h"

namespace BSP {

void USB::init() { MX_USB_DEVICE_Init(); }

} // namespace BSP