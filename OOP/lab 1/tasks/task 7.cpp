#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cout<<"Enter a 2 digit number: ";
	cin>>a;
	
	b=a/10;
	c=a%10;
	
	e=b-c;
	
	cout<<"Difference between the two digits is "<< e << endl;;
	
}

