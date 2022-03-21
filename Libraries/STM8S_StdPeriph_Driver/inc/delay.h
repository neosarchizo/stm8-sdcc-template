#ifndef DELAY_H_
#define DELAY_H_

#include <stdint.h>
#include "stm8s.h"

#ifdef __cplusplus
extern "C"
{
#endif

// 1 loop time : 437.5 ns
#define DELAY_MS_COUNTER 600

    extern void delay_ms(uint32_t ms);

#ifdef __cplusplus
}
#endif

#endif /* DELAY_H_ */