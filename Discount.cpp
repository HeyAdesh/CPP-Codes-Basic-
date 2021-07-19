#include<iostream>
using namespace std;

int main()
{
	int bill,discount,disamount,pay;
	cout<<"Enter the Bill amount and discount\n";
	cin>>bill>>discount;
	disamount=(discount*bill)/100;
	pay=bill-disamount;
	if(bill<=100)
	{
			cout<<"The discount is Rs."<<disamount<<endl;
			cout<<"Payable amount is \nRs."<<pay;
	}
	else if(100<bill<500)
	{
		cout<<"The discount is Rs."<<disamount<<endl;
		cout<<"Payable amount is \nRs."<<pay;
	}
		else
		{
			cout<<"The discount is Rs."<<disamount<<endl;
			cout<<"Payable amount is \nRs."<<pay;
		
		}
		return 0;
		
}
