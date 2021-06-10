//Sort employees based on their years of experience, name,age

#include<stdio.h>
#include<string.h>
#define N 3

struct employee
{
	char name[20];
	float exp;
	int age;
};

void sort_name(struct employee emp[]);
void sort_age(struct employee emp[]);
void sort_exp(struct employee emp[]);


int main()
{
	struct employee emp[N];
	int i;
	for(i=0;i<N;i++)
	{
		printf("Enter name of  employee %d:",i+1);
		scanf("%s",emp[i].name);
		printf("Enter age of employee %d:",i+1);
		scanf("%d",&emp[i].age);
		printf("Enter experience of employee %d in Years:",i+1);
		scanf("%f",&emp[i].exp);
		
		printf("\n");
	}
	
	int choice;
	printf("1.Name\n2.Age\n3.Experience\nEnter choice based on which you want to sort:");
	scanf("%d",&choice);
	struct employee sort_emp;
	
	switch(choice)
		{
		case 1:
			sort_name(emp);
			break;
		case 2: 
			sort_age(emp);
			break;
				
		case 3: 
			sort_exp(emp);
			break;
			   	
	}

	
	printf("Sorted employee list is:\n");
	for(i=0;i<N;i++)
	{
		printf("name:%s\nage:%d\nexperience:%f\n",emp[i].name,emp[i].age,emp[i].exp);
		printf("\n");
	}
	return 0;
}


void sort_name(struct employee emp[])
{
	printf("\nSorting list by name\n\n");
	int i,j;
	struct employee temp,temp2;
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N-1-i;j++)
		{
			if(strcmp(emp[j].name,emp[j+1].name)>0)
			{
				temp2=emp[j];
				emp[j]=emp[j+1];
				emp[j+1]=temp2;
			}
		}
	}
	
}


void sort_age(struct employee emp[])
{
	printf("\nSorting list by age\n\n");
	
	int i,j;
	struct employee temp,temp2;
	
	for(i=0;i<N;i++)
	{
		temp=emp[i];
		for(j=0;j<N-1-i;j++)
		{
			if(emp[j].age>emp[j+1].age)
			{
				temp2=emp[j];
				emp[j]=emp[j+1];
				emp[j+1]=temp2;
			}
		}
	}
	
}

void sort_exp(struct employee emp[])
{
	printf("\nSorting list by experience\n\n");
	
	int i,j;
	struct employee temp,temp2;
	
	for(i=0;i<N;i++)
	{
		temp=emp[i];
		for(j=0;j<N-1-i;j++)
		{
			if(emp[j].exp>emp[j+1].exp)
			{
				temp2=emp[j];
				emp[j]=emp[j+1];
				emp[j+1]=temp2;
			}
		}
	}
	
}


