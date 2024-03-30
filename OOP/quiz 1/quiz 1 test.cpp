

#include<iostream>

using namespace std;


class B
{

public:

B(){

cout << "89" << endl;

}

B(int a){


cout << "76" << endl;

}

B(int a, char b){

cout << "35" << endl;

}

B(char a, int b)

{

cout << "65" << endl;

} 

~B(){


cout << "Def dtor" << endl;
}

};


int main()

{

B b1('3', 3);

B* b2= new B(4);

B* b3= new B('4', 5);

B* b4= new B(4, '5');

delete b4;

B b5;

delete b2;
}
