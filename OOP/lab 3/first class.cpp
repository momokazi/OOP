#include<iostream>
using namespace std;


class Student
{
private:
	string name;
	int sap;
	string phone;
	string dob;
	
public:
	Student()
	{
		name="Husnain Momin";
		sap=38589;
		phone="0324-7917046";
		dob="28-10-2002";
		
	}
	~Student()
	{
		
	}

void print()
{
	cout<<"Name is: "<<name<<endl;
	cout<<"SAP: "<<sap<<endl;
	cout<<"Contact No.: "<<phone<<endl;
	cout<<"Date of Birth: "<<dob<<endl;
}

};

int main ()
{
	Student s;
	
}
