//Program to take user input and print it in text file
#include<stdio.h>

int main()
{
	
	
	FILE *fptr;
	fptr=fopen("file_test.txt","a+");
	//printf("%p",fptr);
	
	int ch;
	while((ch=fgetc(fptr))!=EOF)
	{
		printf("%c",ch);
	}
	
	fclose(fptr);
}
