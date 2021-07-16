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
	
	int x,j;
	printf("Enter sum:");
	scanf("%d",&x);
	
	int cnt=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==x)
			{
				printf("%d,%d\n",a[i],a[j]);
				cnt++;
			}
		}
	}
	printf("number of pairs is %d",cnt);
}
