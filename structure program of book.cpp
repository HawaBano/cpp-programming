#include<iostream>
using namespace std;
struct book {
	int id;
	int page;
	float price;
};
int main()
{
	book b1,b2;
	cout<<"enter id,page,price of book1:";
	cin>>b1.id>>b1.page>>b1.price;
	cout<<"enter id,page,price of book2:";
	cin>>b2.id>>b2.page>>b2.price;
	
	cout<<"*******************\n";
	
	if(b1.price>b2.price)
	{
		cout<<"id of book is:"<<b1.id<<"\npage number of book is:"<<b1.page<<"\nprice of book is:"<<b1.price;
	}
	else
	{
		cout<<"id off book is:"<<b2.id<<"\npage number of book is:"<<b2.page<<"\nprice of book is:"<<b2.price;
	}
}