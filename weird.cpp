#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"Enter the day no\n";
	cin>>day;
	switch (day)
	{
		case 1: cout<<"Monday";
				break;
			case 2: cout<<"Tuesday";
				break;
			case 3: cout<<"Wednesday";
				break;
			case 4: cout<<"Thursday";
				break;
			case 5: cout<<"Friday";
				break;
			case 6: cout<<"Saturday";
				break;
			case 7: cout<<"sunday";
				break;
				default :cout<<"Invalid day number";
				break;
			
	}
	return 0;
}
