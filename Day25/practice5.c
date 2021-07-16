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
	
	int min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=i;
		}
	}
	
	int temp;
	for(i=min;i<n-1;i++)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
