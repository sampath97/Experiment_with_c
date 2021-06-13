//Program to check whether a linkedlist is palindrome or not

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
void swap_adjacent();

int main()
{
	int opt;
	while(1)
	{
		printf("1.Insert\n2.Display\n3.Swap adjacent\n4.Exit\nEnter option:");
		scanf("%d",&opt);
	
		switch(opt)
		{
	
			case 1:
				{
					int n;
					printf("Enter number:");
					scanf("%d",&n);
					insert(n);
					break;
				}
			case 2:
				{
					display();
					break;
				}
			case 3:
				{
					swap_adjacent();
					break;
				}
			case 4:
				{
					exit(0);
				}
		}
	
	}
	return 0;
}

void insert(int n)
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

void swap_adjacent()
{
	struct node *fut,*prev,*cur=head;
	head=head->next;
	while(cur->next!=NULL)
	{
		
	}
	
}
