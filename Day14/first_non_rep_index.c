//code to return the index of first non repeated character in given string

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int first_non_rep_index(char str[],int ln);

int main()
{
	char str[100];
	gets(str);
	
	int ln=strlen(str);
	int r=first_non_rep_index(str,ln);
	printf("Index of first non repetitive character is %d",r);
}

int first_non_rep_index(char str[],int ln)
{
	int cnt=0;
	int i,j,k=0;
	char ch;
	for(i=0;i<ln;i++)
	{
	  ch=str[i];
	  cnt=0;
	  for(j=0;j<ln;j++)
	  {
	  	if(str[j]==ch&&str[j]!=' ')
	  	{
	  		cnt++;
	  	}
	  }
	  if(cnt==1)
	  {
	  	return i;
	  }
   }
   return -1;
}
