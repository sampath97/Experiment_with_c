//Basic program for structures

#include<stdio.h>

int main()
{
	struct student
	{
	int *age;
	char name[20];
	int friends;	
	};
	
	int a=2;
	struct student s1={&a,'a',4};
	
	
	
	printf("Name:%c\nAge:%d\nnum of friends:%d",s1.name[0],(s1.age),s1.friends);
}
