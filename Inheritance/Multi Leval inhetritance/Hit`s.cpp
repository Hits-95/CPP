#include<iostream>
#include<string.h>
#include<sham.h>
using namespace std;

class Student{
	       int roll_no;
		   char Student_Name[10];
		   char Student_Addr[10];
		public:
		   Student(){
			   cout<<endl<<endl<<"\t Enter Roll No      :- ";
			   cin>>roll_no;
			   cout<<endl<<"\t Enter Student_Name :- ";
			   cin>>Student_Name;
			   cout<<endl<<"\t Enter Student_Addr :- ";
			   cin>>Student_Addr;
		   }
		   void Display_Student_info(){
			        cout<<endl<<"\n\t   >>>> ~~* RESULT *~~ <<<<";
					cout<<endl<<"\t--------------------------------";
			        cout<<endl<<"\t Roll No      :- "<<roll_no;
					cout<<endl<<"\t Student_Name :- "<<Student_Name;
				    cout<<endl<<"\t Student_Addr :- "<<Student_Addr;
		   }
};
class Exam :private Student{
	     	  protected :
	            int m1,m2,m3;
            public:
		        Exam(){
				    cout<<endl;
				    cout<<endl<<"\t Enter Marks of Sience  :- ";
				    cin>>m1;
				    cout<<endl<<"\t Enter Marks of math    :- ";
				    cin>>m2;
				    cout<<endl<<"\t Enter Marks of English :- ";
				    cin>>m3;
		    	}         
			    void Display_Exam_info(){
				        Display_Student_info();                    //Display_Student_info Fun Call
				         cout<<endl;
					     cout<<endl<<"\t Sience   = "<<m1;
					     cout<<endl<<"\t math     = "<<m2;
					     cout<<endl<<"\t English  = "<<m3;
			    }
};
class Result : private Exam{
	       int tot;
		   float per;
	    public:
		    Result(){
				tot=m1+m2+m3;
				per=(float)tot/3;
			}  
			void Display_Result_info(){
				     Display_Exam_info();                    //Display_Result_info Fun Call
				     cout<<endl;
					 cout<<endl<<"\t Total      = "<<tot;
					 cout<<endl<<"\t Persentage = "<<per<<"%";
					 Class();                               //fun call
			}
			void Class();
			
};
void Result :: Class(){   
                        cout<<endl<<endl<<"\t ----------------";
						cout<<endl<<"\t student Gets :- \n\n";
                        
					      if(m1>=35 && m2>=35 && m3>=35){
							 if(per>70)
								 cout<<"\t 1st Class with distingtion";
							 else if(per<70 && per>60)
								     cout<<"\t 1st Class";
								  else if(per<60 && per>50)
									      cout<<"\t 2nd Class";
									   else if(per<50 && per>=35)
										       cout<<"\t Pass";
						  }
						  else{
						    if(m1<35 && m2<35 && m3<35)
							      cout<<"\t You Are Fail in All Subjects ";
							   else if(m1<35 && m2<35)
								      cout<<"\t You Are Fail in Science And Math";
								    else if(m1<35 && m3<35)
										    cout<<"\t You Are Fail in Science And English";
										 else if(m2<35 && m3<35)
										        cout<<"\t You Are Fail in Math And English";
										       else if(m1<35)
											           cout<<"\t You Are Fail in Science";
											        else if(m2<35)
												           cout<"\t You Are Fail in Math";
												         else
													       cout<<"\t You Are Fail in English";	
						  }
}
int main(){
	    //pass_word();
	       Result x;
	       x.Display_Result_info();
		cin.get();
		cin.get();
		return(0);
}




