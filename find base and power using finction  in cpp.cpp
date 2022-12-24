#include<iostream>
using namespace std;
float RaiseToPower(int base,int power)
{
	float result=1.0;
	for(int i=1;i<=power;i++)
	{
		result*=base;
	}
	return result;
}
int main()
{
	int base,power;
	float result;
	cout<<"enter base:\t";
	cin>>base;
	cout<<"enter power:\t";
	cin>>power;
	result=RaiseToPower(base,power);
	cout<<"the result is:\t"<<result;
	
}