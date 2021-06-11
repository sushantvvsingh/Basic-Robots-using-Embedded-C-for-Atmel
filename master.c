#include<stdio.h>
#include<reg52.h>
#define st 0x0a;
#define rt 0x09;
#define lt 0x06;
#define stop 0x0f;
#define rev 0x05;
unsigned int a,i,j;
void delay(unsigned int t)
{
	for(i=0;i<t;i++)
	for(j=0;j<1275;j++);
}
void main()
{
	while(9)
	{
		a=P1&0x03;
		if(a==0x01)
		{ P2=rev;
			P0=P2;
			delay(50);
			P2=stop;
   		    P0=P2;
			delay(50);
			P2=rt;
			P0=P2;
			delay(50);}
		if(a==0x02)
		{
	  	P2=rev;
			P0=P2;
			delay(50);
			P2=stop;
			P0=P2;
			delay(50);
			P2=lt;
			P0=P2;
			delay(50);}
		if(a==0x03)
		{P2=rev;
			P0=P2;
			delay(50);
			P2=rt;
			P0=P2;
			delay(50);}
		if(a==0x00)
		{P2=st;
			P0=P2;
			delay(50);}}}
		
			
