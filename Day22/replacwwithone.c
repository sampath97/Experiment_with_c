//Prgoram to replace 0's with one's in a given integer
#include<stdio.h>

int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	
	int fn=0;
	int rn=n;
	int r;
	int p=1;
	while(n>0)
	{
		r=n%10;
		if(r==0)
		{
			r=1;
		}
		fn=fn+r*p;
		p=p*10;
		n=n/10;
	}
	
	printf("Replaced number of %d is %d",rn,fn);
}
