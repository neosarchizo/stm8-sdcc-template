#include <stm8s.h>
#include <stm8s_clk.h>
#include <stm8s_gpio.h>
#include <stdint.h>

#define LED_G_PORT GPIOC
#define LED_G_PIN GPIO_PIN_3

int main()
{
	CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);
	CLK_SYSCLKConfig(CLK_PRESCALER_HSIDIV1);

	GPIO_Init(LED_G_PORT, LED_G_PIN, GPIO_MODE_OUT_PP_LOW_FAST);
	GPIO_WriteHigh(LED_G_PORT, LED_G_PIN);

	while (1)
	{
	}
}