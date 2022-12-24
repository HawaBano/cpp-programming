#include<iostream>
using namespace std;
void decToBin(int,int);

int main()
{
	int decNum;
	int binNum=2;
	cout<<"enter number in decimal :";
	cin>>decNum;
	cout<<"decimal"<<decNum<<"="<<endl;
	decToBin(decNum,binNum);
	cout<<"binary"<<endl;
}
void decToBin(int decNum,int binNum)
{
	if(decNum>0)
	{
	 decToBin(decNum/binNum,binNum);
	 cout<<decNum%binNum;
	}
}