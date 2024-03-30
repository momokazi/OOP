#include<iostream>
#include<fstream> //for file handling
#include <string>
using namespace std;



class Library {

protected:
	
	int a, b, c;
	string name, name2;
	string borr;
	string bname;
	string search;

public:
	
	
	void returnBook() {
		
			system("cls");
			cout << "\t\t\t-Return Book-" << endl;
			cout << "Enter your First Name: " << endl;
			cin >> name;
			ofstream os5;
			os5.open("returned.txt");
			os5 << "Name: " << name << endl;
			cout << "Which Book would you like to return? " << endl;
			cin >> borr;
			cout << "Book returned Successfully! " << endl;
			system("PAUSE");
			os5 << "Book: " << borr << endl;
			os5 << "-------------------" << endl;
			os5.close();
		}

	void issueBooks() {

		ofstream os;
		os.open("issued.txt", ios::app);
		os << "Borrowed Book : " << borr << endl;
		os << "--------------------" << endl;
		os.close();
	}


	void borrowBook() {
		
		system("cls");
		cout << "What Category of Books would you want to go in?" << endl << endl;
		cout << "1- Science. " << endl;
		cout << "2- Arts. " << endl;
		cout << "3- Fiction. " << endl;
		cin >> b;

		if (b == 1) {

			ifstream is;
			is.open("science.txt");
			string str;

			if (is.is_open()) {

				while (!is.eof()) {
					getline(is, str);
					cout << str << endl;
				}
				is.close();
			}
			else {
				cout << "File could not be opened!" << endl;
			}

			cout << "Type the name of the Book you want to borrow. " << endl;
			cin >> borr;
			registry();
			issueBooks();
			cout << "Books has been issued successfully! " << endl;
			system("PAUSE");
		}

		if (b == 2) {
			
			ifstream is;
			is.open("art.txt");
			string str;

			if (is.is_open()) {

				while (!is.eof()) {
					getline(is, str);
					cout << str << endl;
				}
				is.close();
			}
			else {
				cout << "File could not be opened!" << endl;
			}

			cout << "Type the name of the Book you want to borrow. " << endl;
			cin >> borr;
			registry();
			issueBooks();
			cout << "Books has been issued successfully! " << endl;
			system("PAUSE");
		}

		if (b == 3) {

			ifstream is;
			is.open("fiction.txt");
			string str;

			if (is.is_open()) {

				while (!is.eof()) {
					getline(is, str);
					cout << str << endl;
				}
				is.close();
			}
			else {
				cout << "File could not be opened!" << endl;
			}

			cout << "Type the name of the Book you want to borrow. " << endl;
			cin >> borr;
			registry();
			issueBooks();
			cout << "Books has been issued successfully! " << endl;
			system("PAUSE");
		}
	}

	
	void registry() {
		
		system("cls");
		ofstream os;
		os.open("students.txt", ios::app);
		os << name << endl;
		os << name2 << endl;
		os << borr << endl;
		os << "---------------" << endl;
		os.close();
	}


