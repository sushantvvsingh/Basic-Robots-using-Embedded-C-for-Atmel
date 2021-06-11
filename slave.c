#include<stdio.h>
#include<reg52.h>
#define lt 0x06;
#define rt 0x09;
#define st 0x0a;
#define rev 0x05;
#define stp 0x0f;
unsigned int a;
void main()
{
	while(9)
	{
		a=P0&0x0f;
		if(a==0x06)
			P2=lt;
		if(a==0x09)
			P2=rt;
		if(a==0x05)
			P2=rev;
		if(a==0x0a)
			P2=st;
		if(a==0x0f)
			P2=stp;}}