//Program to check whether string is palindrome/not

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * string_reverse(char str[],int ln);

int main()
{
	char str[100];
	gets(str);
	printf("String is %s\n",str);
	
	int ln=strlen(str);
	
	char *rs;
	
	//Reverse the string and print
	rs=string_reverse(str,ln);
	printf("\nReversed string is :%s",rs);
	
	if(strcmp(str,rs)==0)
	{
		printf("\nPalindrome");
	}
	else
	{
		printf("Not a palindrome");
	}
	
	return 0;
}

char * string_reverse(char str[],int ln)
{
	char *p,*rp;
	p=str;
	rp=(char *)malloc(sizeof(ln));
	
	int i=0,j=0;
	for(i=ln-1;i>=0;i--)
	{
		rp[j]=p[i];
		j++;
	}
	
	return rp;
}




