//Program to multiply dynamic 2d arrays using pointers
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r,c;
	printf("Enter r,c value of matrix:");
	scanf("%d,%d",&r,&c);
	
	int **a=(int *)malloc(r*sizeof(int *));
	int i,j;
	for(i=0;i<r;i++)
	{
		a[i]=(int *)malloc(c*sizeof(int));
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	free(a);
	return 0;
}
