//Search for an element of an array using linear search.
//Linear search returns the location of item if found otherwise returns -1
#include<stdio.h>
int linearsearch(int arr[],int n,int key);

int main()
{
	int n;
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int a[n],i;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	//get the key to be searched
	int key,index;
	printf("Enter number to be searched:");
	scanf("%d",&key);
	
	index=linearsearch(a,n,key);
	
	if(index==-1)
	{
		printf("%d not found in array",key);
	}
	else
	{
		printf("%d found at index %d in array",key,index);
	}
	
	return 0;
}

int linearsearch(int arr[],int n,int key)
{
	int i,j=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			j=1;
			return i;
		}
	}
	
	if(j==0)
	{
		return -1;
	}
}
