//Structure pointer

#include<stdio.h>

int main()
{
	struct test
	{
		char name;
		int *x;
	};
	
	struct test e1;
	
	int a[4]={1,2,3,4};
	e1.x=a;
	
	printf("%d",*(e1.x+4)
	
	return 0;
}
