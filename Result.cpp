#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int m1,m2,m3,total;
	float avg;
	cout<<"Enter the marks of subjects\n";
	cin>>m1>>m2>>m3;
	total=m1+m2+m3;
	cout<<"\nThe total score is "<<total;
	avg=total/3.0;
	cout<<"\nThe Average of the marks is "<<avg;
	
	if(avg>=75)
	{
		cout<<"\nStudet pass with A grade!";
	}
	else if(avg>=35 && avg<75)
	{
		cout<<"\nStudent pass with B grade!";
	}
		else
		{
			cout<<"\nFailed!";
		}
		return 0;
}
