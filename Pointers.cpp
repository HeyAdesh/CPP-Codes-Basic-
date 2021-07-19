//pointers
#include<iostream>
using namespace std;
int main()
{
	int A[5]={1,2,3,4,5};
	int *p=&A[5];
	cout<<A<<endl;
	cout<<&A<<endl;
	cout<<p<<endl;
	cout<<&p<<endl;
	cout<<*p<<endl;
}
