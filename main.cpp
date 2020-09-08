#include "mbed.h"

DigitalOut led(LED1);
void function_2(void);
Ticker tik;

int contador = 100;

int main()
{
  tik.attach(&function_2, 0.01);

  while (1)
  {
    if (contador == 0)
    {
      led = !led;
      contador = 100;

      printf("hola\r\n");
    }
  }
}

void function_2()
{
  if (contador > 100)
  {
    contador--;
  }
}