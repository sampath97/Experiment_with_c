//Program to reverse the letters in words in a given string

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[100];
	printf("Enter input:\n");
	gets(str);
	
	printf("String is : %s\n",str);
	
	int start;
	int end;
	int i;
	int ln=strlen(str),wd_count=1;
	
	for(i=0;i<ln;i++)
	{
		if(str[i]==' ')
		{
			wd_count++;
		}
	}
	
   
   i=0;
   int j=0,k=0;
   int a[wd_count+1];
   a[0]=-1;
   a[wd_count]=ln;
   
   	for(i=0;i<ln;i++)
	{
		if(str[i]==' ')
		{
		  k++;
		  a[k]=i;
		}
	}
   
   i=0,j=0,k=0;
   char temp;
   while(i<wd_count)
   {
   	start=a[i]+1;
   	end=a[i+1];
   	for(j=0;j<(end-start)/2;j++)
   	{
   		temp=str[j+start];
   		str[j+start]=str[end-1-j];
   		str[end-1-j]=temp;
	}
	   i++;
   }
	
	printf("\nReversed string is %s",str);
	return 0;
}
