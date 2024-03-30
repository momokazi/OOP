#include<iostream>
using namespace std;

double calculateRetail(double a, double b)
{
	double retailPrice=(a*b)+a;
	return retailPrice;
}

int main ()
{
	double retailPrice,a,b,c;
	cout<<"Enter Wholesale Cost: "<<endl;
	cin>>a;
	cout<<"Enter Markup Percentage: "<<endl;
	cin>>b;
	b=b*.01;
	
	retailPrice=calculateRetail(a,b);
	cout<<"Retail Price $ is: "<<retailPrice<<endl;


return 0;
}
