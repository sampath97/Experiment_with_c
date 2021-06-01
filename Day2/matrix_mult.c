//Program to find multiplication between 2 matrices
#include<stdio.h>

int main()
{
	int r1,c1,r2,c2;
	printf("Enter size of matrix1 (r,c):");
	scanf("%d,%d",&r1,&c1);
	printf("Enter size of matrix2 (r,c):");
	scanf("%d,%d",&r2,&c2);
	
	if(c1!=r2)
	{
		printf("Matrix multiplication not possible");
		return 0;
	}	
	
	int a[r1][c1],b[r2][c2],c[r1][c2];
	printf("Enter elements of matrix1:\n");
	int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter elements of matrix2:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	int k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
			{
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
		}
	}
	
	printf("Multiplied matrix is:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
