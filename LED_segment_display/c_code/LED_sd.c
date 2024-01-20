#include <reg51.h>

static unsigned char num[10] = {
	0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xd8, 0x80, 0x90
};

void delay(unsigned int a){
	while(a--);
}

void main(){
	unsigned char i;
	while(1){
		P0 = 0xfe;
		for(i = 0; i < 8; i++){
			delay(50000);
			P0 = (P0 << 1) | 0x01;
		}
		for(i = 0; i < 8; i++){
			P0 = num[i];
			delay(50000);
		}
		P0 = 0xff;
		delay(50000);
	}
}