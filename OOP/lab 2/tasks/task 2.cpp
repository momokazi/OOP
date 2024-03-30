#include<iostream>
using namespace std;

int calculateSum(int a, int b){
	cout<<"Enter two Numbers to get their Sum: "<<endl;
	cin>>a>>b;
	int d=a+b;
	return d;
}

int calculateSubtract(int a, int b){
	
	cout<<"Enter two Numbers to get their Difference: "<<endl;
	cin>>a>>b;
	int d=a-b;
	return d;
}
int calculateMultiply(int a, int b){
	cout<<"Enter two Numbers to be Multiplied: "<<endl;
	cin>>a>>b;
	int d=a*b;
	return d;
}
int calculateDivide(int a, int b){
	cout<<"Enter two Numbers to be Divided: "<<endl;
	cin>>a>>b;
	float d=a/b;
	return d;
}


int main()

{
	int a,b,c,d;
	cout<<"|---Choose an Option. "<<endl;
	cout<<"|1- Add "<<endl<<"|2- Subtract "<<endl<<"|3- Multiply "<<endl<<"|4- Divide "<<endl<<"|5- Exit"<<endl;
	cin>>c;
	
	switch(c)
	{
	case 1:
	d=calculateSum(a,b);
	cout<<"Sum is: "<<d<<endl;
	break;
	
	case 2:
	d=calculateSubtract(a,b);
	cout<<"Difference is: "<<d<<endl;
	break;
	
	case 3:
	d=calculateMultiply(a,b);
	cout<<"Product is: "<<d<<endl;
	break;
	
	case 4:
	d=calculateDivide(a,b);
	cout<<"Quotient is: "<<d<<endl;
	break;
	
	default:
		exit(0);

};

return 0;

}
