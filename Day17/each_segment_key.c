//Check if an element present in each segment of an array
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number of elements in array:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(sizeof(int));
	
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int key,s;
	printf("Enter key,size of segment:");
	scanf("%d,%d",&key,&s);
	
	int j,start,p;
	for(i=0;i<n;i=i+s)
	{
		start=i;
		p=0;
		if(start+s>n)
		{
			end=n;
		}
		else
		{
			end=start+s;
		}
		
		for(j=start;j<end;j++)
		{
			if(a[j]==key)
			{
			p=1;
			break;	
			}
		}
		if(p!=1)
		{
			printf("Not present");
			break;
		}
	}
	
	if(p==1)
	{
		printf("Present");
	}
	return 0;
}
