#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	while(true)
	{
		char c;
	cin>>c;
	if(c>='a' && c<='z')
	{
		c=c-'a'+'A';
		cout<<c<<endl;
	}
	else
	{
		int n=static_cast<int>(c)+1;
		cout<<n;
	}
	} 
	
		
	return 0;
}
