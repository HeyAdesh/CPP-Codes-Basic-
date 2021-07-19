#include<iostream>
using namespace std;

int main()
{
	int d,a,b,c;
	cout<<"Enter the 3 Nubers\n";
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c);
	if(d=0)
	{
		cout<<"The roots are Real and Equal"<<d;
	}
	else if(d>0)
	{
		cout<<"The roots are Real and Unequal"<<d;
	}
		else
		{
			cout<<"The roots are Imaginary"<<d;
		}
		return 0;
}
