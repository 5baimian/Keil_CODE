#include <REGX52.H>
#include <INTRINS.H>
void Delay1ms(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	_nop_();
	while(xms)
	{
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
	xms--;
	}
	
}

void main()
{
	while(1)
	{
		if(P3_1==0)
		{
			Delay1ms(200);
			while(P3_1==0);
			
			Delay1ms(200);
			P2_0=~P2_0;
		}
		
	}
}
	