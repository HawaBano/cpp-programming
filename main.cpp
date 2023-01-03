#include<iostream>
#include"calculator.h"
using namespace std;
int main()
{

	calculator cal;
	int choice;
	cout<<"enter your choice\n1:Add/n2:sub\n3:multiply\n4:divide\n5:module";
	cin>>choice;

	switch(choice)
	{
		case 1:
			cal.Add();
			break;
		case 2:
			cal.Sub();
			break;
		case 3:
			cal.multiply();
			break;
		case 4:
			cal.divide();
			break;
		case 5:
			cal.module();
			break;
	}
		
}
