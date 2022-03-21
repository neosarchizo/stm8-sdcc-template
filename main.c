#include <stm8s.h>
#include <stm8s_clk.h>
#include <stm8s_gpio.h>
#include <stdint.h>
#include <delay.h>

#define TEST_LED_PORT GPIOB
#define TEST_LED_PIN GPIO_PIN_5

int main()
{
	CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);
	CLK_SYSCLKConfig(CLK_PRESCALER_HSIDIV1);

	GPIO_Init(TEST_LED_PORT, TEST_LED_PIN, GPIO_MODE_OUT_PP_LOW_FAST);
	
	while (1)
	{
		GPIO_WriteReverse(TEST_LED_PORT, TEST_LED_PIN);
		delay_ms(1000);
	}
}