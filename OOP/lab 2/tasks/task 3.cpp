#include<iostream>
using namespace std;


void getTriangleArea (double base, double height)
{
	float area;
	cout<<"Enter Base of Triangle: ";
	cin>>base;
	cout<<"Enter Height of Triangle: ";
	cin>>height;
	cout<<"Area of Triangle is: "<<(base*height)/2<<endl;
}

void getRectangleArea (double length, double width)
{
	cout<<"Enter Length of Rectangle: "<<endl;
	cin>>length;
	cout<<"Enter Width of Rectangle: "<<endl;
	cin>>width;
	cout<<"Area of Rectangle is: "<<length*width<<endl;
}


int main()
{
	int a,b,c;
	
	cout<<"---Choose an Option."<<endl;
	cout<<"|1- Area of Triangle. "<<endl;
	cout<<"|2- Area of Rectangle. "<<endl;
	cin>>c;
	
	switch(c)
	
	{
	case 1:
	getTriangleArea(a,b);
	break;
	
	case 2:
	getRectangleArea(a,b);
	break;
	
	default:
	exit(0);
 	}

return 0;

}
