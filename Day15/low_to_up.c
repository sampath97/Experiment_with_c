//Program to covert all lower case charcters into uppercase

#include<stdio.h>
char low_to_up(char ch);

int main()
{
	FILE *fptr;
	if((fptr=fopen("file_test.txt","a+"))==NULL)
	{
		printf("Unable to open file\n");
		return 0;
	}
	
	int ch;
	int i=0;
	char str[100];
	while((ch=fgetc(fptr))!=EOF)
	{
		str[i]=low_to_up(ch);
		printf("%c",str[i]);
		i++;
		
	}
	str[i]='\0';
	
	fclose(fptr);
	
	
	if((fptr=fopen("file_test.txt","w"))==NULL)
	{
		printf("Unable to open file\n");
		return 0;
	}
	
	fprintf(fptr,"%s",str);
	fclose(fptr);
	return 0;
}

char low_to_up(char ch)
{
	switch(ch)
	{
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z':
			return(ch-32);
		default:
			return ch;
	}
}
