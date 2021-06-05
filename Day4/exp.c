
#include<stdio.h>

int main()
{
  int a[3][2]={1,2,3,4,5,6};
  int *ptr;
  ptr=a+1;
  printf("%d",*ptr);
}
