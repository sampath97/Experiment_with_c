//Program to find duplicates in array in o(n)

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(sizeof(int));
	
	int i,max=n;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			max=n;
		}
	}
	
	
	int *b;
	b=(int *)calloc(max+1,sizeof(int));
	
	for(i=0;i<n;i++)
	{
		b[a[i]]=b[a[i]]+1;
	}
	
	for(i=0;i<n;i++)
	{
		if(b[a[i]]>1)
		{
			printf("%d ",a[i]);
			b[a[i]]=-1;
		}
	}
	return 0;
}
