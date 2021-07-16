#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL,*current=NULL;

void insert(int n);
void insert_beg(int n);
//void remove(int p);
void display();
void remove_at_end();
void remove_at_beg();
void remove_at_pos(int p);
void insert_at_pos(int p,int x);

int main()
{
   insert(1);
   insert(2);
   insert(5);
   insert_beg(10);
   insert_beg(50);
   insert(100);
   display();
   remove_at_end();
   display();
   remove_at_pos(5);
   display();
   insert_at_pos(4,1000);
   display();	
}

void insert(int x)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if(head==NULL)
	{
		newnode->data=x;
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		newnode->data=x;
		newnode->next=NULL;
		current->next=newnode;
	}
	current=newnode;
}

void display()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

void insert_beg(int x)
{
	struct node *newnode=(struct node *)malloc(sizeof(struct node));
	if(head==NULL)
	{
		newnode->data=x;
		newnode->next=NULL;
		head=newnode;
	}
	else
	{
		newnode->data=x;
		newnode->next=head;
		head=newnode;
	}
}

void remove_at_end()
{
	if(head==NULL)
	{
		return;
	}
	else
	{
		struct node *cur=head;
		struct node *prev;
		while(cur->next!=NULL)
		{
			prev=cur;
			cur=cur->next;
		}
		prev->next=NULL;
		current=prev;
		free(cur);
	}
}

void remove_at_beg()
{
	struct node *cur;
	if(head==NULL)
	{
		return;
	}
	else
	{
	cur=head;
	head=head->next;
	free(cur);
    }
}

void remove_at_pos(int p)
{
	struct node *cur,*prev;
	cur=head;
	prev=cur;
	int cnt=0;
	while(cur!=NULL)
	{
		cur=cur->next;
		cnt++;
	}
	
	printf("no of nodes are %d\n",cnt);
	
	int cur_pos=1;
	if(p==1)
	{
      remove_at_beg();
	}
	else if(p==cnt)
	{
		remove_at_end();
	}
	else
	{
		cur=head;
		while(cur_pos!=p)
		{
			prev=cur;
			cur=cur->next;
			cur_pos=cur_pos+1;
		}
		prev->next=cur->next;
		free(cur);
	}
}

void insert_at_pos(int p,int x)
{
	struct node *cur,*prev;
	cur=head;
	prev=cur;
	int cnt=0;
	while(cur!=NULL)
	{
		cur=cur->next;
		cnt++;
	}
	
	printf("no of nodes are %d\n",cnt);
	
	int cur_pos=1;
	if(p==1)
	{
      insert_beg(x);
	}
	else if(p==cnt)
	{
		insert(x);
	}
	else
	{
		struct node *newnode=(struct node *)malloc(sizeof(struct node));
		newnode->data=x;
		cur=head;
		while(cur_pos!=p)
		{
			prev=cur;
			cur=cur->next;
			cur_pos=cur_pos+1;
		}
		prev->next=newnode;
		newnode->next=cur;
	}
}
