#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	int i;
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int x;
	printf("Enter element to be found:");
	scanf("%d",&x);
	
	int start=0;
	int last=n-1;
    int mid;
    
	int p=0;
	while(start<last)
	{
	    mid=(start+last)/2;
		if(x==a[mid])
		{
			break;
		}
		if(x<a[mid])
		{
			last=mid-1;
		}
		if(x>a[mid])
		{
			start=mid+1;
		}
	}
	
	if(start<last)
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}
}
