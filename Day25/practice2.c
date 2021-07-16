
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	int i;
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int temp;
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
