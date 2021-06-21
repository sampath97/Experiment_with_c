//Move all negative elements to beginning of an array
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
	
	int k=-1;
	int temp,temp2;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			k++;
			if(k!=i)
			{
			temp=a[i];
			a[i]=a[i];
			a[k]=temp;
			}
		}
	}
	
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
