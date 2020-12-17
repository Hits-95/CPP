#include<iostream>
#include<sham.h>
using namespace std;

class Student_info{
          public:
		      int rollno;
			  char name[10];
			  Student_info(){
				  cout<<endl<<"\t Enter a Roll_No :- ";
				  cin>>rollno;
				  cout<<endl<<"\t Enter a Name :- ";
				  cin>>name;
			  }
			  void Display_Student(){
			  	       cout<<endl<<"\t *** RESULT ***";
		               cout<<endl<<"\t Roll_No :- "<<rollno;
                       cout<<endl<<"\t Name    :- "<<name;					   
			  }
};
class Exam : public Student_info{
	       public:
		       int m1,m2,m3;
			   Exam(){
				   cout<<endl<<"\n\t Enter Marks :- ";
				   cout<<endl<<"\t ---------------";
				   cout<<endl<<"\t Science = ";
				   cin>>m1;
				   cout<<endl<<"\t Math    = ";
				   cin>>m2;
				   cout<<endl<<"\t English = ";
				   cin>>m3;
			   }
			   void Display_Exam(){
				        cout<<endl<<"\n\t Science = "<<m1;
						cout<<endl<<"\t Math    = "<<m2;
						cout<<endl<<"\t English = "<<m3;
			   }
};
class Result : public Exam{
	          public:
			      int t;
				  float p;
				  Result(){
					  t=m1+m2+m3;
					  p=t/3;
					  Display_Result();          //fun call
				  }
				  void Display_Result(){
					        Display_Student();    //fun call
							Display_Exam();       //fun call
							cout<<endl<<"\t TOTAL      = "<<t;
							cout<<endl<<"\t PERSENTAGE = "<<p;
				  }
};
int main(){
	   if(Pass_Word())
         Result x;
       else
         cout<<endl<<"\t Wong Pass_Word !!!";	
       cin.get();
       return(0);	   
}
