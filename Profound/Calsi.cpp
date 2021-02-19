#include <iostream>
using namespace std;

class Calsi{
	private:

    	int num1, num2;
    	float result;
	public:
		//get single number from user
		void getNumber(){
			cout<<endl<<"Enter first number : ";
			cin>>num1;
		}
		//get multiple numbers from user
		void getNumbers(){
			cout<<endl<<"Enter first number : ";
			cin>>num1;
			cout<<endl<<"Enter second number : ";
			cin>>num2;
		}

		void add(){
			result = num1 + num2;
		}

		void mul(){
			result = num1 * num2;
		}

		void div(){
			result = num1 / num2;
		}

		void sub(){
			result = num1 - num2;
		}

		void displayResult(){
			cout<<endl<<"Result : "<<result;
		}

		void squre(){
			result = num1 * num1;
		}

		void cube(){
			result = num1 * num1 * num1;
		}

		void mode(){
			result = num1 % num2;
		}

		void nthPower(){
			for(int i = 0; i < num2 ; i++)
				result *= num1;
		}

		void menu(){
			cout<<endl<<"*** MENU ****";
			cout<<endl<<"1 : Addition ";
			cout<<endl<<"2 : Subtraction ";
			cout<<endl<<"3 : Multiplication";
			cout<<endl<<"4 : Division";
			cout<<endl<<"5 : Squre";
			cout<<endl<<"6 : Cube";
			cout<<endl<<"7 : Mode";
			cout<<endl<<"8 : nth Power";
			cout<<endl<<"9 : Exit";
		}
}obj;

//main method...
int main(){
	int ch;

	do{
		obj.menu();
		try_again : cout<<endl<<"Enter Choice : ";
		cin>>ch;
		switch(ch){
			case 1 : 
				obj.getNumbers();
				obj.add();
				obj.displayResult();
			break;
			case 2 : 
				obj.getNumbers();
				obj.sub();
				obj.displayResult();
			break;
			case 3 : 
				obj.getNumbers();
				obj.mul();
				obj.displayResult();
			break;
			case 4 : 
				obj.getNumbers();
				obj.div();
				obj.displayResult();
			break;
			case 5 : 
				obj.getNumber();
				obj.squre();
				obj.displayResult();
			break;
			case 6 : 
				obj.getNumber();
				obj.cube();
				obj.displayResult();
			break;
			case 7 : 
				obj.getNumbers();
				obj.mode();
				obj.displayResult();
			break;
			case 8 : 
				obj.getNumbers();
				obj.nthPower();
				obj.displayResult();
			break;
			case 9 :
			 exit(0);
			break;
			default: 
				cout<<endl<<"Invalid choice....\nEnter correct choice...";
				goto try_again;

		}
	}while(ch != 9);
	return 0;
}