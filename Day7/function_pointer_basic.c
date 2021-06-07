//program to invoke a function using function pointer
#include<stdio.h>
int max(int a ,int b);

int main()
{
	int a,b;
	printf("Enter a,b values:");
	scanf("%d,%d",&a,&b);
	
	int m;
	int (*fp)(int,int);
	fp=max;
	
	m=(*fp)(a,b);
	printf("Max of %d,%d is %d",a,b,m);
}

int max(int a ,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

