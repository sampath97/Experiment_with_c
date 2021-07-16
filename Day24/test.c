#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b);

int main()
{
	int a=2,b=3;
	printf("%d,%d\n",a,b);
	swap(&a,&b);
	printf("%d,%d\n",a,b);
	
	
	int n;
	printf("Enter n value:");
	scanf("%d",&n);
	
	int *x=(int *)malloc(n*sizeof(int));
	
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d->",x[i]);
	}
	
	return 0;
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
