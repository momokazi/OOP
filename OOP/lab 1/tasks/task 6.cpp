#include <iostream>
using namespace std;
int main()
{
	int ans=1,e,p;
	
	cout<<"Enter exponent: ";
	cin>>e;
	
	cout<<"Enter Power: ";
	cin>>p;
	
	for(int i=1; i<=p; i++)
	{
		ans=ans*e;	
	}
		cout<<ans;
}

