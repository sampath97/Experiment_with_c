//Cyclic rotation of array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	int i;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Actual array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	int temp;
	for(i=n-1;i>0;i--)
	{
		temp=a[i];
		a[i]=a[i-1];
		a[i-1]=temp;
	}
	
	printf("\nCyclic shifted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
