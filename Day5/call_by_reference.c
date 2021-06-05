//swap values using pointers - call by reference
#include<stdio.h>
void swap_values(int *p1,int *p2);

int main()
{
	
	int a=5,b=10;
	swap_values(&a,&b);
	printf("value of a is %d,b is %d",a,b);
	return 0;
}

void swap_values(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

