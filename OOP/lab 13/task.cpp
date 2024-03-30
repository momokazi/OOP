#include <iostream>
using namespace std;


int main(){
	int a,c;
	double b, sum, div, mod, prod;
	
	cout<<"------------------------Enter any 2 Numbers-----------------------"<<endl<<endl;
	cout<<"Enter First Number: "<<endl<<endl;
	cin>>a;
	cout<<"Enter Second Number:"<<endl<<endl;
	cin>>b;
	cout<<"-----------------------"<<endl;
	
	try{
		
		if(a < 0 || b < 0 || b == 0){
			throw string("ERROR! Zero or Negative Value!");
		}
		
		else{
			
			sum=a+b;
			prod=a*b;
			div=a/b;
			c=b; //mod without double
			mod=a%c;
			
			if(sum > 20){
				throw string("ERROR! Sum out of Range!");
			}
			else{
				cout << "Sum is: "<< sum << endl;
			}
			
			
			if(prod > 20){
				throw string("ERROR! Product is out of range!");
			}
			else{
				cout << "Product is: "<< prod << endl;
			}
			
				cout << "Quotient is: " << div << endl;
				cout << "Modulus is: " << mod << endl;		
		}
	}
	
	catch(string a){
		cout<<a<<endl;
	}
	
	catch(...){
		cout<<"ERROR!"<<endl;
	}
	
	return 0;
	
}
