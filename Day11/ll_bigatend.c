//Program to bring the largest element of a linked list to end of linked list
#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;

void insert_end(int n);
void display();
void big_at_end();

int main()
{
	insert_end(6);
	insert_end(7);
	insert_end(5);
	insert_end(7);
	insert_end(3);
	display();
	big_at_end();
	display();
}

void insert_end(int n)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	
	if(head==NULL)
	{
		newnode->data=n;
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		newnode->data=n;
		newnode->next=NULL;
		current->next=newnode;
	}
	current=newnode;
}

void big_at_end()
{
	struct node *cur,*big,*last;
	cur=head;
	big=cur;
	int max=head->data;
	while(cur!=NULL)
	{
		if(cur->data>max)
		{
			max=cur->data;
			big=cur;
		}
		last=cur;
		cur=cur->next;
	}
	
	if(big==head)
	{
		last->next=big;
		head=head->next;
		big->next=NULL;
	}
	else if(big!=last)
	{ 
		cur=head;
		while(cur->next!=big)
		{
			cur=cur->next;
		}
	
		cur->next=big->next;
		big->next=NULL;
		last->next=big;
	}
}

void display()
{
	struct node *cur;
	cur=head;
	while(cur!=NULL)
	{
		printf("%d ",cur->data);
		cur=cur->next;
	}
	printf("\n");
}
