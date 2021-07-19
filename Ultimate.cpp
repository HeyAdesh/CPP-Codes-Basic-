#include<iostream>
using namespace std;

int main()
{
	cout<<"Menu\n\n";
	cout<<"1.Addition\n\n"<<"2.Subtraction\n\n"<<"3.Multiplication\n\n"<<"4.Division\n\n";
	
	int option;
	cout<<"Enter your choice\n";
	cin>>option;
	if(option<=4)
	{
	
	int a,b,c;
	cout<<"Enter the two numbers\n\n";
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
	}
	cout<<"\n\The Result is\n"<<c;
	}
	else
	{
		cout<<"Invalid choice\n";
	}
	return 0;
}
