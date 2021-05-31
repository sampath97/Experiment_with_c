//Transpose of a Matrix
#include<stdio.h>

int main()
{
	int r,c;
	printf("Enter r,c of matrix:");
	scanf("%d,%d",&r,&c);
	
	//Check if array size is valid or not
	if (r<=0||c<=0)
	{
		printf("Invalid array size. r,c should be grather than 0");
		return;
	}
	
	int a[r][c];
	int i,j;
	
	//Read the matrix elements from user input
	printf("Enter array elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	//Main logic to transpose matrix
	printf("Tranposed matrix is:\n");
	int temp;
	int b[c][r];
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
		  b[i][j]=a[j][i];	
		  printf("%d ",b[i][j]);	
		}
		printf("\n");
	}
}

