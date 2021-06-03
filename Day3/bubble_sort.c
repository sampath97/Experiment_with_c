//Bubblesort- Program to exchange elements in an array if arr[j]<arr[j+1] (Desceding order)

#include<stdio.h>

int main()
{
	int n;
	printf("Enter number of elements in an array:");
	scanf("%d",&n);
	
	int a[n],temp,i,j;
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=n;j>0;j--)
	{
		for(i=0;i<j-1;i++)
		{
			if(a[i]<a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
