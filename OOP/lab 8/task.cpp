#include <iostream>
using namespace std;

class Cube{
	private:
		double length;
		double width;
		double height;
		
	public:
		Cube(){
			length=0.0;
			width=0.0;
			height=0.0;
			
			//cout<<"Default Constructor "<<endl;
		}
		
		Cube(double l, double w, double h){
			length=l;
			width=w;
			height=h;
			
			//cout<<"Parameterised Constructor"<<endl;
		}	
		
	void display(){
		cout<<"Length: "<<height<<endl;
		cout<<"Width: "<<height<<endl;
		cout<<"Height: "<<height<<endl;	
	}		
	
	
	Cube operator + (Cube & c1){
		Cube C3;
		
		C3.length=this -> length + c1.length;
		C3.width=this -> width + c1.width;
		C3.height=this -> height + c1.height;
		
		return C3;
	}
	Cube operator - (Cube & c2){
		Cube C3;
		
		C3.length=this -> length - c2.length;
		C3.width=this -> width - c2.width;
		C3.height=this -> height - c2.height;
		
		return C3;
	}
	Cube operator * (Cube & c3){
		Cube C3;
		
		C3.length=this -> length * c3.length;
		C3.width=this -> width * c3.width;
		C3.height=this -> height * c3.height;
		
		return C3;
	}
	Cube operator / (Cube & c4){
		Cube C3;
		
		C3.length=this -> length / c4.length;
		C3.width=this -> width / c4.width;
		C3.height=this -> height / c4.height;
		
		return C3;
	}
	
	void operator = (Cube & c5){		
		this -> length = c5.length;
		this -> width = c5.width;
		this -> height = c5.height;
	}
	
	bool operator == (Cube & c6){
		if((this -> length == c6.length)&&(this -> width == c6.width)&&(this -> height == c6.height)){
			cout<<"True"<<endl;
			return true;
		}
			else
			cout<<"False"<<endl;
			return false;
		}
		
};


int main(){
	
	Cube C(2.5, 2.5, 2.5);
	Cube C1(2.5, 2.5, 2.5);
	
	//Cube C3=(C+C1);
	//Cube C3=(C-C1);
	//Cube C3=C*C1;
	//Cube C3=C/C1;
	//C=C1;
	C==C1;
	
	//C3.display();
	
}
