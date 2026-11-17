//grupa-d
#define LED_PIN GPIO_PIN_5
#define LED_PIN     GPIO_PIN_5
#define DEBOUNCE_MS 20
#define GPIO_PIN GPIO_PIN3
#define CONSTANT 33
#define CONSTANT1 36

#include "lib.c"

void main()
{
  UART_Init();
  hello();
  while(1)
  {
        LED_Toggle(LED_PIN);
        UART_Print("LED toggle\r\n");
        Delay_ms(DEBOUNCE_MS);

  }
}
