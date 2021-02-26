#include <iostream>
using namespace std;

class Bank{

	private:
		int pin;
		string name, state;

	public:
		//default constructor ...
		Bank(){
			pin = 123;
			name = "State Bank";
			state = "Maharastra";
		}

		//parameterized constructor ...
		Bank(string city, string street){
			cout<<city<<"\t"<<street;
		}

		//Copy constructor ...
		Bank(string email){
			cout<<"Email : "<<email;
		}

		Bank(const Bank &obj){
			pin  = obj.pin;
			name = obj.name;
			state = obj.state;
		}

		void display(){
			cout<<endl<<pin<<"\t"<<name<<"\t"<<state<<"\t\t";
		}

};


int main() {
	cout<<endl<<"Pin\tName \t\tState\t\tCity\t\tStreet";
	Bank obj1 = Bank();
	obj1.display();

	Bank obj2 = Bank("nsk", "gangapur");
	obj2.display();

	return 0;
}