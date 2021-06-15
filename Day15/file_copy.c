//Program to copy contents of a file and write to another file
#include<stdio.h>

int main()
{
	FILE *fptr1,*fptr2;
    if((fptr1=fopen("file_test.txt","r"))==NULL)
    {
    	printf("Unable to open file");
    	return 0;
	}
	
	int ch;
	fptr2=fopen("file_duplicate.txt","w");
	while((ch=fgetc(fptr1))!=EOF)
	{
		fputc(ch,fptr2);
	}
	
	fclose(fptr2);
	fclose(fptr1);
	
	return 0;
}