	void viewBooks() {
		system("cls");
		cout << "1- Science. " << endl;
		cout << "2- Arts. " << endl;
		cout << "3- Fiction. " << endl;
		cout << "4- View All. " << endl;
		cin >> b;

		if (b == 1) {

			ifstream is;
			is.open("science.txt");
			string str;

			if (is.is_open()) {

				while (!is.eof()) {
					getline(is, str);
					cout << str << endl;
				}
				system("PAUSE");
				is.close();
			}
			else {
				cout << "File could not be opened!" << endl;
				system("PAUSE");
				viewBooks();
			} 
		}
		else if (b == 2) {
			ifstream is2;
			is2.open("art.txt");
			string str2;

			if (is2.is_open()) {

				while (!is2.eof()) {
					getline(is2, str2);
					cout << str2 << endl;
				}
				system("PAUSE");
				is2.close();
			}
			else {
				cout << "File could not be opened!" << endl;
				system("PAUSE");
				viewBooks();
			}
		}
		else if (b == 3) {
			ifstream is3;
			is3.open("fiction.txt");
			string str3;

			if (is3.is_open()) {

				while (!is3.eof()) {
					getline(is3, str3);
					cout << str3 << endl;
				}
				system("PAUSE");
				is3.close();
			}
			else {
				cout << "File could not be opened!" << endl;
				system("PAUSE");
				viewBooks();
			}
		}
		else {
			ifstream is4;
			is4.open("all.txt");
			string str4;

			if (is4.is_open()) {

				while (!is4.eof()) {
					getline(is4, str4);
					cout << str4 << endl;
				}

				is4.close();
			}
			else {
				cout << "File could not be opened!" << endl;
				system("PAUSE");
				viewBooks();
			}
		}
	}
	
	
	void searchBooks() {
		system("cls");
		cout << "Enter Book Name... " << endl;
		cin >> search;
		string str4;

		string b1 = "start https://en.wikipedia.org/wiki/Physics";
		string b2 = "start https://en.wikipedia.org/wiki/English";
		string b3 = "start https://en.wikipedia.org/wiki/Maths";
		string b4 = "start https://en.wikipedia.org/wiki/Chemistry";
		string b5 = "start https://en.wikipedia.org/wiki/Biology";
		string b6 = "start https://en.wikipedia.org/wiki/Computer";
		string b7 = "start https://en.wikipedia.org/wiki/Urdu";
		string b8 = "start https://en.wikipedia.org/wiki/Islamiat";
		string b9 = "start https://en.wikipedia.org/wiki/Pakistan_studies";
		string b10 = "start https://en.wikipedia.org/wiki/Harry_Potter";
		string b11 = "start https://en.wikipedia.org/wiki/Fantastic_Beasts%3A_The_Crimes_of_Grindelwald";
		string b12 = "start https://en.wikipedia.org/wiki/The_Lord_of_the_Rings";
		string b13 = "start https://en.wikipedia.org/wiki/Percy_Jackson";
		string b14 = "start https://en.wikipedia.org/wiki/Clash_of_the_Titans_(2010_film)";

		ifstream is4;
		is4.open("all.txt");

		if (is4.is_open()) {

			while (!is4.eof()) {
				getline(is4, str4);
				if ((c = str4.find(search, 0)) != string::npos) {
					cout << "Entries Found: " << endl;
					cout << "- " << search << endl;
					system("PAUSE");

					if (search == "Physics") {
						system(b1.c_str());
					}
					else if (search == "English") {
						system(b2.c_str());
					}
					else if (search == "Maths") {
						system(b3.c_str());
					}
					else if (search == "Chemistry") {
						system(b4.c_str());
					}
					else if (search == "Biology") {
						system(b5.c_str());
					}
					else if (search == "Computer") {
						system(b6.c_str());
					}
					else if (search == "Urdu") {
						system(b7.c_str());
					}
					else if (search == "Islamiat") {
						system(b8.c_str());
					}
					else if (search == "PakStudies") {
						system(b9.c_str());
					}
					else if (search == "HarryPotter") {
						system(b10.c_str());
					}
					else if (search == "FantasticBeasts") {
						system(b11.c_str());
					}
					else if (search == "LordOfTheRings") {
						system(b12.c_str());
					}
					else if (search == "PercyJackson") {
						system(b13.c_str());
					}
					else if (search == "ClashOfTheTitans") {
						system(b14.c_str());
					}
					else {
						cout << "No online directory found! " << endl;
					}
				}
			}
			is4.close();
		}
		else {
			cout << "File couldn't be opened! " << endl;
			system("PAUSE");
		}

	}
};



class User :public Library {

public:
	void user() {
		system("cls");
		cout << "\t\t\t-Student Menu-" << endl;
		cout << "1- View Books. " << endl;
		cout << "2- Search a Book. (Type in Camel Case)" << endl;
		cout << "3- Borrow a Book. " << endl;
		cout << "4- Return a Book. " << endl;
		cin >> a;
		switch (a) {

		case 1:
			viewBooks();
			break;

		case 2:
			searchBooks();
			break;

		case 3:
			borrowBook();
			break;

		case 4:
			returnBook();
			break;

		default:
			cout << "Please Input Correctly! " << endl;
		}
	}
};



class Student:public User {

private:

	int sap;
	char a;
	int b1;

public:

	Student() {
		sap = 0;
		name = " ";
		name2 = " ";
	}


	//functions

	void profile() {

		system("cls");
		cout << "Do you have an existing profile? (Y/N) " << endl;
		cin >> a;

		if (a == 'y') {
			userInfo();
		}
		else if (a == 'n') {

			system("cls");
			cout << "\t\t\t-Register Account- " << endl;
			writeSap();
			cout << "Enter First Name: " << endl;
			cin >> name;
			cout << "Enter Second Name: " << endl;
			cin >> name2;
			cout << "Account Created Successfully..." << endl;
		}
		else {
			cout << "Please input Appropriately!" << endl;
			system("PAUSE");
			profile();
		}

	}

	void writeSap() {
		getSap();
		ofstream s;
		cout << "Enter SAP again to confirm: " << endl;
		cin >> sap;
		s.open("students.txt", ios::app);
		s << "Sap: " << sap << endl;
	}

	void userInfo() {

		string login_us="Husnain";
		string login_us2="Momin";

		system("cls");
		cout << "\t\t\t-Student Login-" << endl;
		cout << "Enter First Name: " << endl;
		cin >> name;
		if (name != login_us) {
			cout << "Incorrect First Name! " << endl;
			system("PAUSE");
			profile();
		}
		else {
			cout << "Enter Second Name: " << endl;
			cin >> name2;
			if (name2 != login_us2) {
				cout << "Incorrect Second Name! " << endl;
				system("PAUSE");
				profile();
			}
			cout << "Enter SAP ID: " << endl;
			cin >> sap;
			cout << "Login Successful... " << endl;
			system("PAUSE");
		}
		registry();
		writeSap();
	}

