//Fina if an element is present using binary search

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc((n)*(sizeof(int)));
	
	int i;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
    int min=0;
    int temp;
	for(i=0;i<n;i++)
	{
	  	if(a[i]<0)
	  	{
	  		if(i==min)
	  		{
	  		  min=min+1;
			  continue;	
			}
	  		temp=a[i];
	  		a[i]=a[min];
	  		a[min]=temp;
	  		min=min+1;
		  }
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
