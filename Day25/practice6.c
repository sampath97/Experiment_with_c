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
	
	int p=0;
	int temp;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			if(i==p)
			{
				p=p+1;
				continue;
			}
			temp=a[i];
			a[i]=a[p];
			a[p]=temp;
		    p=p+1;
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
