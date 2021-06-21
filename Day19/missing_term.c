//Find the missing term in an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	int i;
	int sum=0;
	printf("Enter elements of an array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	
	int r=n+1;
	int org_sum=r*(r+1)/2;
	int missing_number = org_sum-sum;
	
	printf("Missing number is %d",missing_number);
	return 0;
}
