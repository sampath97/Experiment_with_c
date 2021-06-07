//Prgoram to pass function address as an argument to other function 
#include<stdio.h>
#include<math.h>

float square_root(int a);
void print_primes(int a);
void consolidated(void (*pri_p)(int),float (*sq_p)(int),int a);

int main()
{
	int a;
	printf("Enter a value:");
	scanf("%d",&a);
	
	consolidated(print_primes,square_root,a);;
	return 0;
}

float square_root(int a)
{
	return (sqrt(a));
}

void print_primes(int a)
{
	int i,j;
	int pr=0;
	for(i=2;i<a;i++)
	{
		j=2;
		pr=0;
		while(j<i)
		{
			if(i%j==0)
			{
			pr=pr+1;	
			}
			j++;
		}
		if(pr==0)
		{
			printf("%d ",i);
		}
	}
}

void consolidated(void (*pri_p)(int),float (*sq_p)(int),int a)
{
	float sq_val;
	
	//call sqrt function
	sq_val=(*sq_p)(a);
	printf("square root of %d is %f\n",a,sq_val);
	
	//call print primes function
	(*pri_p)(a);
}
