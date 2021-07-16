#include<stdio.h>

union s1
{
	int a;
	int b;
};

int main()
{
	union s1 t;
	t.a=1;
	t.b=2;
	t.a=5;
	printf("%d",t.b);
	return 0;
}
