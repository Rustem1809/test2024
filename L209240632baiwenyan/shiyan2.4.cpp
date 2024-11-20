#include<iostream>
using namespace std;
float add(float x,float y)
{
	return x+y;
}
float min(float x,float y)
{
	return x-y;
}
float multiply(float x,float y)
{
	return x*y;
}
float devide(float x,float y)
{
	if (y==0)
		cout<<"Devided number can not be 0!";
	else 
		return x/y;
}
int mod(int x,int y)
{
	return x%y;
}
int main()
{
	float a,b;
	cin>>a;
	cin>>b;
	cout<<add(a,b)<<endl;
	cout<<min(a,b)<<endl;
	cout<<multiply(a,b)<<endl;
	cout<<devide(a,b)<<endl;
	cout<<mod(a,b)<<endl;
	
	return 0;
}


