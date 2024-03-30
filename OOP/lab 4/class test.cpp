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
		dob="28/10/2002";
		
		cout<<"Default Constructor "<<endl;
	}
	
	Student(string n, int s, string p, string d)
	{
		name=n;
		sap=s;
		phone=p;
		dob=d;
		
		cout<<"Parameterized Constructor # 1"<<endl;
	}
	
	Student(string n, string p, string d, int s)
	{
		name=n;
		phone=p;
		dob=d;
		sap=s;
		
		cout<<"Parameterized Constructor # 2"<<endl;
	}
	
	~Student()
	{
		cout<<"Destructor"<<endl;
	}


//print function

void print()
{
	cout<<"--Print Function--"<<endl<<endl;
	cout<<"Name is: "<<name<<endl;
	cout<<"SAP: "<<sap<<endl;
	cout<<"Contact No.: "<<phone<<endl;
	cout<<"Date of Birth: "<<dob<<endl;
	
}

};

int main ()
{
	//default
	/*Student* s1 = new Student();
	//para 1
	Student* s2 = new Student("Akhtar Saleem",5639,"0300-1234567","15/05/1995");
	//s1->print();
	//s2->print();
	delete s1;
	delete s2;*/
	
	Student s3;
	Student s4("Sultan Mehmood","0312-7654321","7/09/1994",2294);
	
	
	
}
