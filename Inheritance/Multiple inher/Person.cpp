#include "iostream"
using namespace std;

//global variables
string user_name, password;

//parent
class Person{
	protected:
		int id;
		string name;
		string email;
		string password;
	public:
		void getData(){
			cout<<"\t Enter Id        :\t";
			cin>>id;
			cout<<"\t Enter Name      :\t";
			cin>>name;
			cout<<"\t Enter Email     :\t";
			cin>>email;
			cout<<"\t Enter Pass-Word :\t";
			cin>>password;
		}

		void displayData(){
			cout<<endl<<"\t ***** Data ****";
			cout<<endl<<"\t Id        :\t"<<id;
			cout<<endl<<"\t Name      :\t"<<name;
			cout<<endl<<"\t Email     :\t"<<email;
			cout<<endl<<"\t Pass-Word :\t"<<password;

		}

		//pure virtual function
		virtual bool isAuthoris() = 0;
};

//child of Person class
class Student : public Person{
	private:
		string college;
		string cource;
	public:
		//get Student info here
		void getStudent(){
			cout<<"\t Enter College   :\t";
			cin>>college;
			cout<<"\t Enter Cource    :\t";
			cin>>cource;
		}

		//display Student info
		void displayStudent(){
			cout<<endl<<"\t College   :\t"<<college;
			cout<<endl<<"\t Cource    :\t"<<cource;
			cout<<endl<<"\t ------------------------------------"<<endl;
		}
		//implemention of pure virtual function
		bool isAuthoris(){
		    return(email == user_name && password == ::password);
        }
};

//child of Person class
class Employee : public Person{
	private:
		string company;
		string department;
	public:
		//get Employee info here
		void getEmployee(){
			cout<<"\t Enter Company   :\t";
			cin>>company;
			cout<<"\t Enter Department:\t";
			cin>>department;
		}

		//display Employee info
		void displayEmployee(){
			cout<<endl<<"\t Company   :\t"<<company;
			cout<<endl<<"\t Department:\t"<<department;
			cout<<endl<<"\t ------------------------------------"<<endl;
		}
		//implemention of pure virtual function
		bool isAuthoris(){
		    return(email == user_name && password == ::password);
		}

};

//get username as well as password
void getUser_Pass(){
	cout<<endl<<"\t Enter User-Name :\t";
	cin>>user_name;
	cout<<endl<<"\t Enter Pass-Word :\t";
	cin>>password;
}
//main body
int main(){
	int ch;

    cout<<endl<<"\t Enter Student Data ";
    cout<<endl<<"\t --------------------------------\n";
	Student std = Student();
	std.getData();
	std.getStudent();
	std.displayData();
	std.displayStudent();

    cout<<endl<<"\t Enter Employee Data ";
    cout<<endl<<"\t --------------------------------\n";
	Employee emp = Employee();
	emp.getData();
	emp.getEmployee();
	emp.displayData();
	emp.displayEmployee();

	do{
		cout<<endl<<"\t *** MENU ***";
		cout<<endl<<"\t 1 : Student Authentication.";
		cout<<endl<<"\t 2 : Employee Authentication.";
		cout<<endl<<"\t 3 : Exit.";

		cout<<endl<<"\t Enter Your Choice :\t";
		cin>>ch;

		switch(ch){
			case 1 :
				getUser_Pass();
				if(std.isAuthoris())
					cout<<endl<<"\t Studet is Authorise.";
				else
					cout<<endl<<"\t Studet NOT Authorise.";
			break;
			case 2 :
				getUser_Pass();
				if(emp.isAuthoris())
					cout<<endl<<"\t Employee is Authorise.";
				else
					cout<<endl<<"\t Employee NOT Authorise.";
			break;
			case 3 :
				 exit(0);
			break;
			default : cout<<endl<<"Invalide Choice...";

		}
	}while(ch != 3);




    return 0;
}