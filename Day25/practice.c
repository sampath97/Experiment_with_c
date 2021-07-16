#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	int i;
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter element,size(x,k):");
	int x,k;
	scanf("%d,%d",&x,&k);
	
	int start=0;
	int last=k;
	if(last>n)
	{
		last=n;
	}
	
	int p;
	while(start<n)
	{
		p=0;
		//printf("start is %d\n",start);
		for(i=start;i<last;i++)
		{
			if(a[i]==x)
			{
				p=1;
				//printf("found\n");
				break;
			}
		}
		if(p!=1)
		{
			break;
		}
		start=start+k;
		last=last+k;
		if(last>n)
		{	
			last=n;
		}
	}
	
	if(start>=n)
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}

	return 0;
}
