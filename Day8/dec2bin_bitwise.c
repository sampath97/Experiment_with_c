//Program to get binary equivalent of decimal number using bitwise operations
#include<stdio.h>
int dec2bin(int n);

int main()
{
	int n;
	printf("Enter n value:");
	scanf("%d",&n);
	
	int y;
	y=dec2bin(n);
	printf("binary of %d is %d",n,y);
	return 0;
}

int dec2bin(int n)
{
	int mask=1,bit=0,bin=0,p=1;
	while(n!=0)
	{
		bit=(n & mask)?1:0;
		bin=bin+bit*p;
		n=n>>1;
		p=p*10;
	}
	return bin;
}
