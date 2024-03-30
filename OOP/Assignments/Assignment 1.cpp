#include <iostream>
using namespace std;


class Time
{
	private:
		
		int hours;
		int minutes;
		int seconds;
		char mode;
		
	public:
		
		Time()
		{
			hours=00;
			minutes=00;
			seconds=00;
			mode='A';  //AM
			cout<<"Default Constructor "<<endl;
		
		}
		
		
		Time(int a, int b, int c, char d)
		{
			hours=a;
			minutes=b;
			seconds=c;
			mode=d;
			
			if(a>12){
				hours=a-12;
				cout<<"Please Enter Hours between 1 and 12!"<<endl;

			}
			
			if(b>59){
				minutes=b-60;
				hours++;
				cout<<"Please Enter Minutes between 0 and 59!"<<endl;
							
			}
			
			if(c>59){
				seconds=c-60;
				minutes++;
				cout<<"Please Enter Seconds between 0 and 59! "<<endl;			
			}
			
			if(d!='A' && d!='P'){
				cout<<"Invalid Mode! Default Mode is Applied. "<<endl;
				mode='A';
			}
			
			
			cout<<"Parameterized Constructor 1"<<endl;
		}
		
		
		Time(int a, int b, int c)
		{
			hours=a;
			minutes=b;
			seconds=c;
		
			
			if(a>12){
				hours=a-12;
				cout<<"Please Enter Hours between 1 and 12!"<<endl;

			}
			
			if(b>59){
				minutes=b-60;
				hours++;
				cout<<"Please Enter Minutes between 0 and 59!"<<endl;
							
			}
			
			if(c>59){
				seconds=c-60;
				minutes++;
				cout<<"Please Enter Seconds between 0 and 59!"<<endl;			
			}
				
			
			cout<<"Parameterized Constructor 2"<<endl;
		}
		
		
		//Copy Constructor
		
		Time(const Time& c)
		{
			hours=c.hours;
			minutes=c.minutes;
			seconds=c.seconds;
			mode=c.mode;
			
			cout<<"Copy Constructor. "<<endl;
		}		
	
	
	
	
	
	
	
	
	
	//getters
		
	int getHours(){
		
		return hours;
	}	
		
	int getMinutes(){
		
		return minutes;
	}	
		
	int getSeconds(){
		
		return seconds;
	}
	
	char getMode(){
		
		return mode;
	}	
	
	
		
	//setters
	
	void setHours(int h){
		
		hours=h;
		
		if(hours>12){
			hours=h-12;
		}
	}
		
	void setMinutes(int M){
		
		minutes=M;
		
		if(minutes>59){
			minutes=M-60;
			hours++;
			
		}
	}

	void setSeconds(int s){
		
		seconds=s;
		
		if(seconds>59){
			seconds=s-60;
			minutes++;
		}
	}

	void setMode(char m){
		
		if(m=='A' || m=='P'){
		
		mode=m;
		
		}
		else
		cout<<"Invalid Mode! Default Mode is Applied. "<<endl;
	}
	
	
	
	//functions
	
double convertToSeconds(){
	
	seconds=seconds+(hours*3600)+(minutes*60);
	cout<<"Total Time in Seconds: "<< seconds <<endl;

}

double convertToMinutes(){
	
	minutes=minutes+(hours*60)+(seconds/60);
	cout<<"Total Time in Minutes: "<< minutes <<endl;
}

double convertToHours(){
	
	hours=hours+(minutes/60)+(seconds/3600);
	cout<<"Total Time in Hours: "<< hours <<endl;
}




void convertTo24HourFormat(){

	hours=hours+12;
	
	if(hours>23){
		hours=hours-24;
  		mode='A';
	}
	
	if(minutes>59){
		minutes=minutes-60;
		hours++;
	}
	
	else
	mode='P';
	
	cout<<hours<<":"<<minutes<<" "<<mode<<endl; 
}




void incrementSeconds(int s){
	
	seconds=seconds+s;
	
	if(seconds>59){
		seconds=seconds-60;
		minutes++;
	}
	
	if(minutes>59){
		minutes=minutes-60;
		hours++;
	}
	
	if(hours>12){
		hours=hours-12;
		mode='P';
	}
	else
	mode='A';
}




void incrementMinutes(int M){
	
	minutes=minutes+M;
	
	if(minutes>59){
		minutes=minutes-60;
		hours++;
	}
	
	if(hours>12){
		hours=hours-12;
		mode='P';
	}
	else
	mode='A';
}




void displayTime(){
	
	cout<<hours<<":"<<minutes<<":"<<seconds<<" "<<mode<<endl;
}


~Time()
{
	cout<<"Destructor "<<endl;
}

};




int main(){
	
	Time* t = new Time();
	/*Time t1(5,15,40,'P');
	Time t2(5,15,40);
	
		
			//copy constructor
	Time t3=t2;
	
	
	t -> setHours(1);
	
	t1.setHours(1);
	t2.setHours(1);
	
	t -> setMinutes(55);
	
	t1.setMinutes(55);
	t2.setMinutes(55);
	
	t -> setSeconds(40);
	
	t1.setSeconds(40);
	t2.setSeconds(40);	
	
	t -> setMode('P');
	t1.setMode('P');
	
	
	t -> incrementSeconds(20);
	
	t1.incrementSeconds(20);
	t2.incrementSeconds(20);
	
	t -> incrementMinutes(10);
	
	t1.incrementMinutes(10);
	t2.incrementMinutes(10);
	
	
	t -> displayTime();
	t1.displayTime();
	t2.displayTime();
	t3.displayTime();
	*/
	
	cout<<"Hours: "<< t -> getHours()<<endl;
	cout<<"Minutes: "<< t -> getMinutes()<<endl;
	cout<<"Seconds: "<< t -> getSeconds()<<endl;
	cout<<"Mode: "<< t -> getMode()<<endl;
	
	/*t -> convertTo24HourFormat();
	t -> convertToSeconds();
	t -> convertToMinutes();
	t -> convertToHours();

	delete t;
*/

}
