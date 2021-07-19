//sum of n th number using for loop

#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"Enter the number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=i;
		cout<<"The sum of n number is"<<sum;
	}
	return 0;
}
