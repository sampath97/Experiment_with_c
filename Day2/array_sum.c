#include<stdio.h>

int main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n],i,sum=0;
	
	printf("Enter array elements:\n");
	//Take array as input
    for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	sum=sum+a[i];
	}
	
	printf("Array is: ");
	for(i=0;i<n;i++)
	{
	printf("%d ",a[i]);	
	}
	printf("\nSum of elements in array is %d",sum);
	
	return 0;
}
