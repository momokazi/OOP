#include <iostream>
using namespace std;


class Account{
	private:
		
		string accno;
		string acctitle;
		double amount;
		char acctype;
		
	public:
		
		Account()
		{
		accno="38589";
		acctitle="Saving's Account";
		amount=50000;
		acctype='S';
		
		cout<<"Default Constructor"<<endl;
		
		}
		
		Account(string a, string b, double c, char d)
		{
		accno=a;
		acctitle=b;	
		amount=c;
		acctype=d;
		
		cout<<"Parameterized Constructor"<<endl;
		
			
			
		}
	
	int checkBalance()
	{
		return amount;
	} 
		
		
	void deposit (double n){
		amount=amount+n;
	}


	void withdraw(double w){		
		if(w>amount){
			cout<<"Amount more than available balance! "<<endl;
		}
		else
		amount=amount-w;
	}

	void changeType(){
		
		if(acctype=='s'){
		acctype='c';
		}
		else if(acctype=='c'){
		acctype='s';
		}
	
	else
	cout<<"Invalid Type!"<<endl;	
	
	}

	void print()
	{
		cout<<"Account Number: "<<accno<<endl;
		cout<<"Account Title: "<<acctitle<<endl;
		cout<<"Current Amount: "<<amount<<endl;
		cout<<"Changed Account Type: "<<acctype<<endl;
	}
	
	
	~Account(){
		
		cout<<"Default Destructor"<<endl;
	}


};




int main()
{
	
	Account* a1 = new Account();
	
	cout<<"Current Balance: "<< a1 -> checkBalance() << endl;
	
	a1 -> deposit(1000);
	
	cout<<"Updated Balance after Addition: " << a1 -> checkBalance() << endl;
	
	a1 -> withdraw(700);
	
	cout<<"Updated Balance after Withdrawal: " << a1 -> checkBalance() << endl;
	
	a1 -> changeType();
	
	a1 -> print();
	
	Account* a2 = new Account("38592","Current Account", 70000, 'C');
	
	cout<<"Current Balance: "<< a2 -> checkBalance() << endl;
	
	a2 -> deposit(5000);
	
	cout<<"Updated Balance after Addition: "<< a2 -> checkBalance() <<endl;
	
	a2 -> changeType();
	
	a2 -> print();
	
	
	delete a1;
	delete a2;
	
	
}
