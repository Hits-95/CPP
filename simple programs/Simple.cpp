#include<iostream>
using namespace std;

struct student{
	      private:
		          int rollno;
				  char name[20];
		  public:
		         void input(){
					     cout<<"Enter Roll NO.and Name";
						 cin>>rollno>>name;
				 }
				 void display(){
					     cout<<"Roll no ="<<rollno<<"\n";
						 cout<<"Name = "<<name;
				 }
};

int main(){
	   student s;
	   s.input();
	   s.display();
	   cin.
	   get();
	   return(0);
}
				  
