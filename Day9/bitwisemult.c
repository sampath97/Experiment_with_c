//Program to multiply a number by 5,9,4.5 using bitwise operators

#include<stdio.h>

int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	
	int n5,n9,n45;
	//Multiply by 5
	n5=(n<<2)+n;
	
	//Multiply by 9
	n9=(n<<3)+n;
	
	//multiply by 4.5
	n45=((n<<3)+n)>>1; 
	
	printf("Results of multiplication of %d is %d,%d,%d",n,n5,n9,n45);
	
	return 0;
}
