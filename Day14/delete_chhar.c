//Delete all occurences of a character from a given string
#include<stdio.h>

int main()
{
	char str[100];
	printf("Enter input:");
	gets(str);
	char ch;
	printf("Enter Character:");
	scanf("%c",&ch);
	
	int i=0,j=0;
	while(str[i]!='\0')
	{
		if(str[i]!=ch)
		{
			str[j++]=str[i];
		}
		i++;
	}
	
	str[j]='\0';
	
	printf("string is %s",str);
}
