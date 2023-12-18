#include "mbed.h"

AnalogIn potenciometro(A0);
PwmOut led(D5);

int main()
{
    while (true)
    {
        float Valor_pot = potenciometro.read();
        led.write(Valor_pot);
    }
}
