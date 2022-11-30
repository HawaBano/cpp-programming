#include<iostream>
using namespace std;
int main()
{
	int ang1,ang2,ang3;
	
	cout<<"Enter Angle number one";
	cin>>ang1;
	cout<<"Enter Angle number two";
	cin>>ang2;
	cout<<"Enter Angle number three";
	cin>>ang3;
	
	if(ang1+ang2+ang3==180)
	{
   		cout<<"the angle are valid"<<endl;
	}
   	else
   	{
   		cout<<"the angle are not valid"<<endl;
   	}
	
}
