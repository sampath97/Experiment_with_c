//Program which can accept dynamic number inputs for a function and returns the minimum of it 
#include<stdio.h>
#include<stdarg.h>

int min(int num,...);

int main()
{
	int m;
	m=min(4,3,-5,9,-1);
	
	printf("Minimum is %d",m);
	return 0;
}

int min(int num,...)
{
	va_list ap;  //create a pointer of variable arguments ,ap-argument pointer
	va_start(ap,num);  //Start ap with first fixed argument 
	
	int min=0;
	int temp;
	
	int i;
	for(i=0;i<num;i++)
	{
		temp=va_arg(ap,int);  //Get the next arguments 
		if(temp<min)
		{
			min=temp;
		}
	}
	
	va_end(ap);
	return min;	
}
