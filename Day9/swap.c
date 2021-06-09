//Program to swap two numbers using bitwise operators

#include<stdio.h>
void swap(int *p,int *q);

int main()
{
	int a,b;
	printf("Enter numbers a,b:");
	scanf("%d,%d",&a,&b);
	
	printf("Values before swapping: a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("Values after swapping: a=%d,b=%d",a,b);
}

void  swap(int *p,int *q)
{
	*p=*p^*q;
	*q=*p^*q;
	*p=*p^*q;
}



