//factorial of n number using for loop

#include<iostream>
using namespace std;

int main()
{
	int i,n,factorial=1;
	cout<<"Enter the number to find the factorial\n";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
		cout<<endl<<factorial;
		
	}
	return 0;
}
