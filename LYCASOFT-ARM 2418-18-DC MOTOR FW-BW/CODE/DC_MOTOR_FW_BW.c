#include <lpc214x.h>
#include "LPC2148_delay.h"
#include "LPC2148_LCD_4_BIT_HEADER_FILE.h"

int f1=0,f2=0;

int main()
{
	PINSEL0 = 0X00000000;
	PINSEL1 = 0X00000000;
	PINSEL2 = 0X00000000;
	
	IODIR0 = 0X0000000F;
	
	while(1)
	{
//		if(PINSEL0 == 0X00000010)
		{
			IOCLR0 = 0X00000009;
			IOSET0 = 0X00000005;
			delay(5000);
		}
//		if(PINSEL0 == 0X00000020)
		{
			IOCLR0 = 0X00000005;
			IOSET0 = 0X0000000A;
			delay(5000);
		}
//		if(PINSEL0 == 0X00000040)
		{
			IOCLR0 = 0X0000000A;
			IOSET0 = 0X00000006;
			delay(5000);
		}
//		if(PINSEL0 == 0X00000080)
		{
			IOCLR0 = 0X00000006;
			IOSET0 = 0X00000009;
			delay(5000);
		}
	}
}
