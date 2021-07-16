#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;

void insert(int n);

void display();
void reverse();

int main()
{
   insert(1);
   insert(2);
   insert(5);
   
   display();
   reverse();
   display();	
}

void insert(int x)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if(head==NULL)
	{
		newnode->data=x;
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		newnode->data=x;
		newnode->next=NULL;
		current->next=newnode;
	}
	current=newnode;
}

void display()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void reverse()
{
	struct node *cur=head,*prev=NULL,*fut=head;
	while(cur!=NULL)
	{
		fut=cur->next;
		cur->next=prev;
		prev=cur;
	    cur=fut;
	}
	head=prev;
}
