#include <xc.h>

// CONFIGURATION BITS
#pragma config FOSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF
#pragma config PBADEN = OFF

#define _XTAL_FREQ 20000000

void main(void) {
    ADCON1 = 0x0F; // All analog inputs set to digital

    TRISA0 = 0;    // RA0 = output (LED)
    TRISA1 = 1;    // RA1 = input (button)

    while(1) {
        if (RA1 == 0) { // Button pressed (active-low)
            RA0 = 1;    // LED on
        } else {
            RA0 = 0;    // LED off
        }
    }
}