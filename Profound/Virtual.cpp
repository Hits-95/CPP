#include "iostream"
#include "string.h"
using namespace std;

class Person{
	protected:
		char name[20];
		char email[20];
		char contact[20];
	public:
		//pure virtual function 
		virtual void getData() = 0;
		
		void displayPerson(){
			cout<<endl<<"----- Data -----";
			cout<<endl<<"Name       : "<<this->name;
			cout<<endl<<"Email      : "<<this->email;
			cout<<endl<<"Contact    : "<<this->contact;
		}
};//end of Person Class

class Student : public Person{
	protected:
		int rollno;
		float per;
		char course[10];
	public:
		//pure virtual function 
		virtual void calculateMarks() = 0;	
		
		void displayCourse(){
			cout<<endl<<"rollno     : "<<this->rollno;
			cout<<endl<<"Course     : "<<this->course;
		}		
};//end of Student Class

class UnderGraduate : public Student{
	public: 
		//impllement getData() method of Person Class
		void getData(){
			cout<<endl<<"Enter Roll No :\t";
			cin>>this->rollno;
			cout<<endl<<"Enter Name    :\t";
			cin>>this->name;
			cout<<endl<<"Enter Course  :\t";
			cin>>this->course;
			cout<<endl<<"Enter Email   :\t";
			cin>>this->email;
			cout<<endl<<"Enter Contact :\t";
			cin>>this->contact;
		}
		
		//impllement calculateMarks() method of Student Class
		void calculateMarks(){
			//take data as static....
			cout<<endl<<"Persentage : "<<(340/4);
		}	
};

//main body
int main(){
	UnderGraduate obj = UnderGraduate();
	obj.getData();
	obj.displayPerson();
	obj.displayCourse();
	obj.calculateMarks();
	return 0;
}
