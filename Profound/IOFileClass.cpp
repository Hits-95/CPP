#include "iostream"
#include"fstream"
using namespace std;

//file oprations variables
const char filename[10] = "Student";
fstream fout,fin;

class Student{
	int rollno;
	string name;
	string addr;
	
	public : 
		//open file modes
		Student(){
			fout.open(filename , ios::out);
			fin.open(filename , ios::in); 
		}
		
		//get data from user
		void getStudent(){
			cout<<endl<<"Enter Roll No : ";
			cin>>this->rollno;
			cout<<endl<<"Enter Name    : ";
			cin>>this->name;
			cout<<endl<<"Enter Address : ";
			cin>>this->addr;
		}
		//display on console
		void display(){
			cout<<endl<<"----- Data ----- ";
			cout<<endl<<"RollNo  : "<<this->rollno;
			cout<<endl<<"Name    : "<<this->name;
			cout<<endl<<"Address : "<<this->addr;
		}
		
		//write into file
		void writeFile(Student obj){
			fout.write( (char*) &obj, sizeof(obj) ); 
		}
		
		//read fron file and returnt updated result
		Student readFile(Student obj){
			fout.read( (char*) &obj, sizeof(obj) );
			return obj;
		}
		
		//close file poiters
		~Student(){
			fout.close();
			fin.close();
		}
};
int main(){
	Student obj = Student();
	//console part
	obj.getStudent();
	
	//file part
	obj.writeFile(obj);
	obj.readFile(obj).display();

	return 0;
};
