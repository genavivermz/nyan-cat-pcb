#define F_CPU 1000000UL // default chip speed (1MHz)
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // pins connected to the 4 leds
    DDRB |= (1 << PB0) | (1 << PB1) | (1 << PB2) | (1 << PB3);
    
    while(1) {
        // tail rainbow loop
        PORTB = (1 << PB0); // turn ON LED 1, others OFF
        _delay_ms(100);     // 100 millisecond pause
        
        PORTB = (1 << PB1); // turn ON LED 2, others OFF
        _delay_ms(100);
        
        PORTB = (1 << PB2); // turn ON LED 3, others OFF
        _delay_ms(100);
        
        PORTB = (1 << PB3); // turn ON LED 4, others OFF
        _delay_ms(100);
    }
}
