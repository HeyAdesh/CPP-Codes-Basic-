//finding the number which is perfect or not using for loop

#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=1;
	cout<<"Enter the number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		if(sum==n*2)
		{
			cout<<"THE NUMBER IS PERFECT\n";
		}
		else
		{
			cout<<"NUMBER IS NOT PERFECT\n";
		}
	}
	return 0;
}
