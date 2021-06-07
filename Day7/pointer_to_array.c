// C program to find transpose of a matrix using array pointer
#include<stdio.h>
#include<stdlib.h>
  
int main()
{
    // Pointer to an integer
    int r,c;
    printf("Enter r,c value:");
    scanf("%d,%d",&r,&c);
    
    int **arr;
	arr=(int **)malloc(sizeof(int)*r);
    
    int i,j;
    for(i=0;i<r;i++)
    {
    	arr[i]=(int *)malloc(sizeof(int)*c);
    	for(j=0;j<c;j++)
    	{
    	  scanf("%d",&arr[i][j]);	
		}
	}
}
