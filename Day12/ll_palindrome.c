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
void check_palindrome();

int main()
{
	int opt;
	while(1)
	{
		printf("1.Insert\n2.Display\n3.Palindrome check\n4.Exit\nEnter option:");
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
					check_palindrome();
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

void check_palindrome()
{
	int n=0,rn=0,r;
	struct node *cur;
	cur=head;
	while(cur!=NULL)
	{
		n=n*10+cur->data;
		cur=cur->next;
	}
	
	int cn=n;
	while(cn>0)
	{
		r=cn%10;
		rn=rn*10+r;
		cn=cn/10;
	}
	
	if(n==rn)
	{
		printf("linked list is a palindrome\n");
	}
	else
	{
		printf("linkedlist is not a palindrome\n");
	}
}
