//Program to create a copy of linked list
#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;
struct node *head2=NULL,*current2=NULL;

void insert_end(int n);
void display(int n);
void copy();

int main()
{
	insert_end(6);
	insert_end(7);
	insert_end(5);
	insert_end(7);
	insert_end(3);
	display(0);
	copy();
	display(1);
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

void copy()
{
	struct node *cur;
	cur=head;
	
	while(cur!=NULL)
	{
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		if(head2==NULL)
		{
			newnode->data=cur->data;
			newnode->next=NULL;
			head2=newnode;
		}
		else
		{
			newnode->data=cur->data;
			current2->next=newnode;
			newnode->next=NULL;
		}
		current2=newnode;
		cur=cur->next;
	}
}

void display(int n)
{
	struct node *cur;
	if(n==1)
	{
		cur=head2;
	}
	else
	{
	cur=head;
	}
	while(cur!=NULL)
	{
		printf("%d ",cur->data);
		cur=cur->next;
	}
	printf("\n");
}
