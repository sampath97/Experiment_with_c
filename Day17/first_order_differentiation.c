//First order derivative of given matrix

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m,n;
	printf("Enter (m,n) of matrices:");
	scanf("%d,%d",&m,&n);
	
	int **a,**b;
	a=(int **)malloc(m*sizeof(int));

	int i,j;
	for(i=0;i<m;i++)
	{
		a[i]=(int *)malloc(n*sizeof(int));
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	b=(int **)malloc(m*sizeof(int));
	for(i=0;i<m;i++)
	{
		b[i]=(int *)malloc(n*sizeof(int));
		for(j=0;j<n-1;j++)
		{
			b[i][j]=a[i][j+1]-a[i][j];
		}
		b[i][j]=a[i][j];
	}
	
	printf("Matrix A is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	printf("Gradient of Matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
