#include "iostream"
#include "string.h"
using namespace std;

class Address;
/*
*** single inheritance between Parent and Child
*/

//Parent class
class Parent{
	protected:
		char name[20], email[30];
	public:
		Parent(char name[], char email[]){
			strcpy(this->name, name);
			strcpy(this->email, email);
		}
};
//Child class
class Child : private Parent{
	private:
		char course[20], year[5];
	public:
		Child(char* name, char* email, char* course, char* year ) : Parent(name, email) {
			strcpy(this->course, course);
			strcpy(this->year, year);
		}
		
		//friend function declaration
		friend void displayData(Child, Address);
};
//class Address not a part of inheritance 
class Address{
	private:
		char city[20];
		int pin;
	public:
		Address(char* city, int pin) : pin(pin){
			strcpy(this->city, city);
		}
		
		//friend function declaration
		friend void displayData(Child, Address);
};

void displayData(Child child, Address addr){
	cout<<endl<<"----- Data -----";
	cout<<endl<<"Name    : "<<child.name;
	cout<<endl<<"Email   : "<<child.email;
	cout<<endl<<"Course  : "<<child.course;
	cout<<endl<<"Year    : "<<child.year;
	cout<<endl<<"City    : "<<addr.city;
	cout<<endl<<"Pincode : "<<addr.pin;	
}
//main body
int main(){
	Child child = Child("Hitesh Ahire", "hits.ahire95@gmail.com", "ADJT", "2021");
	Address addr = Address("Dabli", 423206);
	//caling friend funcction...	
	displayData(child, addr);
	return 0;
}
