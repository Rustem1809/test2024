#include <iostream>
using namespace std;
const float pi=3.14;
int main()
{
	
	float r,h;
	cout<<"Enter the radius:";
	cin>>r;
	cout<<"Enter the height:";
	cin>>h;
	if(r<=0 || h<=0)
	{
		cout<<"Radius and volume must be bigger than 0!";
	}
	else
	{
		cout<<"Volume is:"<<(pi*r*r*h)/3;
	}
	
	return 0;
}
