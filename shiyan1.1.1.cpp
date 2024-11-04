#include<iostream>
using namespace std;
int main()
{
	int k;//k was not declared 
	int i = k + 1;
	cout << i++ << endl;
	//int i = 1; can not be declared again 
	cout << i++ << endl;
	cout << "Welcome to C++"<<endl;
	return 0;
}
