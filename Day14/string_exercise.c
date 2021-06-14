#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[10]="How";
	char *str2=str;
	if(str2==str)
	{
		printf("Same");
	}
	else
	{
		printf("Different");
	}
}
