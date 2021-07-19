#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter the 3 numbers\n";
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"Maximum number is\n"<<a;
	}
	else if(b>c)
	{
		cout<<"Maximum number is\n"<<b;
		
	}
		else
		{
			cout<<"Maximum number is\n"<<c;
		} 
		return 0;
}
