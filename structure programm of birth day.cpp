#include<iostream>
using namespace std;
struct birth{
	int day;
	int month;
	int year;
};
int main()
{
	birth b;
	cout<<"enter the day";
	cin>>b.day;
	cout<<"enter the month";
	cin>>b.month;
	cout<<"enter the year";
	cin>>b.year;
	cout<<"the day of birth day is:"<<b.day<<",the month of birth day is:"<<b.month<<",the year of birth day is:"<<b.year;
	
}
