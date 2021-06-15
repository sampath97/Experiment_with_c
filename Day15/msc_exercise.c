#include<stdio.h>

void func();

int main()
{
 int i,sum=0;
 for(i=0;i<5;i++)
 {
 	int i=10;
 	sum=sum+i++;
 }
 printf("%d",sum);
 return 0;
}


