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
	insert(10);
	insert(3);
	insert(2);
	insert(5);
	insert(4);
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
	struct node *cur,*prev,*min_ptr;
	int n=node_length();
	int i,j;
	int temp;
	int min;
	int p;
	
	for(i=0;i<n;i++)
	{
		p=0;
		cur=head;
		while(p!=i)
		{
			cur=cur->next;
			p++;
		}
		min=cur->data;
		prev=cur;
		min_ptr=cur;
		for(j=i;j<n;j++)
		{
			if(cur!=NULL)
			{
				if(cur->data<min)
				{
					min=cur->data;
					min_ptr=cur;
				}
			}
			cur=cur->next;
		}
		
		if(min_ptr!=prev)
		{
			temp=prev->data;
			prev->data=min_ptr->data;
			min_ptr->data=temp;
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
