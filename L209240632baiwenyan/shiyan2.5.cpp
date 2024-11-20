#include <iostream>
using namespace std;
int main()
{
	char c;
	int l=0,s=0,d=0,o=0;
	cout<<"Enter the sentence:"<<endl;
	while((c=getchar())!='\n')
	{
		if((c>='a' && c<='z')||(c>='A' && c<='Z'))
		{
			l++;
		}
		else if(c==' ')
		{
			s++;
		}
		else if (c>='0' && c<='9')
		{
			d++;
		}
		else
		{
			o++;
		}
	}
	cout<<"Letters:"<<l<<endl;
	cout<<"Spaces:"<<s<<endl;
	cout<<"Digits:"<<d<<endl;
	cout<<"Others:"<<o<<endl;
	
	return 0;
}
