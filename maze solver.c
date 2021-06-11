#include<stdio.h>
#include<reg52.h>
#define st 0x0a;
#define rt 0x09;
#define lt 0x06;
#define stop 0x00;
unsigned int a,i,j;
void delay(unsigned int t)
{ for(i=0;i<t;i++)
	for(j=0;j<1275;j++);}
void main()
{
	while(1)
	{
		a=P1&0x07;
		if(a==0x03)
		{delay(30);
			P2=lt;
			delay(50);
			
		}
		else if((a==0x05)||(a==0x01))
		{P2=st;
	}
    else if((a==0x07)||(a==0x02)||(a==0x04)||(a==0x06))
		{	delay(30);
			P2=rt;
		}
		
		else if(a==0x00)
			{delay(10);
			P2=stop;}
		}}

