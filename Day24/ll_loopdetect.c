//Program to findout whether there is loop in linkedlist/not
#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;

void insert(int x);
void addloop(int pos);
void display();
int loopdetect();

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	
	display();
	//addloop(2);
	printf("\n%d",loopdetect());
	
	return 0;
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

void addloop(int pos)
{
	struct node *curr;
	struct node *last;
	last=head;
	while(last->next!=NULL)
	{
		last=last->next;
	}
	int cur_pos=0;
	curr=head;
	while(cur_pos!=pos)
	{
		curr=curr->next;
		cur_pos=cur_pos+1;
	}
	last->next=curr;
}

void display()
{
	struct node *curr;
	curr=head;
	while(curr!=NULL)
	{
		printf("%d ",curr->data);
		curr=curr->next;
	}
	
}



int loopdetect()
{
	struct node *curr;
	curr=head;
	int std_value=-1000;
	while(curr->next!=NULL)
	{
		if(curr->data==std_value)
		{
			return 1;
		}
		else
		{
			curr->data=std_value;
			curr=curr->next;
		}
	}
	return 0;
}
