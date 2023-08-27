#include "usbd_cdc_if.h"

extern "C" int _write(int file, char *ptr, int len) {
  static uint8_t rc = USBD_OK;

  do {
    rc = CDC_Transmit_FS((uint8_t*)ptr, len);
  } while (USBD_BUSY == rc);

  if (USBD_FAIL == rc) {
    /// NOTE: Should never reach here.
    /// TODO: Handle this error.
    return 0;
  }
  return len;
}