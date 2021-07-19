#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int u,v,a;
	float speed;
	cout<<"Enter the 3 numbers\n";
	cin>>u>>v>>a;
	speed=v*v-u*u/(2*a);
	cout<<"The speed is\n"<<speed;
	return 0;
	
}
