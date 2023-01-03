#include<iostream>
#include"calculator1.h"
using namespace std;
int main()
{
	calculator1 cal;
	int v1;
	int v2;
	cout<<"enter the value of v1:";
	cin>>v1;
	cout<<"enter the value of v2:";
	cin>>v2;
	int choice;
	cout<<"enter your choice:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cal.Add(v1,v2);
			break;
		case 2:
			cal.Sub(v1,v2);
			break;
		case 3:
			cal.Mul(v1,v2);
			break;
		case 4:
			cal.Div(v1,v2);
			break;
		case 5:
			cal.Mod(v1,v2);
			break;
	}
}