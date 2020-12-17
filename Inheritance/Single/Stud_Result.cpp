#include<iostream>
using namespace std;
#include<sham.h>

class Student_info{
	          int roll_no,m1,m2,m3;
		      char name[10];
	    	  char add[10];
		    public:
		      Student_info(){
		              cout<<endl<<"\t Enter a Roll_No :- ";
                      cin>>roll_no;
                      cout<<endl<<"\t Enter a Name    :- ";
					  cin>>name;
					  cout<<endl<<"\t Enter a Address :- ";
					  cin>>add;
					  cout<<endl<<endl<<"\t Enter Marks :-";
                      cout<<endl<<"\t --------------\n";
                      cout<<endl<<"\t Science :- ";
                      cin>>m1;	
                      cout<<endl<<"\t Math    :- ";
                      cin>>m2;	
                      cout<<endl<<"\t Enlish  :- ";
                      cin>>m3;					  					  
        			  Display_Student_info();		     //fun call
		 	 }
			 void Display_Student_info(){
				          cout<<endl<<"\t Student information is :- ";
						  cout<<endl<<"\t ----------------------------";
						  cout<<endl<<"\t Roll_No  :- "<<roll_no;
						  cout<<endl<<"\t Name     :- "<<name;	
                          cout<<endl<<"\t Address  :- "<<add<<endl;	
                          cout<<endl<<"\t marks of Student :- ";
                          cout<<endl<<"\t ---------------------\n";
                          cout<<endl<<"\t Science :- "<<m1;
                          cout<<endl<<"\t Math    :- "<<m2;
                          cout<<endl<<"\t Enlish  :- "<<m3;						  
			 }
};   
class Result : public Student_info{
	             float per,total;
			 public:
			     Result(){
					 total=m1+m2+m3;
					 per=total/3;
					 Display_Result();
				 }
				 void Display_Result(){
					          cout<<endl<<"\n\t >>>> ~ * RESULT * ~ <<<< ";
							  cout<<endl<<"\t      --------------";
							  cout<<endl<<"Total      = "<<total;
							  cout<<endl<<"Persentage = "<<per;
			     }
};

int main(){
	   if(Pass_Word())
         Result x;
	  else
		 cout<<"\n\t WRONG !!! PASS WORD !!!!";
	  cin.get();
	  return(0);
}   
