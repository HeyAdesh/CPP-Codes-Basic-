#include<iostream>
using namespace std;

int main()
{
	int a,b,c,r1,r2;
	cout<<"enter a,b,c \n";
	cin>>a>>b>>c;
	r1=(-b+(b*b-4*a*c))/(2*a);
	r2=(-b-(b*b-4*a*c))/(2*a);
	cout<<"the roots of the quadratic equation are"<<r1<<" "<<r2;
	return 0;
	
}
