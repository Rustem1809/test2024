#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const float a=0.8;
	float x,sum=0;
	
	for(int day=1;pow(2,day)<100;day++)
	{
		cout<<day<<":"<<pow(2,day)*0.8<<endl;
		x=(pow(2,day)*0.8);
		sum = sum + x;
	}
	sum = sum / 6;
	cout<<sum;
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
