#include<iostraem>
using namespace std;
int main()
{
	int valueOne;
	int valueTwo;
	cout<<"Enter the valueOne"<<endl;
	cin>>valueOne;
	cout<<"Enter the valueTwo"<<endl;
	cin>>valueTwo;
	int choice;
	cout<<"Enter your choice\n1: Add\n2: subtrsct\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<valueOne+valueTwo;
			break;
		case 2:
		  cout<<valueOne-valueTwo;	
		  break;
		default:
			cout<<"you enter invalid number";
	}
}
