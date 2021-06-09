//Program for circular shift

#include<stdio.h>
#include<math.h>

int circshift(int n,int nbits,int d);
int binvalue(int n);

int main()
{
	int n,nbits,d;
	printf("Enter number,no of bits to be shifted,direction (n,p,d):");
	scanf("%d,%d,%d",&n,&nbits,&d);
	
	int cshift_n=circshift(n,nbits,d);//d=0 right shift,d=1 left shift
	printf("circular shift of %d is %d",n,cshift_n);
}

int circshift(int n,int nbits,int dir)
{
	if (dir==0)
	{
	return (n>>nbits|n<<(16-nbits));  //Circular right shift
	}
	else
	{
	return (n<<nbits|n>>(16-nbits));	//Circular left shift
	}
}




