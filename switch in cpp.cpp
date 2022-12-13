#include <iostream>
using namespace std;
int main()
{
	char flag='y';
	while(flag=='y' || flag=='Y')
	{
		system("cls");
	 	int n;
	cout<<"please enter number of day";
	cin>>n;
	switch(n)
		{
		   	case 1:
				cout<<"its sunday";
				break;
		   	case 2:
				cout<<"its monday";
				break;
		   	case 3:
				cout<<"its tuesday";
				break;
	       	case 4:
		 		cout<<"its wednesday";
		 		break;
	   	   	case 5:
				cout<<"its thusday";
				break;
	   	   	case 6:
				cout<<"its friday";
				break;
		  	case 7:
				cout<<"its saturday";
		  	default:
				cout<<"you enter invalid number ";
		}
	cout<<"\n\ndo you want to continue this \n press y to contonue and press any other key to stop it ";
	cin>>flag;
	}
	cout<<"\nthank you for using this programm !";
}
