//Reverse n nodes of linked list , done by swapping node data 
#include<stdio.h>
#include<stdlib.h>

void insert(int x);
void display();
int node_length();
void nreverse();

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;

int main()
{
	insert(2);
	insert(3);
	insert(10);
	insert(12);
	insert(13);
	display();
	
	int n;
	printf("Enter no of nodes to reverse:");
	scanf("%d",&n);
	
	nreverse(n);
	display();
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

void nreverse(int n)
{
	int i,j;
	int temp;
	int k=node_length();
	
	if (n>k)
	{
		n=k;
	}
	struct node *cur,*prev;
	
	for(i=0;i<n-1;i++)
	{
		cur=head;
		for(j=0;j<n-1-i;j++)
		{
			prev=cur;
			cur=cur->next;
			if(cur!=NULL)
			{
			  temp=cur->data;
			  cur->data=prev->data;
			  prev->data=temp;	
			}
		}
	}
	
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
