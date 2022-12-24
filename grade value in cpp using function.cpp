#include<iostream>
using namespace std;
char Grade(int m);
int main()
{
	int marks;
	char g;
	cout<<"Enter marks";
	cin>>marks;
	g=Grade(marks);
	cout<<"your grade is :"<<g;
}
char Grade(int m)
{
	if(m>80)
	return 'A';
	else if(m>60)
	return 'B';
	else if(m>40)
	return 'c';
	else
	cout<<"you enter invalid number";
}
