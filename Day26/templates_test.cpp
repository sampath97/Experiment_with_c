//Sample of templates
#include "iostream"
using namespace std;

template <class T>

int fn_equal(T a,T b)
{
	if (a==b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	float a=1.2,b=1.22;
	cout<<fn_equal<float>(a,b);
	return 0;
}
