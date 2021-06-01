//Length of string
#include<stdio.h>

int main()
{
	char text[]="H";
	int len=sizeof(text)/sizeof(text[0])-1; //since string array will have additional null charcter at the end 
	
	printf("Number of characters in given string is %d",len);
	return 0;
}
