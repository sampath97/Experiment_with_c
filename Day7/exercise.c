#include<stdio.h>
void f1(int **p,int);

int b=10;
int main()
{
	int *p;
	int a=5;
	p=&a;
	printf("%d \n",*p);
	
	f1(&p,8);
	printf("%d \n",*p);
}

void f1(int **p,int b)
{
	printf("pointer is %p,value of b is %p\n",p,&b);
	*p=&b;
	printf("pointer is %p,value of b is %p\n",*p,&b);
}
