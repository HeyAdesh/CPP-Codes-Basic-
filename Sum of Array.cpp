//finding the sum of the array elements in the given array
#include<iostream>
using namespace std;
int main()
{
	int n=6,sum=0;
	int A[6]={1,2,3,4,5,6};
	
	for(int i=0;i<=6;i++)
	{
		sum=sum+A[i];
	}cout<<"The sum of the array elements is "<<sum;
	return 0;
}
