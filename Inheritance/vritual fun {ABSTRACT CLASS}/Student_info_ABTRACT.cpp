#include"iostream"
using namespace std;
#include"sham.h"

class Student_info{
	    protected:
          int roll; 
		  char name[10];
	    public:
		   Student_info(){
			   cout<<endl<<"\t Enter Roll No :- ";
			   cin>>roll;
			   cout<<endl<<"\t Enter Name    :- ";
			   cin>>name;		   
		   }
		   virtual void Display()=0;    //class contant pure virtual fun called ABSTRACT CLASS
};
class Result : private Student_info{
           protected:
		         int total,m1,m2,m3;
				 float per;
		   public:
		        Result(){
					cout<<endl<<"\t Enter 3 sub Marks :- ";
					cin>>m1>>m2>>m3;
					total=m1+m2+m3;
					per=(float)total/3;
				}
				void Display(){
					     cout<<endl<<"\t Roll No : - "<<roll;
						 cout<<endl<<"\t Name    :- "<<name;
						 cout<<endl<<"\t Marks   :- "<<m1<<" "<<m2<<" " <<m3;
						 cout<<endl<<"\t Total   :- "<<total;
						 cout<<endl<<"\t Persent :- "<<per;
				}
};
int main(){
	   if(Pass_Word()){
	      Result x;
		  x.Display();
	   }
	   else
	       cout<<endl<<"\t Wrong Pass_Word !!!";
	    cin.get();
		return(0);
}
