#include "stm8s.h"

#include "delay.h"

void delay_ms(uint32_t ms) {
    sim();
    ms *= DELAY_MS_COUNTER;

    while (ms != 0)
	{
		ms--;
	}
    rim();
}