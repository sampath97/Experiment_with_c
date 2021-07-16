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
	
	int j,temp;
	int cnt=0;
	for(i=0;i<n-1;i++)
	{
		cnt++;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
			  temp=a[j];
			  a[j]=a[j+1];
			  a[j+1]=temp;	
			}
			cnt++;
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n%d",cnt);
}
