#include<iostream>
using namespace std;

int main()
{
	float basic;
	float percentallow;
	float percentdeduct;
	float netsalary;
	
	cout<<"Enter the Basic salary\n";
	cin>>basic;
	cout<<"Enter the Percent of allowance\n";
	cin>>percentallow;
	cout<<"Enter the Percent of Deduct\n";
	cin>>percentdeduct;
	netsalary=basic+(basic*percentallow)/100-(basic*percentdeduct)/100;
	cout<<"The Net Salary is\n"<<netsalary;
	return 0;
}
