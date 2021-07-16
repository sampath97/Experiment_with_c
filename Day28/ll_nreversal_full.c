//Reverse n nodes of linked list ,done by swapping nodes itself
#include<stdio.h>
#include<stdlib.h>

void insert(int x);
void display();
int node_length();
void nreverse_full(int n);

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
	
	nreverse_full(n);
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

void nreverse_full(int n)
{
	int i,j;
	int temp;
	int k=node_length();
	
	if (n>k)
	{
		n=k;
	}
	struct node *cur=head,*prev=NULL,*fut,*cur2=head;
	
	int p=1;
	while(p<=n)
	{
		fut=cur->next;
		cur->next=prev;
		prev=cur;
		cur=fut;
		p++;
	}
	cur2->next=fut;
	head=prev;
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
