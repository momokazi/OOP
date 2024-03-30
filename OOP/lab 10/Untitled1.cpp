#include<iostream>
using namespace std;


class Shape{

	public:
	virtual void calculateArea() = 0;
	
	void printArea(){
		cout<<"Print Area (Parent): "<<endl;
	}
};

	
	class TwoDim:public Shape{
		
		public:
			
		void calculateArea(){
			cout<<"Calculate Area"<<endl;
		}
	
		virtual void calculateTwoDimArea() = 0;
	
	};
	
	
	class ThreeDim:public Shape{
		public:
		void calculateArea(){
			cout<<"Calculate Area"<<endl;
		}
		
		virtual void calculateThreeDimArea() = 0;
		
	};
	
	
	class Circle:public TwoDim{
		public:
		void printArea(){
			cout<<"Area of Circle "<<endl;
		}
		void calculateTwoDimArea(){
			cout<<"Calculate Two Dim Area"<<endl;
		}
	};
	
	
	class Triangle:public TwoDim{
		public:
			void printArea(){
				cout<<"Area of Triangle"<<endl;
			}
			void calculateTwoDimArea(){
			cout<<"Calculate Two Dim Area"<<endl;
		}
	};
	
	
	class Rectangle:public TwoDim{
		public:
			void printArea(){
				cout<<"Area of Rectangle"<<endl;
			}
			void calculateTwoDimArea(){
			cout<<"Calculate Two Dim Area"<<endl;
		}
	};
	
	
	class Cube:public ThreeDim{
		public:
			void printArea(){
				cout<<"Area of Cube"<<endl;
			}
			void calculateThreeDimArea(){
			cout<<"Calculate Three Dim Area"<<endl;
		}
	};
	
	
	class Cone:public ThreeDim{
		public:
			void printArea(){
				cout<<"Area of Cone"<<endl;
			}
			void calculateThreeDimArea(){
			cout<<"Calculate Three Dim Area"<<endl;
		}
	};





int main()
{
Shape* obj1 = new Shape();
TwoDim* obj2 = new TwoDim();
ThreeDim* obj3 = new ThreeDim();
TwoDim* obj4 = new Circle();
TwoDim* obj5 = new Triangle();
Circle* obj6 = new Circle();
Rectangle* obj7 = new Rectangle();
Cube* obj8 = new Cube();
Cone* obj9 = new Cone();
obj7->printArea();
obj8->printArea();
obj9->printArea();
obj8->calculateThreeDimArea();
obj6->calculateTwoDimArea();
}

