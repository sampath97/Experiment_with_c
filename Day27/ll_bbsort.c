#include<stdio.h>
#include<stdlib.h>

void insert(int x);
void display();
int node_length();
void sort();

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;

int main()
{
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	display();
	sort();
	display();
	printf("%d",node_length());
	return 0;
}

void insert(int x)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		current->next=newnode;
	}
	current=newnode;
}

void display()
{
	struct node *cur=head;
	while(cur!=NULL)
	{
		printf("%d ",cur->data);
		cur=cur->next;
	}
	printf("\n");
}

void sort()
{
	struct node *cur=head,*prev=NULL;
	int n=node_length();
	int i,j;
	int temp;
	int xchg;
	int cnt=0;
	for(i=0;i<n-1;i++)
	{
		cur=head;
		prev=NULL;
		xchg=0;
		for(j=0;j<n-1-i;j++)
		{
			prev=cur;
			cur=cur->next;
			if(cur!=NULL)
			{
				if(prev->data>cur->data)
				{
					temp=prev->data;
					prev->data=cur->data;
					cur->data=temp;
					xchg++;
					cnt++;
				}
			}
		}
		if (xchg==0)
		{
			break;
		}
		
	}
	printf("\nno of exchanges are %d\n",cnt);
}

int node_length()
{
	struct node *cur=head;
	int cnt=0;
	while(cur!=NULL)
	{
		cnt++;
		cur=cur->next;
	}
	return cnt;
}
