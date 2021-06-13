//Program to check whether a linkedlist is palindrome or not

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	char data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;
void insert(char n);
void display();
void check_palindrome();
int string_length=0;

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
					char st;
					printf("Enter character:");
					scanf("\n%c",&st);
					insert(st);
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

void insert(char n)
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
	string_length=string_length+1;
}

void display()
{
	struct node *cur;
	cur=head;
	while(cur!=NULL)
	{
		printf("%c",cur->data);
		cur=cur->next;
	}
	printf("\n");
}

void check_palindrome()
{
	if(string_length==0)
	{
		printf("Linked list is empty\n");
		return;
	}
    char str[string_length];
	struct node *cur;
	cur=head;
	int i=0;
	int pc=1;
	while(cur!=NULL)
	{
		str[i]=cur->data;
		cur=cur->next;
		i++;
	}
	
	for(i=0;i<string_length/2;i++)
	{
		if(str[i]!=str[string_length-1-i])
		{
			pc=0;
			break;
		}
	}
	
	
	if(pc==1)
	{
		printf("linked list is a palindrome\n");
	}
	else
	{
		printf("linkedlist is not a palindrome\n");
	}
}
