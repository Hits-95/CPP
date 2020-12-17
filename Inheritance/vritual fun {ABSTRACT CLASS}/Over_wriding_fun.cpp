#include"iostream"
using namespace std;
#include"sham.h"

class Student_info{
	    protected:
          int roll; 
          int total,m1,m2,m3;
		  char name[10];
	    public:
		   void input_Student_info(){
			   cout<<endl<<"\t Enter Roll No :- ";
			   cin>>roll;
			   cout<<endl<<"\t Enter Name    :- ";
			   cin>>name;		   
		   }
		   virtual void Display(){                               //fun over-wriding 
                        cout<<endl<<"\t Roll No : - "<<roll;
					    cout<<endl<<"\t Name    :- "<<name;
						 
           }
};
class Result : public Student_info{
           protected:
				 float per;
		   public:
		        void input_Result(){
					cout<<endl<<"\t Enter 3 sub Marks :- ";
					cin>>m1>>m2>>m3;
					total=m1+m2+m3;
					per=(float)total/3;
				}
				void Display(){
					     cout<<endl<<"\t Marks   :- "<<m1<<" "<<m2<<" " <<m3;
						 cout<<endl<<"\t Total   :- "<<total;
						 cout<<endl<<"\t Persent :- "<<per;
				}
};
int main(){
	   if(Pass_Word()){
	   	  Student_info *ptr,x;                   //alwasy make PARENT ptr
	      
		  ptr=&x;
		  ptr->input_Student_info();
		  ptr->Display();
		  
		  Result y;
		  ptr=&y;
		  y.input_Result();
		  ptr->Display();
	   }
	   else
	       cout<<endl<<"\t Wrong Pass_Word !!!";
	    cin.get();
		return(0);
}
