#include <iostream>
using namespace std;

class Vehicle
{
	protected:
		int enginecapacity;
		int seatcapacity;

	public:
		
		Vehicle()
		{
			enginecapacity=100;
			seatcapacity=4;
			
			cout<<"Default Constructor of Vehicle."<<endl;
		}
		
		
		
		Vehicle(int a, int b)
		{
			enginecapacity=a;
			seatcapacity=b;
			cout<<"Paramterised Construtctor of Vehicle."<<endl;
		}
		
		
		
		void display(){
			
		cout<<"Engine Capacity: "<<enginecapacity<<endl;
		cout<<"Seating Capacity: "<<seatcapacity<<endl;
		
		}

		
		
		void changeEngineCapacity(int ec)
		{
			if(ec>1){
				enginecapacity=ec;
			}
			else
			cout<<"Negative Values Cannot be Accepted! Default value will be applied."<<endl;
		}

		
		
		void changeSeatCapacity(int sc)
		{	
			if(sc>1){
				seatcapacity=sc;
			}
			else
			cout<<"Negative Values Cannot be Accepted! Default value will be applied."<<endl;
		}
		
		
		
		~Vehicle()
		{
			cout<<"Destructor of Vehicle"<<endl;
		}
		
};
	
	
	class Car:public Vehicle
	{
		private:
			int windscreensize;
			int steeringsize;
	
		
		public:
			Car()
			{	
				windscreensize=25;
				steeringsize=5;
				cout<<"Default Constructor of Car"<<endl;
			}
	
			
			Car(int a, int b , int c ,int d):Vehicle(a, b)
			{
				windscreensize=c;
				steeringsize=d;
				cout<<"Parameterised Constructor of Car"<<endl;
			}
	
	
	void display()
	{	
		cout<<"Engine Capacity of Car: "<<enginecapacity<<endl;
		cout<<"Seat Capacity: "<<seatcapacity<<endl;
		cout<<"Windscreen Size: "<<windscreensize<<endl;
		cout<<"Steering Size: "<<steeringsize<<endl;	
	}
	
	~Car()
	{
		cout<<"Destructor of Car"<<endl;
	}
	
	
};


	class Bike : public Vehicle
	{
		private:
			int handlesize;
			
		
		public:	
			Bike()
			{	
				handlesize=10;
				cout<<"Default Constructor of Bike"<<endl;
			}
		
			Bike(int a, int b ,int c):Vehicle(a, b)
			{
				handlesize=c;
				cout<<"Parameterised Constructor of Bike"<<endl;
			}	
	
	
	void display()
	{
		cout<<"Engine Capacity of Bike: "<<enginecapacity<<endl;
		cout<<"Seat Capacity: "<<seatcapacity<<endl;
		cout<<"Handle Size: "<<handlesize<<endl;
	}
	
	
	~Bike()
	{
		cout<<"Destructor of Bike"<<endl;
	}


};




int main()

{
	//Vehicle* v = new Vehicle();
	Car* c = new Car();
	Bike* b = new Bike();
	
	c -> display();
	b -> display();
	
	cout<<"\tCHANGED VALUES"<<endl;
	
	c -> changeEngineCapacity(700);
	b -> changeEngineCapacity(150);
	b -> changeSeatCapacity(2);
	
	
	c -> display();
	b -> display();

	//delete c,b;

}
