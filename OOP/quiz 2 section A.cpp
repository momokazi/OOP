#include<iostream>
using namespace std;


class XHO {
	public:
		XHO()
		{
			cout<<"Humpty"<<endl;
		}
		
		XHO(float xho){
			cout<<xho<<endl;
		}
		
		~XHO(){
			cout<<"Dumpty"<<endl;
		}
		
};

class HOX:public XHO{
	public:
		HOX(){
			cout<<"Humpty"<<endl;
		}
		
		HOX(float x, int h):XHO(x){
			cout<<h<<endl;
						
		}
		
		HOX(int h, float x):XHO(){
			cout<<"Dumpty"<<endl;
		}
		~HOX(){
			cout<<"Wall"<<endl;
		}

};

class HXO:public XHO, public HOX{
	public:
		HXO(){
			cout<<"Dumpty"<<endl;
		}
		HXO(char m){
			cout<<m<<endl;
		}
		~HXO(){
			cout<<"Sat"<<endl;
		}
};

int main(){
	HOX* h1 = new HOX(4.6, 5);
	cout<<"Mid"<<endl;
	HXO* h2 = new HXO();
	delete h1;
	XHO* h3 = new XHO(9.9);
	delete h2;
}
