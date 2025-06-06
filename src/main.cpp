#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>



void config_ext(){

      EIMSK|=0X03;
      EICRA|=0x0A;
      DDRD&=~(0x0C);

}

ISR(INT0_vect){

    PORTD^=0x10;

}

int main(void){
config_ext();
sei();
DDRB|=0x01;
  DDRD|=0x10;
  PORTB|=0x01;
while(1){



}
  return 0;
}