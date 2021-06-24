//Program to find 3 largest elements in an array with Time complexity as O(n) and
//Space complexity as O(1)

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter size:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	int i;
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int first=a[0],second=a[0],third=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>first)
		{
			third=second;
			second=first;
			first=a[i];
		}
		else if(a[i]>second)
		{
			third=second;
			second=a[i];
		}
		else if(a[i]>third)
		{
			third=a[i];
		}
	}
	
	printf("Largest elements are %d %d %d",first,second,third);
	return 0;
}
