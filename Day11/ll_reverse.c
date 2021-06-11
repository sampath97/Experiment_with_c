#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;

void insert_end(int n);
void reverse();
void display();

int main()
{
	insert_end(1);
	insert_end(2);
	insert_end(3);
	insert_end(4);
	insert_end(5);
	display();
	reverse();
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

void reverse()
{
	struct node*prev=NULL,*cur,*nptr;
	cur=head;
	while(cur!=NULL)
	{
	nptr=cur->next;
	cur->next=prev;
	prev=cur;
	cur=nptr;
	}
	head=prev; 
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
