//Program to complement bits at given position
#include<stdio.h>

int main()
{
	int x;
	printf("Enter number:");
	scanf("%d",&x);
	
	int p,n;
	printf("Enter position and number of bits(n,p) to get flipped:");
	scanf("%d,%d",&p,&n);
	
	if(p<0||n>p)
	{
		printf("Invalid input");
		return;
	}
	
	int flip_x=bitflip(x,p,n);
	printf("complemented value of %d is %d",binvalue(x),binvalue(flip_x));
	return 0;
}

int bitflip(int x,int p,int n)
{
	int i,mask;
	for(i=p;i>p-n;i--)
	{
		mask=1<<i;
		x=x^mask;
	}
	return x;
}

int binvalue(int n)
{
	int mask=1,bin=0,bit=0;
	while(n!=0)
	{
		bit=(n & mask)?1:0;
		bin=bin*10+bit;
		n=n>>1;
	}
	return bin;
}
