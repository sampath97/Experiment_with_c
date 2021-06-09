//Prgram to find number of bits needed to change to convert a number from x to y
#include<stdio.h>

int numchangebits(int x,int y);
int numones(int n);

int main()
{
	int x,y;
	printf("Enter numbers (x,y):");
	scanf("%d,%d",&x,&y);
	
	int cnt;
	cnt=numchangebits(x,y);
	
	printf("%d requires %d bits change for converting to %d",x,cnt,y);
}

int numchangebits(int x,int y)
{
	int z;
	z=x^y;
	return (numones(z)); //return no of ones present in z which indicates no of bit changes needed
	
}

int numones(int n)
{
	int cnt,bit,mask=1;
	while(n!=0)
	{
		(n&mask)?cnt++:cnt;
		n=n>>1;
	}
	return cnt;
}
