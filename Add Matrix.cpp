//Addition of two matrices using multidimensional array
#include<iostream>
using namespace std;
int main()
{
	int A[2][2]={{1,2},{3,4}};//{1,2,3,4};
	int B[2][2]={{5,6},{7,8}};//{5,6,7,8};
	int C[2][2];
	
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			C[i][j]=A[i][j]+B[i][j];//we can also change the sign for subb,mul,div;
		}
	}
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
