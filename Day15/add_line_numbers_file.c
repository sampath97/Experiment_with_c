//Program to add line number to each line in text file
#include<stdio.h>
#include<string.h>

char int_to_char(int n);

int main()
{
	
	FILE *fptr;
	if((fptr=fopen("file_test.txt","a+"))==NULL)
	{
		printf("Unable to open file\n");
		return 0;
	}
	
	int ch;
	int i=2;
	char str[100];
	str[0]= int_to_char(1);
	str[1]= ' ';
	char ln=1;
	while((ch=fgetc(fptr))!=EOF)
	{
		str[i]=ch;
		if(ch=='\n')
		{
			ln++;
			str[i+1]=int_to_char(ln);
			str[i+2]=' ';
			i+=2;
		}
		printf("%c",str[i]);
		i++;
	}
	str[i]='\0';
	printf("\n%s",str);
	
	//Write the string to text file
	if((fptr=fopen("file_test.txt","w"))==NULL)
	{
		printf("Unable to open file\n");
		return 0;
	}
	
	fprintf(fptr,"%s",str);
	fclose(fptr);
	return 0;
}


char int_to_char(int n)
{
	return (n+'0');
}
