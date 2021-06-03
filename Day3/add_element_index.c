//Program to insert an element into array at specified index by moving elements to right
#include<stdio.h>

int main()
{
	int n;
	printf("Enter number of elements in an array:");
	scanf("%d",&n);
	n=n+1;
	
	int a[n],i;
	printf("Enter elements in an array:\n");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	  printf("%d ",a[i]);
	}
	
	int num,ind;
	printf("Enter number to be inserted along with its position:");
	scanf("%d,%d",&num,&ind);
	
	if(ind>n-1)
	{
		printf("Insertion not possible");
	}
	
	
	for(i=n-1;i>ind;i--)
	{
		a[i]=a[i-1];
	}
	a[ind]=num;
	
	for(i=0;i<n;i++)
	{
	  printf("%d ",a[i]);
	}
}
