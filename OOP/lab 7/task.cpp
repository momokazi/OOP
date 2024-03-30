#include<iostream>
using namespace std;


class iPhone13{
	protected:
		int weight;
		double camera;
		double display;
		

	public:
		iPhone13(){
			weight=174;
			camera=12;
			display=6.1;
		
			cout<<"Default Constructor of iPhone 13 "<<endl;
		}
		
		iPhone13(int w, double c, double d){
			weight=w;
			camera=c;
			display=d;
			
			cout<<"Parameterised Constructor of iPhone 13 "<<endl;
		}
		
	void print(){
	cout<<"Weight of iPhone 13: "<<weight<<"Grams"<<endl;
	cout<<"Camera of iPhone 13: "<<camera<<" Pixels "<<endl;
	cout<<"Screen Size of iPhone 13: "<<display<<"Inches"<<endl;
}

~iPhone13(){
	cout<<"Default Destructor of iPhone 13 "<<endl;
}		

};


class iPhone13Pro:public iPhone13{
	public:
		iPhone13Pro(){
			weight=204;
			camera=12;
			display=6.1;
			
			cout<<"Default Constructor of iPhone 13 Pro"<<endl;
		}
		
		
		iPhone13Pro(int w, double c, double d):iPhone13(w,c,d){
				
			cout<<"Parameterised Constructor of iPhone 13 Pro"<<endl;
		}
		
void print(){
	cout<<"Weight of iPhone 13 Pro: "<<weight<<"Grams"<<endl;
	cout<<"Camera of iPhone 13 Pro: "<<camera<<" Pixels "<<endl;
	cout<<"Screen Size of iPhone 13 Pro: "<<display<<"Inches"<<endl;
}


~iPhone13Pro(){
	cout<<"Default Destructor of iPhone 13 Pro"<<endl;
}


};


class iPhone13ProMax:public iPhone13Pro{
	public:
		iPhone13ProMax(){
			weight=240;
			camera=12;
			display=6.7;
			
			cout<<"Default Destructor of iPhone 13 Pro Max"<<endl;
		}
		
		iPhone13ProMax(int w, double c, double d):iPhone13Pro(w,c,d){
			
			
			cout<<"Parameterised Constructor of iPhone 13 Pro Max"<<endl;
		}
		
		//temp print function
void print(){
	cout<<"Weight of iPhone 13 Pro Max: "<<weight<<"Grams"<<endl;
	cout<<"Camera of iPhone 13 Pro Max: "<<camera<<" Pixels "<<endl;
	cout<<"Screen Size of iPhone 13 Pro Max: "<<display<<"Inches"<<endl;
}

		
~iPhone13ProMax(){
	cout<<"Default Destructor of iPhone 13 Pro Max"<<endl;
}
		
};


int main(){
	iPhone13* i = new iPhone13();
	iPhone13* i2 = new iPhone13(300, 40, 7);

	iPhone13Pro* iP = new iPhone13Pro();
	iPhone13Pro* iP2 = new iPhone13Pro(320, 42, 72);
	
	iPhone13ProMax* ipM = new iPhone13ProMax();
	iPhone13ProMax* ipM2 = new iPhone13ProMax();


	//i -> print();
	//i2 -> print();
	
	//iP -> print();
	//iP2 -> print();

	//ipM -> print();
	//ipM2 -> print();
}
