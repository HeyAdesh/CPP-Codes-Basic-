//The linear search using array.
#include<iostream>
using namespace std;
int main()
{
	int A[10],n=10;
	cout<<"Enter the elements of the array\n";
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	int key;
	cout<<"Enter the key\n";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(key==A[i])
		{
			cout<<"The key is found at "<<i;
			return 0;
		}cout<<"Key is Not found\n";
		return 0;
	}
}
