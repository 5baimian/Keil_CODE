#include <REGX52.h>

void Timer0_Init()
{
	TMOD=0x01;//0000 0001
	TF0=0;
	TR0=1;
	TH0=64535/256;//取高八位
	TL0=64535%256;//取低八位
	ET0=1;
	EA=1;
	PT0=0;
}

void main()
{
	Timer0_Init();
	while(1)
  {
  
  }
}

void Timer0_Routine() interrupt 1
{
	P2_0=0;
}
 