	int getSap() {
		return sap;
	}

};
 

class Admin:public Library {

private:

	string username;
	string pass;
	string pass1 = "momin123";
	string d;
	string y;
	int isbn;
	int len;

public:
	
	void admin() {
		system("cls");
		cout << "\t\t\t-Admin Menu-" << endl;
		cout << "1- Add Book. " << endl;
		cout << "2- Modify Book. " << endl;
		cout << "3- Delete a Book. " << endl;
		cout << "4- Change Password. " << endl;
		cin >> a;

		switch (a) {
		case 1:
			addBook();
			break;

		case 2:
			modifyBook();
			break;
		
		case 3:
			deleteBook();
			break;

		case 4:
			changePassword();
			break;

		default:
			cout << "Please Input Correctly! " << endl;
		}
	}
	

	void changePassword() {

		cout << "Enter Existing Password: " << endl;
		cin >> pass;
		
		if (pass != pass1) {
			cout << "Incorrect Existing Password! " << endl;
			system("PAUSE");
			system("cls");
			login();
		}

		cout << "Enter New Password: " << endl;
		cin >> pass;
		cout << "Password Changed Successfully..." << endl;
		system("PAUSE");
	}
	

	void password() {

		string pass3;
		cout << "Enter Password: " << endl;
		cin >> pass3;

			if (pass3 == pass || pass3 == pass1) {
				cout << "Login Successful..." << endl;
				system("PAUSE");
			}
			else {
				cout << "Login Failed! Incorrect Password! " << endl;
				system("PAUSE");
				system("cls");
				login();
			}
	}
		

	void login() {

		string login_ad="momin@riphah";
		cout << "Enter Admin Username" << endl;
		cin >> name;

		if (name != login_ad) {
			cout << "Incorrect Username! " << endl;
			system("PAUSE");
			system("cls");
			login();
		}

		password();
	}


	void addBook() {

		system("cls");

		cout << "\t\t\t-Add Book-" << endl;

		cout << "Enter Book Name: " << endl;
		cin >> bname;
		cout << endl << endl;
		cout << "Enter ISBN No.: " << endl;
		cin >> isbn;
		cout << "BOOK ADDED SUCCESSFULLY!" << endl;
		ofstream os;
		os.open("books.txt");
		os << "Book Name: " << bname << endl;
		os << "ISBN: " << isbn << endl;
		cout << "---------------------------" << endl;
		cout << "Name: " << bname << endl;
		cout << "ISBN: " << isbn << endl;
	}

	void deleteBook() {

		system("cls");

		cout << "\t\t\t-Book Deletion-" << endl;

		ifstream read, read1;
		ofstream write, write1;

		read.open("all1.txt", ios::in);
		write.open("temp.txt");

		string temp;
		cout << "Enter the Book you want to Delete: " << endl;
		cin >> bname;

		cout << "Press y to confirm. " << endl;
		cin >> y;
		y = " ";
		while (!read.eof()) {
			read >> d;

			if (d == bname) {
				write << y << endl;
			}

			else { 
				write << d << endl; 
			}
		}
		read.close();
		write.close();

		read1.open("temp.txt", ios::app);
		write1.open("all1.txt");

		while (!read1.eof()) {
			read1 >> d;
			write1 << d << endl;
		}
		cout << "Book has been deleted..." << endl;
		system("PAUSE");
	}


	void modifyBook() {

		system("cls");
		cout << "\t\t-Book Modify-" << endl;

		ifstream read, read1;
		ofstream write, write1;

		read.open("all.txt", ios::in);
		write.open("temp.txt");

		string temp;
		cout << "Enter the Book you want to modify: " << endl;
		cin >> bname;

		cout << "Enter New Book to replace " << endl;
		cin >> temp;


		while (!read.eof()) {
			read >> d;

			if (d == bname) {
				write << temp << endl;
			}

			else { 
				write << d << endl; 
			}
		}

		read.close();
		write.close();

		read1.open("temp.txt", ios::app);
		write1.open("all.txt");

		while (!read1.eof()) {
			read1 >> d;
			write1 << d << endl;
		}
		cout << "Book has been modified..." << endl;
		system("PAUSE");
	}


};



int main() {
	int c;

		do {

			system("cls");
			cout << "\t\t\tE-LIBRARY MANAGEMENT SYSTEM" << endl;
			cout << "1- User Control." << endl;
			cout << "2- Admin Control." << endl;
			cout << "3- Exit." << endl;
			cin >> c;


			Student s;
			Admin a;
			switch (c) {
			case 1:
				system("cls");
				cout << "\t\t\t-Student Section-" << endl;
				s.profile();
				s.user();
				break;

			case 2:
				system("cls");
				cout << "\t\t\t-Admin Section-" << endl;
				a.login();
				a.admin();
				break;

			case 3:
				system("cls");
				cout << "Exiting..." << endl;
				system("PAUSE");
				exit(0);
				break;
			}

		} 
		while (true);

}
