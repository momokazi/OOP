#include <iostream>
#include <string>
using namespace std;


class Cricketer
{
	protected:
		
		string name;
		int shirtno;
		string dob;
		int odi_rating;
		int test_rating;
		int t20_rating;
		int startyear;
		
		
		public:
			
			Cricketer()
			{
				name="0";
				shirtno=0;
				dob="0";
				odi_rating=0;
				test_rating=0;
				t20_rating=0;
				startyear=0;
				
				cout<<"Default Constructor (PARENT)"<<endl;				
			}
				
			
			Cricketer(string a, int b, string c, int d, int e, int f, int g)
			{
				name=a;
				shirtno=b;
				dob=c;
				odi_rating=d;
				test_rating=e;
				t20_rating=f;
				startyear=g;
				
				cout<<"Parameterised Constructor 1 (PARENT)"<<endl;
			}

	int calculateAge()
	{
		int age;
		string split;
		split=dob.substr(6, 4);
		
		age=stoi(split);
		age=2022-age;
		
		return age;
	}	


	int calculateExperience()
	{
		startyear=2022-startyear;
		return startyear;
	}


	void changeODIRating(int odi) 
	{
		odi_rating=odi;
	}
		
		
	void changeT20Rating(int ttw)
	{
		t20_rating=ttw;	
	}	
		
		
	void changeTestRating(int test)
	{
		test_rating=test;
	}	
		
		
			//temporary print function to check values
	void print(){
		
		cout<<"Name: "<<name<<endl;
		cout<<"Shirt No.:"<<endl;
		cout<<"Date of Birth: "<<dob<<endl;
		cout<<"ODI Rating: "<<odi_rating<<endl;
		cout<<"Test Rating: "<<test_rating<<endl;
		cout<<"T20 Rating: "<<t20_rating<<endl;
		
	}


	~Cricketer()
	{
		cout<<"Destructor of Cricketer (PARENT)"<<endl;
	}


};

	
	
	class Bowler : virtual public Cricketer
	{
		private:
			string type;
			int total_wickets;
			int match_played;
			
		public:
			
			Bowler()
			{
				type="0";
				total_wickets=0;
				match_played=0;
				
				cout<<"Default Constructor of Bowler (CHILD 1)"<<endl;
			}
				
			Bowler(string a, int b, string c, int d, int e, int f, int g, string a1, int b1, int c1):Cricketer(a, b, c, d, e, f, g)
			{
				type=a1;
				total_wickets=b1;
				match_played=c1;	
				
				cout<<"Parameterised Constructor of Bowler (CHILD 1)"<<endl;			
			}		
				
				
		int calculateBowlAverage()
		{	
			int average;
			average=total_wickets/match_played;	
			return average;	
		}
				
				
		void updateMatches(int um)
		{
			match_played=match_played+um;
		}	
	
	
		void updateWickets(int uw)
		{
			total_wickets=total_wickets+uw;
		}
	
			//temporary print function to check values
		void print()
		{
			
		cout<<"Name: "<<name<<endl;
		cout<<"Shirt No.: "<<shirtno<<endl;
		cout<<"Date of Birth: "<<dob<<endl;
		cout<<"ODI Rating: "<<odi_rating<<endl;
		cout<<"Test Rating: "<<test_rating<<endl;
		cout<<"T20 Rating: "<<t20_rating<<endl;
				
		cout<<"Total Matches: "<<match_played<<endl;
		cout<<"Total Wickets: "<<total_wickets<<endl;
		
		}	
	

~Bowler()
{
	cout<<"Destructor of Bowler (CHILD 1)"<<endl;
}


};
	
	
	class Batsman : virtual public Cricketer
	{
		private:
			string type;
			int total_runs;
			int match_played;
			int best_score;
			
		public:
			Batsman()
			{
				type="0";
				total_runs=0;
				match_played=0;
				best_score=0;
			
				cout<<"Default Constructor of Batsman(CHILD 2)"<<endl;
			}
	
	
			Batsman(string a, int b, string c, int d, int e, int f, int g, string a2, int b2, int c2, int d2):Cricketer(a, b, c, d, e, f, g)
			{
				type=a2;
				total_runs=b2;
				match_played=c2;
				best_score=d2;
				
				cout<<"Parameterised Constructor of Batsman (CHILD 2)"<<endl;
			}
	
			
		int calculateBatAverage()
		{
			int average;
			average=total_runs/match_played;
			return average;
		}
		
		
		void updateMatches(int um)
		{
			match_played=match_played+um;
		}	
	
		
		void updateRuns(int ur)
		{
			total_runs=total_runs+ur;
		}	
	
	
			//temporary print function to check values
		void print()
		{
			cout << "Name: " <<name << endl;
			cout << "Shirt No.: " <<shirtno << endl;
			cout << "Date of Birth: " <<dob << endl;
			cout << "ODI Rating: " <<odi_rating << endl;
			cout << "Test Rating: " << test_rating << endl;
			cout << "T20 Rating: "<< t20_rating << endl;
			
			cout << "Total Matches: "<< match_played << endl;
			cout << "Total Runs: " << total_runs << endl;
		
		}


~Batsman()
{
	cout<<"Destructor of Batsman (CHILD 2)"<<endl;	
}	
	
	
};


	class AllRounder : public Bowler, public Batsman
	{
		public:
			AllRounder()
			{
				cout<<"Default Constructor of All Rounder (CHILD OF BOWLER AND BATSMAN)"<<endl;
			}
	
	
	~AllRounder()
	{
		cout<<"Destructor of All Rounder (CHILD OF BOWLER AND BATSMAN)"<<endl;
	}
	
};
	


int main()
{
	//Cricketer* c = new Cricketer();
	//Cricketer* c1 = new Cricketer("Babar Azam", 69, "20/10/1989", 10, 25, 50, 2013);
	//Bowler* b = new Bowler();
	Bowler* b1=new Bowler("Babar Azam", 69, "20/10/1989", 30, 25, 50, 2013, "Fast-Medium", 100, 65);
	//Batsman* B = new Batsman();
	//Batsman* B2 = new Batsman("Babar Azam", 69, "20/10/1989", 30, 25, 50, 2013, "All-Rounder", 2000, 700, 120);
	//AllRounder* a = new AllRounder();
	
	
	//cout<<"Age: "<< c1 -> calculateAge() <<endl;
	//cout<<"Experience: "<< c1 -> calculateExperience() << endl;
	//c1 -> changeODIRating(20);
	//c -> changeTestRating(20);
	//c -> changeT20Rating(30);
	
		
	cout<<"Bowling Average: "<< b1 -> calculateBowlAverage() <<endl;	
	//b -> updateMatches(10);	
	//b -> updateWickets(10);
	
	
	//cout<<"Batting Average: "<< B2 -> calculateBatAverage() <<endl;	
	//B -> updateMatches(20);
	//B -> updateRuns(200);
		
		
			//temporary print functions to check values	
	//c -> print();
	//c1 -> print();
	//b -> print();
	//b1 ->  print();
	//B -> print();
	//B2 -> print();
	
	
	//delete c;
	//delete b;
	//delete B;
	//delete a;

}
