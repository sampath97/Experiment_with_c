//prpgram to reverse bits in an integer 
#include<stdio.h>

int bitrev(int n);
int binval(int n);

int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	int rn;
	
	rn=bitrev(n);
	printf("reversed binary number of %d is %d",binval(n),rn);
	return 0;
}

int bitrev(int n)
{
	int mask=1,bit=0,bin=0,p=10;
	while(n!=0)
	{
		bit=(n & mask)?1:0;
		bin=bin*p+bit;
		n=n>>1;
	}
	return bin;
}

int binval(int n)
{
	int mask=1,bit=0,bin=0,p=10;
	while(n!=0)
	{
		bit=(n & mask)?1:0;
		bin=bin+bit*p;
		n=n>>1;
		p=p*10;
	}
	return bin;
}
