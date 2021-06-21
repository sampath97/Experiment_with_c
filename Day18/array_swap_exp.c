//Array testing

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number of array elements:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n");
	
	int k=-1;
	int temp,temp2;
	for(i=6;i>2;i--)
	{
		temp=a[i];
		a[i]=a[i-1];
		a[i-1]=temp;
	}
	
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
