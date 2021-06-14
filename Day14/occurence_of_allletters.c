//function to print the no of occurences of each character in given string
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
	int count=0;
	for(i=0;i<ln;i++)
	{
		ch=str2[i];
		count=0;
		if(str[i]!=0)
		{
			for(j=0;j<ln;j++)
			{
				if(str[j]==ch)
				{
					count++;
					str[j]=0;
				}
			}
			printf("%c appeared %d times\n",ch,count);
		}
	}
}
