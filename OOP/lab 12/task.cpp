#include<iostream>
#include<ctime>
#include<random>
using namespace std;

int guessGame(){
	srand(time(0));
	int r = 1 + rand() % 6;
	return r;
}
int main(){
	int a,b,score=0;
	cout<<"-------------------------Guess the Dice Game!-------------------------"<<endl;
	cout<<"\t\t\t\t-Rules-"<<endl<<endl;
	cout<<"1- You will have 10 attempts to guess the number rolled on a dice."<<endl
	<<"2- If you get 3 or more guesses correct, you will win the game!"<<endl
	<<"3- If you guess incorrectly, you will lose a point!"<<endl<<endl;
	cout<<"---------------------------------"<<endl;
	
	for(int i=1; i<=10; i++){
		
		cout<<"Turn # "<<i<<endl;
		a=guessGame();
		cout<<"Dice is rolled. Guess the Number!"<<endl;
		cin>>b;
		
		if(a==b){
		    cout << "Correct Guess!" << endl;
		    score++;
			cout << "Score: " << score << endl;
			cout << "---------------------------------" << endl;
		}
		
		else{
		    cout << "Wrong Guess!" << endl;
			cout << "Actual Number is: " << a <<endl;
			if(score<=0){
			    score=0;
			}
			else{
			    score--;
			}
			cout << "Total Score is: " << score << endl;
		    cout << "---------------------------------" << endl;
		}
	}
	
	if(score>=3){
	    cout<<"Congrats! You've Won the game!"<<endl;
	}
	else{
	    cout<<"You Lose! Better luck next time :D"<<endl;
	}
	
	return 0;
}
