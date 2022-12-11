all possible combination
#include<iostream>
using namespace std;
int main()
{
	int j,k,l;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			for(k=1;k<=4;k++)
			{
			for(l=1;l<=4;l++)	
			cout<<i<<j<<k<<l<<"\t";
			}
		}
	}
	return 0;
}
