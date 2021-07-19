#include<iostream>
using namespace std;

int main()
{
	int i,n,table;
	cout<<"Enter the number which you want the multiplication table for\n";
	cin>>n;
	
	for(i=1;i<=10;i++)
	{
		table=n*i;
		cout<<endl<<table;
		
	}
	return 0;
}
