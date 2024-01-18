#include <reg51.h>

sbit LED1 = P2^0;
sbit LED2 = P2^1;
sbit LED3 = P2^2;
sbit LED4 = P2^3;
sbit LED5 = P2^4;
sbit LED6 = P2^5;
sbit LED7 = P2^6;
sbit LED8 = P2^7;

void delay(unsigned int a){
	unsigned char i;
	while(a--){
		for(i = 0; i < 255; i++);
	}
}

void main(void){
	P2 = 0xff;
	while(1){
		LED1 = 0; delay(200); LED1 = 1;
		LED2 = 0; delay(200); LED2 = 1;
		LED3 = 0; delay(200); LED3 = 1;
		LED4 = 0; delay(200); LED4 = 1;
		LED5 = 0; delay(200); LED5 = 1;
		LED6 = 0; delay(200); LED6 = 1;
		LED7 = 0; delay(200); LED7 = 1;
		LED8 = 0; delay(200); LED8 = 1;
	}

}
