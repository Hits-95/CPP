#include "iostream"
#include "string.h"
using namespace std;

class Address;
//class Person
class Person{
	private:
		char name[20];
	public:
		Person(){
			strcpy(this->name, "Hitesh Ahire");
		}
		friend void display(Person, Address);
	
};//end of Person class

//class Address
class Address{
	private:
		int pincode;
		char city[20];
	public:
	Address() : pincode(423206){
		strcpy(this->city, "Malegaon");
	}
	friend void display(Person, Address);
};//end of Address class

//friend function body
void display(Person person, Address addr){
	cout<<endl<<"----- Data -----";
	cout<<endl<<"Name    : "<<person.name;
	cout<<endl<<"City    : "<<addr.city;
	cout<<endl<<"Pincode : "<<addr.pincode;
}

int main(){
	Person person = Person();
	Address addr = Address();
	display(person, addr);	
	return 0;
}
