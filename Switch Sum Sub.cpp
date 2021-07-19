#include<iostream>
using namespace std;
int main()
{
	cout<<"Menu\n";
	cout<<"1.Addition\n"<<"2.Subtraction\n"<<"3.Multiplication\n"<<"4.Division\n";
	
	int option;
	cout<<"\nEnter the option\n";
	cin>>option;

	if(option<=4)
	{
		int a,b,c;
		cout<<endl<<"\nEnter the two  numbers\n";
		cin>>a>>b;
	
		switch(option)
		{
			case 1:
				c=a+b;
				break;
			case 2:
				c=a-b;
				break;
			case 3:
				c=a*b;
				break;
			case 4:
				c=a/b;
				break;
			default:
				cout<<"Invalide Choice\n";
				break;
		}cout<<"\nThe result is "<<c;
	}
	else
	{
		cout<<"Invalide Choice\n";
	}
  return 0;		

}
