#include "iostream"
using namespace std;

template <typename t1>

//person base class
class Person{
	t1 id, name;

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

//Derived call
template<typename t1>
class Student : public Person<t1>{
	t1 course;
	
	public:
		void getCourse(){
			cout<<endl<<"Enter Course  : ";
			cin>>this->course;
		}
		
		void displayCourse(){
			cout<<endl<<"Course : "<<this->course;
		}
};

//Derived call
template<class t1>
class Employee : public Person<t1>{
	t1 department;
	
	public:
		void getDepartment(){
			cout<<endl<<"Enter Department : ";
			cin>>this->department;
		}
		
		void displayDepartment(){
			cout<<endl<<"Department : "<<this->department;
		}
};


//main body
int main(){
	Student<string> sobj;
	Employee<string> eobj;
	
	//Student calling
	sobj.getPerson();
	sobj.getCourse();
	sobj.displayPerson();
	sobj.displayCourse();
	cout<<endl<<"--------------------";
	//Employee calling
	eobj.getPerson();
	eobj.getDepartment();
	eobj.displayPerson();
	eobj.displayDepartment();
	
	return 0;
}
