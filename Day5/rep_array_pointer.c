//program to find the repetitive elements in a matrix
#include<stdio.h>

int main()
{
	/*
	int arr[4]={10,20,30,40};
	int x=100,*ptr=arr;
	printf("%p %d %d\n",ptr,*ptr,x);
	x=*ptr++;
	printf("%p %d %d\n",ptr,*ptr,x);
	x=*++ptr;
	printf("%p %d %d\n",ptr,*ptr,x);
	x=++*ptr;
	printf("%p %d %d\n",ptr,*ptr,x);
	x=(*ptr)++;
	printf("%p %d %d\n",ptr,*ptr,x);
	*/
	int x,arr[8]={11,22,33,44,55,66,77,88};
	int *p,*q;
	q=arr/2;
	p=q*2;
	printf("%d %d",*p,*q);
}


