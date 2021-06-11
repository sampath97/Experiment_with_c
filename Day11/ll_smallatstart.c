//Program to bring the smallest element of a linked list to begining of linked list
#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;

void insert_end(int n);
void display();
void small_at_start();

int main()
{
	insert_end(1);
	insert_end(4);
	insert_end(5);
	insert_end(2);
	insert_end(3);
	display();
	small_at_start();
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

void small_at_start()
{
	struct node *cur,*small;
	cur=head;
	small=cur;
	int min=head->data;
	while(cur!=NULL)
	{
		if(cur->data<min)
		{
			min=cur->data;
			small=cur;
		}
		cur=cur->next;
	}
	
	if(small!=head)
	{ 
		cur=head;
		while(cur->next!=small)
		{
			cur=cur->next;
		}
	
		cur->next=small->next;
		small->next=head;
		head=small;
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
