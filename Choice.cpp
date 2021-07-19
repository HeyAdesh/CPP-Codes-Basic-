#include<iostream>
using namespace std;

int main()
{
	
	cout<<"Menu\n";
	cout<<"1.Addition\n"<<"2.Subtraction\n"<<"3.Multiply\n"<<"4.Division\n";
	
	int option;
	cout<<"Enter your choice\n";
	cin>>option;
	
	int a,b,c;
	cout<<"Enter the two numbers\n";
	cin>>a>>b;
	
	switch(option)
	{
		case 1:c=a+b;
			break;
		case 2:c=a-b;
			break;
		case 3:c=a*b;
			break;
		case 4:c=a/b;
			break;
		default:cout<<"Invalide choice\n";
	}
	cout<<"Result is\n"<<c;
	return 0;
}
	

