//program to create a dynamic array using malloc
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter n value:");
	scanf("%d",&n);
	
	int *arr=(int *)malloc(n*sizeof(int));
	int i;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
	free(arr);
}


