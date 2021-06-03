//Add element to a sorted array such that the array remains sorted

#include<stdio.h>

int main()
{
	int n;
	printf("Enter number of elements in an array:");
	scanf("%d",&n);
	n=n+1;
	
	int a[n],temp,i,j,num;
	
	printf("Enter array elements:\n");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter element to be inserted:");
	scanf("%d",&num);
	
	for(i=n-2;num<a[i]&&i>=0;i--)
	{
		a[i+1]=a[i];
	}
	a[i+1]=num;
	
	
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
