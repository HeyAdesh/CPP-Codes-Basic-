//Binary search using array.
#include<iostream>
using namespace std;
int main()
{
	int A[10]={6,8,10,12,14,15,16,17,18,34};
	int key,mid;
	int l=0,h=9;
	
	cout<<"Enter the Key\n";
	cin>>key;
	
	while(l<=h)
	{
		mid=(l+h)/2;
		if(key==A[mid])
		{
			cout<<"The key is found at "<<mid;
			return 0;
		}
		else if(key<mid)
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}cout<<"The key is not found";
	return 0;
}
