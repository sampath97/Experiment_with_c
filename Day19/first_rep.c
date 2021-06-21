//First repeating element in an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter size of an array:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	
	int i,j;
	printf("Enter elements of an array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int key,r,cnt=0;
	//	Sort the array elements in ascending/descending order
	for(i=0;i<n-1;i++)
	{
		key=a[i];
		for(j=i+1;j<n;j++)
		{
			if(a[j]==key)
			{
			  r=key;
			  cnt++;
			  goto 	nonrep;
			}
		}
	}
	
	nonrep:
		{
			if(cnt==1)
	    	{
				printf("rep is %d",r);
			}
			else
			{
				printf("No repeating element found");
			}
			return 0;
		}
	
	return 0;
}
