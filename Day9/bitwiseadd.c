//Program to add two numbers using bitwise operations

#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers(a,b):");
	scanf("%d,%d",&a,&b);
	
	int c;
	c=(a&b)+(a|b);
	printf("Addition of %d,%d is %d ",a,b,c);
}
