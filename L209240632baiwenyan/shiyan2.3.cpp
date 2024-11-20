#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x;
	cin>>y;
	cin>>z;
	if (x==0||y==0||z==0)
	{
		cout<<"it is not triangle!";
	}
	
	else 
	{
		if (x+y>z||x+z>y||y+z>x)
			cout<<"It is triangle!"<<endl;
			if(x==y||x==z||z==y)
				cout<<"It is isosceles triangle with perimetr:"<<x+y+z;
			
		else
			cout<<"It is not isoscelec triangle!";
			
			
	}
	return 0;
}
