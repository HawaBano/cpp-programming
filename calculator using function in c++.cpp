#include<iostream>
using namespace std;
void Add();
void sub();
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
	if(a+b)
	Add();
	else if(a-b)
	sub();
	else if(a*b)
	multi();
	else
	cout<<"you enter invalid operator";
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
	cin>>valueTwo;
	cout<<va-b;
}
void Multi()
{
	int a;
	cout<<"enter the value of a";
	cin>>a;
	int b;
	cout<<"enter the value of b";
	cin>>b;
	cout<<a*b
}

