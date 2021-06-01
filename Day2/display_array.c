//C program to take array as input as display it
#include<stdio.h>

int main()
{
	int nd;
	printf("Number of dimensions of an array(1 or 2)?");
	scanf("%d",&nd);
	
	if(nd>2||nd<=0)
	{
		printf("Invalid array size. Please give array size as 1 or 2");
		return;
	}
	
	switch(nd)
		{
		case 1:
			{
				//1-D Array
				int n;
			    printf("Enter number of elements in an array:");
			    scanf("%d",&n);
			    int a[n],i;
			    
			    //Take array input
			    printf("Enter array elements:");
			    for(i=0;i<n;i++)
			    {
			    	scanf("%d",&a[i]);
				}
				
				//Display array
			    printf("Entered array is:");
			    for(i=0;i<n;i++)
			    {
			    	printf("%d ",a[i]);
				}
				break;
		    }
		case 2:
			{
				int r,c;
				printf("Enter r,c of array:");
				scanf("%d,%d",&r,&c);
				int b[r][c],j,k;
				
				//Take array input
			    printf("Enter matrix elements:");
				for(j=0;j<r;j++)
				{
					for(k=0;k<c;k++)
					{
						scanf("%d",&b[j][k]);
					}
				}
				
				//Display array
			    printf("Entered matrix is:\n");
				for(j=0;j<r;j++)
				{
					for(k=0;k<c;k++)
					{
						printf("%d ",b[j][k]);
					}
					printf("\n");
				}
				break;
			}
		default:
			break;
		}
	
	return 0;
}
		    
