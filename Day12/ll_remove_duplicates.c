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
void remove_duplicates();
void delete_at_position(int pos);

int main()
{
	int opt;
	while(1)
	{
		printf("1.Insert\n2.Display\n3.Remove Duplicates\n4.Delete at Position\n5.Exit\nEnter option:");
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
					remove_duplicates();
					break;
				}
			case 4:
				{
					int n;
					printf("Enter number:");
					scanf("%d",&n);
					delete_at_position(n);
					break;
				}
			case 5:
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

void remove_duplicates()
{
	struct node *cur_ptr,*elem_ptr,*temp;
	cur_ptr=head;
	int t;
	int cnt=0;
	int i=1;
	while(cur_ptr!=NULL)
	{
		cnt=i;
		t=cur_ptr->data;
		elem_ptr=cur_ptr->next;
		while(elem_ptr!=NULL)
		{
			cnt++;
			if(t==elem_ptr->data)
			{
				
			  temp=elem_ptr->next;	
			  delete_at_position(cnt);
			  cnt--;
			  elem_ptr=temp;
	          
			}
			else
			{
			elem_ptr=elem_ptr->next;
			}
		}
		cur_ptr=cur_ptr->next;
		i++;
	}
		
}

void delete_at_position(int pos)
{
	struct node *cur,*prev;;
	cur=head;
	int cur_pos=1;
	
	if(head==NULL)
	{
		printf("Linked list is empty\n");
		return;
	}
	else if(head->next==NULL)
	{
		head=NULL;
		free(head);
	}
	else if(head->next!=NULL&&pos==1)
	{
		prev=head;
		head=head->next;
        free(prev);
	}
	else
	{
		while(cur_pos!=pos&&cur!=NULL)
		{
			prev=cur;
			cur=cur->next;
			cur_pos=cur_pos+1;
		}
		prev->next=cur->next;
		cur=NULL;
		free(cur);
		current=prev;
	}
	
}
