#include "iostream"
#include<vector>
using namespace std;

int main()
{
	vector<int> g1;
	int x;
	int i;
	for (i=1;i<10;i=i+2)
	{
		cin>>x;
		g1.push_back(x);
	}
	
	int j;
	int temp;
	for(i=0;i<g1.size();i++)
	{
		for (j=0;j<g1.size()-i-1;j++)
		{
			if(g1.at(j)>g1.at(j+1))
			{
			  temp=g1.at(j);
			  g1.at(j)=g1.at(j+1);
			  g1.at(j+1)=temp;	
			}
		}
	}
	
	for(i=0;i<g1.size();i++)
	{
		cout<<g1.at(i)<<" ";
	}
	
	return 0;
}
