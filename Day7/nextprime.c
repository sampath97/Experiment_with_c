#include<stdio.h>
int nextPrime(int n);

int main()
{
	int n;
	printf("Enter n value:");
	scanf("%d",&n);
	int np = nextPrime(n);
	
	printf("next prime of %d is %d",n,np);
	return 0;
}

int nextPrime(int n){
      
        
    //code here to find next prime number
    //return next prime number
   int start=n+1;
   int prm_flag=0;
   int i;
   
   while(1)
   {
       i=2;
       prm_flag=0;
       while(i<start)
       {
           if(start%i==0)
           {
               prm_flag=prm_flag+1;
               break;
           }
           else
           {
               i++;
           }
       }
       
       if(prm_flag==0)
       {
           break;
       }
       else
       {
           start++;
       }
   }
    return start;
}
