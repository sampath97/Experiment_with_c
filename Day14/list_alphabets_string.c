//code to print the list of alhabets present in the given string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[100];
	gets(str);
	
	int ln=strlen(str);
	char str2[ln];
	strcpy(str2,str);
	
	int i=0,j=0;
	char ch;
	for(i=0;i<ln;i++)
	{
		ch=str2[i];
		if(str[i]!=0)
		{
			for(j=0;j<ln;j++)
			{
				if(str[j]==ch)
				{
					str[j]=0;
				}
			}
			printf("%c\n",ch);
		}
	}
}
