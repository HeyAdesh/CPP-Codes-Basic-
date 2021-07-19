#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float a,b,c,d,r1,r2;
	cout<<"Enter the values of a,b,c\n";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	r1=(-b+sqrt(b*b-4*a*c))/(2*a);
	r2=(-b+sqrt(b*b-4*a*c))/(2*a);
	if(d==0)
	{
		cout<<"The roots are equal\n"<<(-b)/(2*a);
	}
	else if(d>0)
	{
		cout<<"The roots are real and unequal\n"<<r1;
	}
		else
		{
			cout<<"The roots are imaginary\n"<<r2;
		}
		return 0;
}
