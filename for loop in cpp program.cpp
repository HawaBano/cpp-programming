#include<iostream>
using namespace std;
int main()
{
	int i,num;
	float sum=0;
	cout<<"enter the value of num :";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		sum+=1.0/i;
		cout<<"sum : "<<sum;
	}
	return 0;
}
