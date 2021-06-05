//Program to return min,max of an array from same function
#include<stdio.h>

void minmax(int a[],int n,int *min,int *max);

int main()
{
	int a[]={1,5,22,-5,234,99};
	int min,max;
	
	minmax(a,6,&min,&max);
	printf("min is %d,max is %d",min,max);
	return 0;
}

void minmax(int a[],int n,int *min,int *max)
{
	int i;
	*min=a[0];
	*max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<*min)
		{
			*min=a[i];
		}
		if(a[i]>*max)
		{
			*max=a[i];
		}
	}
}
