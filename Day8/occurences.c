//program to count no of 1's,0's in binary form an integer

#include<stdio.h>
int occur(int n,int ptn);

int main()
{
	int n,ptn;
	printf("Enter n value:");
	scanf("%d",&n);
	
	printf("Enter bit for which no of occurences needed (0 or 1):");
	scanf("%d",&ptn);
	
	if (ptn!=0 && ptn!=1)
	{
		printf("Invalid bit. Please enter bit as (0 or 1)");
		return 0;
	}
	int cnt;
	cnt = occur(n,ptn);
	
	printf("no of occurences of %d in %d is %d",ptn,n,cnt);
}

int occur(int n,int ptn)
{
	int cnt=0,mask=ptn;
	while(n!=0)
	{
		(n & mask)?cnt++:0;
		n=n>>1;
	}
	return cnt;
}
