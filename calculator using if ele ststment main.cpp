#include<iostream>
#include"calculator2.h"
using namespace std;
int main()
{
	calculator2 cal;
	int N1;
	int N2;
	cout<<"Enter the first number:";
	cin>>N1;
	cout<<"Enter the second number:";
	cin>>N2;
	char ope;
	cout<<"enter the operator:";
	cin>>ope;
	
	if(ope =='+')
	{
		cal.Add(N1,N2);
	}
	if(ope =='-')
	{
		cal.Sub(N1,N2);
	}
	if(ope =='*')
	{
		cal.Mul(N1,N2);
	}
	if(ope =='/')
	{
		cal.Div(N1,N2);
	}
	if(ope =='%')
	{
		cal.Mod(N1,N2);
	}
}