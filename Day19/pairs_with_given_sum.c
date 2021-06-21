//Count pairs with given sum

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,sum;
	
	printf("Enter size of an array,sum:");
	scanf("%d,%d",&n,&sum);
	
	if(n==1)
	{
		printf("Not possible with 1 element");
		return 0;
	}
	
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	int i;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int cnt=0,p_sum,j;
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			p_sum=a[i]+a[j];
			if(p_sum==sum)
			{
				cnt++;
			}
		}
	}
	
	printf("Array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\nNumber of pairs which will add upto given sum %d is %d",sum,cnt);
	
	return 0;
}
