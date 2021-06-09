//swap adjacent bits in a number

#include<stdio.h>
int bitadjswap(int n);

int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	
	int swap_n=bitadjswap(n);
	printf("value of %d after adjacent bit swapping is %d",n,swap_n);
	return 0;
}


int bitadjswap(int n)
{
	return((n&0x5555)<<1 | (n&0xAAAA)>>1);
}
