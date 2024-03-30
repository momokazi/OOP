#include<iostream>
using namespace std;





//class
class Book{
		
	protected:
		int isbn;
		string bname;//book name
		string aname;//author name
		
	public:
		
		Book(){
			bname="The Alchemist";
			aname="Paulo Coelho";
			isbn=12345678;	
		}
		
		
		Book(string name, string author, int bisbn){
			bname=name;
			aname=author;
			isbn=bisbn;
			
			cout<<"Book Name: "<<bname<<endl;
			cout<<"Author Name: "<<aname<<endl;
			cout<<"ISBN No.: "<<isbn<<endl;
		
		}
		void addBook(){
			
			cout<<"Enter Book Name: "<<endl;
			cin>>bname;
			cout<<endl<<endl;
			cout<<"Enter ISBN No.: "<<endl;
			cin>>isbn;	
			cout<<"BOOK ADDED SUCCESSFULLY!" <<endl;
				
			cout<<"Name: "<<bname<<endl;
			cout<<"ISBN: "<<isbn<<endl;
		}
		
		string modifyBook(string modBook){
			cout<<"\t\t-Book Modify-"<<endl;
			bname=modBook;
			//cout<<"Book Modified Successfully! "<<endl;
			//cout<<"New Name: "<<bname<<endl;
			return bname;
			
		}
		
		void setBookName(string a){
			bname=a;
		}
		void setAuthorName(string a){
			aname=a;
		}
		
		int getIsbn(){
			return isbn;
		}
		
		string getBookName(){
			return bname;
		}
		
		string getAuthorName(){
			return aname;
		}
		
		void print(){
			cout<<"Book Name: "<<bname<<endl;
			cout<<"ISBN No.: "<<isbn<<endl;
			cout<<"Author Name: "<<aname<<endl;
		}		
		
};



int main(){
	int b;
	cout<<"\t\t\tLIBRARY MANAGEMENT SYSTEM"<<endl;
	cout<<"1- User Control."<<endl;
	cout<<"2- Admin Control."<<endl;
	cout<<"3- Exit."<<endl;
	Book a;
	cin>>b;
	switch(b){
		case 1:
			system("cls");
			cout<<"\t\t\t-Student Section-"<<endl;
			a.print();	
			break;
			
		}
	/*Book a;
	a.print();
	a.modifyBook("Physics");
	a.setBookName("Chemistry");
	a.setAuthorName("Momin");
*/	//a.print();
}
