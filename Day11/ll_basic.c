//Insertion in a linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL,*tail=NULL,*current=NULL;

void insert_end(int data);
void delete_end();
void insert_start(int data);
void delete_start();
void display();


int main()
{
	insert_end(2);
	insert_end(3);
	insert_start(1);
	display();
	delete_start();
	display();
	return 0;
	
}

void insert_end(int data)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node)); //since malloc returns addrsss of Dynamically allocated memory;
	if(head==NULL)
	{
		newnode->data=data;
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		newnode->data=data;
		newnode->next=NULL;
		current->next=newnode;
	}
	current=newnode;
}

void insert_start(int data)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node)); //since malloc returns addrsss of Dynamically allocated memory;
	if(head==NULL)
	{
		newnode->data=data;
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		newnode->data=data;
		newnode->next=head;
		head=newnode;
	}
}


void delete_start()
{
	struct node *temp;
	temp=head;
	if(head==NULL)
	{
		printf("List is empty");
		return;
	}
		head=head->next;
        free(temp);
}

void display()
{
	struct node *cur;
	cur=head;
	
	if (head==NULL)
	{
		printf("\nList is empty");
		return;
	}
	
	while(cur!=NULL)
	{
		printf("%d ",cur->data);
		cur=cur->next;
	}
	printf("\n");
}

void delete_end()
{
	if (head==NULL)
	{
		printf("List is empty");
		return;
	}
	else if(head->next==NULL)
	{
		head=NULL;
		return;
	}
	
	struct node *cur;
	struct node *prev;
	cur=head;
	while(cur->next!=NULL)
	{
		prev=cur;
		cur=cur->next;
	}
	prev->next=NULL;
	free(cur);
}
