//Program to print reverse of a string and reverse string

#include<stdio.h>
#include<string.h>

void string_reverse(char str[],int ln);
void print_reverse(char str[],int ln);

int main()
{
	char str[100];
	gets(str);
	printf("String is %s\n",str);
	
	int ln=strlen(str);
	
	//Print the reversal of string
	print_reverse(str,ln);
	
	//Reverse the string and print
	string_reverse(str,ln);
	printf("\nReversed string is :%s",str);
	
	return 0;
}

void string_reverse(char str[],int ln)
{
	char *p;
	p=str;
	int i=0;
	char temp;
	
	for(i=0;i<ln/2;i++)
	{
		temp=p[i];
		p[i]=p[ln-1-i];
		p[ln-1-i]=temp;
	}
	
}

void print_reverse(char str[],int ln)
{
	int i;
	printf("Printing string in reverse:");
	for(i=ln-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
	
}


