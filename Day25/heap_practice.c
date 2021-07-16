//heap practice

#include<stdio.h>
#define MAX_SIZE 10
int size=0;
int a[MAX_SIZE];

void insert(int arr[],int x);
void maxheapify(int a[],int n);

int main()
{
	int n;
	printf("Enter size:");
	scanf("%d",&n);
	
	int i;
	printf("Enter elements:\n");
	int x=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		insert(a,x);
	}
	printf("size is %d\n",size);
	
	for(i=n/2-1;i>=0;i--)
	{
		maxheapify(a,i);
	}	
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

void insert(int arr[],int x)
{
	arr[size]=x;
	size=size+1;
}

void maxheapify(int a[],int i)
{
	int left=2*i+1;
	int right=2*i+2;
	int largest=i;
	int temp;
	
	if (left<size&&a[left]>a[i])
	{
		largest=left;
	}
		
	if(right<size&&a[right]>a[largest])
	{
		largest=right;
	}
		
	if(largest!=i)
	{
		temp=a[largest];
		a[largest]=a[i];
		a[i]=temp;
		maxheapify(a,largest);
	}
}
