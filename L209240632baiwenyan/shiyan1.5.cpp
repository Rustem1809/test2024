#include <iostream>
using namespace std;
float t(float i)
{
	float c;
	c = (i-32)*5/9;
	return c;
}

int main()
{
	float f;
	cin>>f;
	cout<<"Celcius is "<<t(f);
	return 0;
}
