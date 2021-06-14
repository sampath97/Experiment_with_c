//Count the occurences of word and print each word in seperate line

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[100];
	gets(str);
	
	int i,cnt=1,k=0;
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ')
		{
			printf("%c",str[i]);
		}
		else
		{
			printf("\n");
			cnt++;
		}
	}
	
	printf("\nNo of words are %d",cnt);
	return 0;
}
