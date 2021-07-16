//Implementation of stack using arrays
#include<stdio.h>
#define MAX_SIZE 100

int a[MAX_SIZE];
int top=-1;

void push(int x);
int pop();
void display();

int main()
{
   push(5);
   
   push(2);
   push(3);
   //pop();
   display();
   
   push(10);
   push(20);
   pop();
   
   display();
   	
   return 0;
}


void push(int x)
{
	if (top<MAX_SIZE)
	{
		top=top+1;
		a[top]=x;
	}
	else
	{
		printf("Insertion not possible");
	}
}

int pop()
{
	if (top!=-1)
	{
		int x;
		x=a[top];
		top=top-1;
		return x;
	}
	else
	{
		printf("Stack is empty");
	}
}

void display()
{
	int ptr=-1;
	while(ptr!=top)
	{
		ptr=ptr+1;
		printf("%d ",a[ptr]);
	}
	printf("\n");
}

