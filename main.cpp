#include "mbed.h"

//------------------------------------
// Hyperterminal configuration
// 9600 bauds, 8-bit data, no parity
//------------------------------------

Serial pc(SERIAL_TX, SERIAL_RX);
Serial uart(PA_9, PA_10);

DigitalOut myled(LED1);

int main()
{
    int i = 1;
    uart.printf("Ahoj svete!\n");
    pc.printf("Hello World !\n");
    while(1) {
        wait(1);
        uart.printf("Tento program bezi uz %d sekund.\n", i);
        pc.printf("This program runs since %d seconds.\n", i++);
        myled = !myled;
    }
}
