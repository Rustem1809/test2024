#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	while(b!=0)
	{
		int temp = b;
		b=a%b;
		a = temp;
	}
	return a;
}
int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);
}
int main()
{
	int a,b;
	cout<<"Enter the numbers:";
	cin>>a>>b;
	if(a<=0 || b<=0)
	{
		cout<<"Please enter positive numbers:"<<endl;
		return 1;
	}
	int greatestCommonDivisor = gcd(a,b);
	int leastCommonMultiple = lcm(a,b);
	cout<<"greastestCommonDivisor is:"<<greatestCommonDivisor<<endl;
	cout<<"leastCommonMultiple is:"<<leastCommonMultiple<<endl;
	
	return 0;
}
