//Program to implement double linked list (bi-directional)

#include<stdio.h>
#include<stdlib.h>

struct node {
	struct node *previous;
	int data;
	struct node *next;
};

struct node *head1=NULL,*head2=NULL,*current;

void insert(int n);
void display_forward();
void display_backward();

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	display_forward();
	display_backward();
	return 0;
}

void insert(int n)   //Insert at end
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	if(head1==NULL)
	{
		newnode->data=n;
		newnode->previous=NULL;
		newnode->next=NULL;
        head1=newnode;
	}
	else
	{
		newnode->data=n;
		newnode->next=NULL;
		newnode->previous=current;
		current->next=newnode;
	}
	current=newnode;
	head2=newnode;
}

void display_forward()
{
	struct node *cur;
	cur=head1;
    while(cur!=NULL)
    {
    	printf("%d ",cur->data);
    	cur=cur->next;
	}
	printf("\n");
}

void display_backward()
{
	struct node *cur;
	cur=head2;
    while(cur!=NULL)
    {
    	printf("%d ",cur->data);
    	cur=cur->previous;
	}
	printf("\n");
}


