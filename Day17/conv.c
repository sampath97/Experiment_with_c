//Program to find convolution of two signals
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,m;
	printf("Enter no of values for signal1,signal2:");
	scanf("%d,%d",&n,&m);
	
	int *a,*b;
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(m*sizeof(int));
	
	int k=m+n-1;
	
	int *c,i,j;
	c=(int *)calloc(k,sizeof(int));
    
	
	printf("Enter array1:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	
	printf("Enter array2:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		
	}
	
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<m;j++)
		{
			c[i+j]=c[i+j]+(a[i]*b[j]);
		}
	}
	
	
	//Resultant convoluted array is 
	printf("Output is:\n");
	for(i=0;i<m+n-1;i++)
	{
		printf("%d ",c[i]);
		
	}
	
}
