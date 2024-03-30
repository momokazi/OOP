#include<iostream>
#define Pi 3.14
#include <cmath>;
using namespace std;
int main()

{
	float area,r;
	cout << "Enter radius of Circle: ";
	cin >> r;
	area = Pi*(pow(r,2));
	cout << area << endl;
	
	if(area>10)
		cout << "Area is big";
	else
		cout << "Area is Small";
		
return 0;
}

