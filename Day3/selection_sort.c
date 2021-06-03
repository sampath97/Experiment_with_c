//selectionsort- Program to exchange elements in an array if arr[j]<arr[j+1] (Desceding order)

#include<stdio.h>

int main()
{
	int n;
	printf("Enter number of elements in an array:");
	scanf("%d",&n);
	
	int a[n],temp,i,j,min,min_index;
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=n;j>0;j--)
	{
		min=a[n-j];
		min_index=n-j;
		for(i=n-j;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				min_index=i;
			}
		}
		temp=a[min_index];
		a[min_index]=a[n-j];
		a[n-j]=temp;
	}
	
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
