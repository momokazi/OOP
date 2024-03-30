#include<iostream>
using namespace std;


double getTriangleArea (double base, double height)
{
	cout<<"Enter Base of Triangle: ";
	cin>>base;
	cout<<"Enter Height of Triangle: ";
	cin>>height;
	double r=(base*height)/2;
	return r;
}

double getRectangleArea (double length, double width)
{
	cout<<"Enter Length of Rectangle: "<<endl;
	cin>>length;
	cout<<"Enter Width of Rectangle: "<<endl;
	cin>>width;
	double r=length*width;
	return r;
}


int main()
{
	int a,b,c;
	double r;
	
	cout<<"---Choose an Option."<<endl;
	cout<<"|1- Area of Triangle. "<<endl;
	cout<<"|2- Area of Rectangle. "<<endl;
	cin>>c;
	
	switch(c)
	
	{
	case 1:
	r=getTriangleArea(a,b);
	cout<<"Area of Triangle is: "<<r<<endl;
	break;
	
	case 2:
	r=getRectangleArea(a,b);
	cout<<"Area of Rectangle is: "<<r<<endl;
	break;
	
	default:
	exit(0);
 	}

return 0;
}
