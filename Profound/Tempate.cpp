#include "iostream"
using namespace std;

template <class t1, typename t2>

//person base class
class Person{
	t1 id;
	t2 name;

	public:
		void getPerson(){
			cout<<endl<<"Enter ID     : ";
			cin>>this->id;
			cout<<endl<<"Enter Name   : ";
			cin>>this->name;	
		}

		void displayPerson(){
			cout<<endl<<"ID : "<<this->id;
			cout<<endl<<"Name : "<<this->name;
		}
};

class Student : public Person{
	string couse;
	
	public:
		void getCourse(){
			cout<<endl<<"Enter Couse  : ";
			cin>>this->couse;
		}
		
		void displayCouse(){
			cout<<endl<<"Couse : "<<this->couse;
		}
};
//main body
int main(){
	Student<int, string> person;
	person.getPerson();
	person.displayPerson();
	return 0;
}
