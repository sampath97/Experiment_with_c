//Program to pass array to function
#include<stdio.h>
void display(int a[],int n);

int main()
{
	
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n],i;
	
	printf("Enter array elements:\n");
	//Take array as input
    for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);	
	}
	display(a,n);
}

void display(int a[],int n)
{
	int i;
	printf("Given array:");
	for(i=0;i<n;i++)
	{
	printf("%d ",a[i]);	
	}
}
