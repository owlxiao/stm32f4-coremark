#ifndef SUPPORT_EXTERNC_H
#define SUPPORT_EXTERNC_H

#ifdef __cplusplus
#define EXTERN_C_BEGIN \
extern "C" {

#define EXTERN_C_END \
}
#endif

#endif // SUPPORT_EXTERNC_H
