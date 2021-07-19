//finding the maximum number from the array
#include<iostream>
using namespace std;
int main()
{
	int A[6]={1,2,3,4,5,6};
	int n=6,max;
	max=A[0];
	
	for(int i=0;i<6;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}cout<<"The maximum number is "<<max;
	return 0;
}
