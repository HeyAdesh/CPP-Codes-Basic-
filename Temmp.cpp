#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter the temprature\n";
	cin>>temp;
	if(temp>75)
	{
		cout<<"Content is in the T1";
		return 0;
	}
	if(temp<75)
	{
		cout<<"content is in the T2";
		return 0;
	}
	else
	{
		cout<<"Content is in the A";
	}
	
}
