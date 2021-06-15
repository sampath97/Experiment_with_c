#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fptr;
	fptr=fopen("file_test.txt","r");
	char ch;
	char str[100];
	int i=0;
	while(!feof(fptr))
	{
		fgets(str,20,fptr);
		printf("%s\n",str);
	}
	fclose(fptr);
	
}
