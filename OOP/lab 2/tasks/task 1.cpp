#include<iostream>
using namespace std;

void calculateSum(int a, int b){
	cout<<"Enter two Numbers to get their Sum: "<<endl;
	cin>>a>>b;
	cout<<"Sum is: "<<a+b<<endl;
}

void calculateSubtract(int a, int b){
	
	cout<<"Enter two Numbers to get their Difference: "<<endl;
	cin>>a>>b;
	cout<<"Differnce is: "<<a-b<<endl;
}
void calculateMultiply(int a, int b){
	cout<<"Enter two Numbers to be Multiplied: "<<endl;
	cin>>a>>b;
	cout<<"Product is "<<a*b<<endl;
}
void calculateDivide(int a, int b){
	cout<<"Enter two Numbers to be Divided: "<<endl;
	cin>>a>>b;
	cout<<"Quotient is: "<<a/b<<endl;
}


int main()

{
	int a,b,c;
	cout<<"Choose an Option. "<<endl;
	cout<<"|1- Add "<<endl<<"|2- Subtract "<<endl<<"|3- Multiply "<<endl<<"|4- Divide "<<endl;
	cin>>c;
	
	switch(c)
	{
	case 1:
	calculateSum(a,b);
	break;
	
	case 2:
	calculateSubtract(a,b);
	break;
	
	case 3:
	calculateMultiply(a,b);
	break;
	
	case 4:
	calculateDivide(a,b);
	break;
	
	default:
		exit(0);

};

return 0;

}
