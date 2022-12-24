#include<iostream>
using namespace std;
float area(int b,int h);
int main()
{
	int base,height;
	float arr;
	cout<<"enter height";
	cin>>height;
	cout<<"enter base"; 
	cin>>base;
	arr=area(base,height);
	cout<<"area is :"<<arr;
}
float area(int b ,int h)
{
	float a;
	a=0.5*b*h;
	return a;
	
}

