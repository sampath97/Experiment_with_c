//merge 2 sorted arrays into 3rd sorted array
#include<stdio.h>

int main()
{
	int m,n;
	printf("Enter size of two arrays:");
	scanf("%d,%d",&m,&n);
	int a[m],b[n],c[m+n];
	
	int i;
	printf("Enter elements of first array:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter elements of  second array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	
	for(i=0;i<n;i++)
	{
		c[m+i]=b[i];
	}
	
	printf("merged array is:\n");
	for(i=0;i<m+n;i++)
	{
		printf("%d ",c[i]);
	}
	
	
}
