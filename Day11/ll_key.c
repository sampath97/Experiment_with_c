//Program to insert/delete a value after a given key/position

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;

void insert_after_key(int key,int n);
void insert_after_position(int pos,int n);
void delete_at_key(int n);
void delete_at_position(int p);

void display();


int main()
{
	while(1)
	{
		int opt;
		printf("1.Insert at key\n2.Insert at position\n3.Delete at key\n4.Delete at position\n5.Display\n6.Exit\nEnter option:");
		scanf("%d",&opt);
		
		switch(opt)
		{
			case 1:
				{
				int n,key;
				printf("Enter number and key after which you want to insert:");
				scanf("%d,%d",&n,&key);
				insert_after_key(key,n);
				break;
				}
			case 2:
				{
				int n,p;
				printf("Enter number and position after which you want to insert:");
				scanf("%d,%d",&n,&p);
				insert_after_position(p,n);
				break;
				}
			case 3:
				{
				int key;
				printf("Enter key you want to delete:");
				scanf("%d",&key);
				delete_at_key(key);
				break;	
				}
			case 4:
				{
				int p;
				printf("Enter position at which you want to delete:");
				scanf("%d",&p);
				delete_at_position(p);
				break;	
				}
			case 5:
				{
				display();
				break;
				}
			case 6:
				{
				exit(1);
				}
		}
	}
	return 0;
}


void insert_after_key(int key,int n)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	struct node *cur;
	cur=head;
	if(head==NULL)
	{
		newnode->data=n;
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		while(cur->next!=NULL)
		{
			if(cur->data==key)
			{
				break;
			}
			else
			{
			cur=cur->next;
			}
		}
		newnode->data=n;
		newnode->next=cur->next;
		cur->next=newnode;
	}
}

void insert_after_position(int pos,int n)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	struct node *cur;
	cur=head;
	int cur_pos=1;
	if(head==NULL)
	{
		newnode->data=n;
		newnode->next=NULL;
		head=newnode;
	}
	else if(pos==1)
	{
		newnode->data=n;
		newnode->next=head;
		head=newnode;
	}
	else
	{
		while(cur->next!=NULL)
		{
			if(cur_pos==pos-1)
			{
				break;
			}
			else
			{
			cur=cur->next;
			cur_pos++;
			}
		}
		newnode->data=n;
		newnode->next=cur->next;
		cur->next=newnode;
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

void delete_at_key(int key)
{
	struct node *cur,*prev;
	cur=head;
	if(head==NULL)
	{
		printf("\nList is empty");
		return;
	}
	else if(head->next==NULL&&head->data==key)
	{
		head=NULL;
		free(head);
	}
	else
	{
		prev=cur;
		while(cur!=NULL)
		{
			
			if(cur->data==key)
			{
				break;
			}
			else
			{
				prev=cur;
				cur=cur->next;
			}
		}	
	
		if(cur!=NULL)
		{
			prev->next=cur->next;
			free(cur);
		}
	
	}
}

void delete_at_position(int pos)
{
	struct node *cur,*prev;
	cur=head;
	int cur_pos=1;
	if(head==NULL)
	{
		printf("\nList is empty");
		return;
	}
	else if(head->next==NULL&&pos==1)
	{
		head=NULL;
		free(head);
	}
	else if(pos==1)
	{
		prev=head;
		head=head->next;
		free(prev);
	}
	else
	{
		while(cur!=NULL)
		{
			if(cur_pos==pos)
			{
				break;
			}
			else
			{
				prev=cur;
				cur=cur->next;
			}
		}
	
		if(cur!=NULL)
		{
			prev->next=cur->next;
			free(cur);
		}
	
	}
}
