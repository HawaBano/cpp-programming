#include<iostream>
using namespace std;
#include"calculator.h"
int main()
{
	calculator cal;
	float val1;
	float val2;
	
	cout<<"enter the value one:";
	cin>>val1;
	
	cout<<"enter the value two:";
	cin>>val2;
	int choice;
	cout<<"enter your choice\n1:addfun\n2:subfun\n3:mul\n4:divfun:";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<cal.addFun(val1,val2);
			break;
		case 2:
			cout<<cal.subFun(val1,val2);
			break;
		case 3:
			cout<<cal.mulFun(val1,val2);
			break;
		case 4:
			cout<<cal.divFun(val1,val2);
			break;
	}
}