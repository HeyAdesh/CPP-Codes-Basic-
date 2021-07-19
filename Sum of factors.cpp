//finding the sum of the factors using for loop.

#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;
	cout<<"enter the number\n";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		sum=sum+i;
		
	}cout<<"The sum of factors is "<<sum;
	return 0;
}
