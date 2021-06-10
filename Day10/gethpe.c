//C program to take input of 10 employees details and print the details of highest paid employee (hpe)

#include<stdio.h>

int main()
{
	struct employee {
		int age;
	    char name[20];
	    float salary;
	};
	
	
	
	struct employee emp[10];
	int i;
	float max=0;
	int max_index=0;
	for(i=0;i<10;i++)
	{
		printf("Enter name of  employee %d:",i+1);
		scanf("%s",emp[i].name);
		printf("Enter age of employee %d:",i+1);
		scanf("%d",&emp[i].age);
		printf("Enter salary of employee %d in Lakhs:",i+1);
		scanf("%f",&emp[i].salary);
		if(emp[i].salary>max)
		{
			max=emp[i].salary;
			max_index=i;
		}
		printf("\n");
	}
	
	printf("Details of highest paid employee as below\nname:%s\nage:%d\nsalary:%f",emp[max_index].name,emp[max_index].age,emp[max_index].salary);
	
	
	return 0;
}
