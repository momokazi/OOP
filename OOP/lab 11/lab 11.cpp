#include<iostream>
using namespace std;


class Student{
	
	private:
		string name;
		int sap;
		string email;
		int marks;
	
	public:
		Student(){
		name="Momin";
		sap=0;
		email="Momin@gmail.com";
		marks=0;
	}
	
	Student(string a, int b, string c, int d){
		name=a;
		sap=b;
		email=c;
		marks=d;
	}
	
	void Display(){
		cout<<"Name: "<<name<<endl;
		cout<<"SAP: "<<sap<<endl;
		cout<<"Email: "<<email<<endl;
		cout<<"Marks: "<<marks<<endl;
}
	int getMarks(){
		return marks;
	}
	
};


class Department{
	private:
		string dname;
		Student* students[5];
	
	public:
		Department(){
			dname="Computer Science";
			for(int i=0; i<5; i++){
				students[i]=new Student();
			}
		}
		
		Department(string a, Student* S[]){
			dname=a;
			for(int i=0; i<5; i++){
				students[i]=S[i];
			}
		}
		void Display(){
			for(int i=0; i<5; i++){
				students[i]->Display();
			}
			
		}
		int sumMarks(){
			int sum=0;
			for(int i=0; i<5; i++){
				
				sum= sum + students[i]->getMarks();
				
			}
			return sum;
		}
		double avgMarks(){
			double avg=0;
			for(int i =0; i<5; i++){
				avg=avg+students[i]->getMarks();
			}
			return avg/5;
		}
		
		int maxMarks(){
			int maxMarks;
			maxMarks=0;
			for(int i=0; i<5; i++){
				if(students[i]->getMarks() > maxMarks){
					maxMarks=students[i]->getMarks();
				}
			}
			return maxMarks;
		}
		
		int minMarks(){
			int minMarks;
			minMarks=students[0]->getMarks();
			for(int i=0; i<5; i++){
				if(students[i]->getMarks() < minMarks){
					minMarks=students[i]->getMarks();
				}
			}
			return minMarks;
		}	
};



int main(){
	
	string sname;
	int ssap;
	Student* s[5];
	s[0] = new Student("Ali", 1234, "ali@gmail.com",34);
	s[1] = new Student("Ahmad", 7632, "ahmad@gmail.com",87);
	s[2] = new Student("Zunaira", 9283, "zunaira@gmail.com",51);
	s[3] = new Student("Haris", 2638, "haris@gmail.com",62);
	s[4] = new Student("Babar", 2988, "babar@gmail.com",34);
	Department* dept = new Department("CS", s);
	dept->Display();
	cout << "SUM OF MARKS: " << dept->sumMarks() << endl;
	cout << "AVERAGE OF MARKS: " << dept->avgMarks() << endl;
	cout << "MAXIMUM MARKS: " << dept->maxMarks() << endl;
	cout << "MINIMUM MARKS: " << dept->minMarks() << endl;

}
