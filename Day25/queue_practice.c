//Implementation of stack using arrays
#include<stdio.h>
#define MAX_SIZE 100

int a[MAX_SIZE];
int start=0;
int top=-1;

void enqueue(int x);
int dequeue();
void display();

int main()
{
   //enqueue(5);
   
   //enqueue(2);
   //enqueue(3);
   
   enqueue(7);
   enqueue(10);
   enqueue(20);
   
   display();
   
   dequeue();
   dequeue();
   dequeue();
   dequeue();
   display();
   
   //display();
   	
   return 0;
}


void enqueue(int x)
{
	if (top<MAX_SIZE)
	{
		
		if(start==top+1)
		{
			start=0;
			top=-1;
		}
		
		top=top+1;
		a[top]=x;
	}
	else
	{
		printf("Insertion not possible");
	}
}

int dequeue()
{
	if(start==top+1)
	{
		start=0;
		top=-1;
	}
		
	if (top!=-1)
	{
		
		int x=a[start];
		start=start+1;
		return x;
	}
	else
	{
		printf("Stack is empty");
		return 0;
	}
}

void display()
{
	int i;
	printf("Start is %d\n",start);
	printf("End is %d\n",top);
	for(i=start;i<=top;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");

}

