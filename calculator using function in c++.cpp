#include<iostream>
using namespace std;
void Add();
void Sub();
void multi();
void choicemaker();

int main()
{
	choicemaker();
}

void choicemaker()
{
	int choice;
	cout<<"enter 1:add\n 2:sub\n 3:multi\n";
	cin>>choice;
	
	if(choice==1)
	{
		Add();
	}
	else if(choice==2)
	{
		Sub();
	}
	else if(choice==3)
	{
		multi();
	}
	else
	{
		cout<<"you enter invalid operator";

	}
}
void Add()
{
	int a;
	int b;
	cout<<"Enter the value  of a ";
	cin>>a;
	cout<<"Enter the value of b";
	cin>>b;
	cout<<a+b;
}
void Sub()
{
	int a;
	cout<<"enter the value of a";
	cin>>a;
	int b;
	cout<<"enter the value of b";
	cin>>b;
	cout<<a-b;
}
void multi()
{
	int a;
	cout<<"enter the value of a";
	cin>>a;
	int b;
	cout<<"enter the value of b";
	cin>>b;
	cout<<a*b;
}

