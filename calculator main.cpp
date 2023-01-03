#include<iostream>
#include"calculator"
using namespace std;
int main()
{
	calculator cal;
	switch(cal)
	{
		case(cal.add):
		cout<<valueOne+valueTwo;
		break;
		case(cal.sub):
		cout<<valueOne-valueTwo;
		break;
		case(cal.mutiply):
		cout<<valueOne*valueTwo;
		break;
		case(cal.divide):
		cout<<valueOne/valueTwo;
		break;
		case(cal.module):
		cout<<valueOne%valueTwo;
		break;
	}
}