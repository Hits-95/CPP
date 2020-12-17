#include<iostream>
#include"string.h"
#include"stdlib.h"
using namespace std;

//collage info
class Clg_info{
	      char clg_name[10];
		  char clg_pass[10],clg_id[10];
		protected:
		  void Set_clg_pass(){
			  cout<<endl<<"\t Firstly Set collage user id and pass word :- ";
			  cout<<endl<<"\t Enter user id   :- ";
			  cin>>clg_id;
			  cout<<endl<<"\t Enter Pass word :- ";
		      cin>>clg_pass;
		  }
		  void Get_clg_info(){
			  cout<<endl<<"\t\t Enter collage Name :- ";
			  cin>>clg_name;
		  
		  }
		  void Dispaly_clg_info(){
			  cout<<endl<<"\t\t collage Name :- "<<clg_name;
		  }
};
//student infornamtion
class Student_info: protected Clg_info{
	    protected:
	      int rollno;
		  char name[10],address[10];
		  char id[10],pass_w[10];
		public:
		   void Get_Student_info(){
			        Set_clg_pass();              // pass word fun call.
			        cout<<endl<<"\t\t Enter Roll no :- ";
					cin>>rollno;
					cout<<endl<<"\t\t Enter Name    :- ";
					cin>>name;
					cout<<endl<<"\t\t Enter Address :- ";
					cin>>address;
		   }
		   void Display_Student_info(){
			   Dispaly_clg_info();     //fun call
			   cout<<endl<<endl<<"\t\t The student "<<name<<" info are :- ";
			   cout<<endl<<"\t\t Roll NO :- "<<rollno;
			   cout<<endl<<"\t\t Name    :- "<<name;
			   cout<<endl<<"\t\t Address :- "<<address;
		   }
		   friend void Get_student_Pass_word(){
			   cout<<endl<<endl<<"\t Enter a login ID/Pass Word ";
			   cout<<endl<<"\t login ID  :- ";
               cin>>id;
			   cout<<endl<<"\t Pass Word :- ";
			   cin>>pass_w;
		   }
		   friend int Check_Student_Pass_word(Student_info);	   		   
};
class Subject :public Student_info{
	        protected:
			    int c,cpp,java,php;
				int total;
				float per;
		    public:
			    void Input_mark(){
					cout<<endl<<"\t\t Enter subjectd marks :- ";
					cout<<endl<<"\t\t C lang.    :- ";
					cin>>c;
					cout<<endl<<"\t\t cpp lang.  :- ";
					cin>>cpp;
					cout<<endl<<"\t\t java lang. :- ";
					cin>>java;
					cout<<endl<<"\t\t php lang.  :- ";
					cin>>php;
				}
				void Dispaly_mark(){
					cout<<endl<<endl<<"\t\t The student marks are :- ";
					cout<<endl<<"\t\t c lang.     :- "<<c;
					cout<<endl<<"\t\t cpp lang.   :- "<<cpp;
					cout<<endl<<"\t\t java lang.  :- "<<java;
					cout<<endl<<"\t\t  php lang.  :- "<<php;
					
				}
                void Result(){
					total=c+cpp+java+php;
					per=(total/400)*100;
					cout<<endl<<endl<<"\t\t The result are :- ";
					cout<<endl<<"\t\t Total      :- "<<total;
					cout<<endl<<"\t\t Persentage :- "<<per;				
				}				
};
class Teature : protected clg_info
             protected:
                   int t_no;
                   char t_name[10],degree[10],address[10],t_id[10],t_pass[10];
                   float salary;		
				public:
				   void Get_teature_Pass_word(){
					      cout<<endl<<"\t Enter Userid and Pass_word :-";
						  cout<<endl<<"\t User_ID :- ";
						  cin>>t_id;
						  cout<<endl<<"\t Enter pass word :- ";
						  for(int i=0;i<10;i++){
							  t_pass[i]=getch();
							  cout<<"*";						  
						  }N  
				   }
				   void Get_teature(){
					      cout<<endl<<endl<<"\t\t Enter Teature record :- ";
						  cout<<endl<<"\t\t Enter NO      :- ";
						  cin>>t_no;
						  cout<<endl<<"\t\t Enter name    :- ";
						  cin>>t_name;
						  cout<<endl<<"\t\t Enter degree  :- ";
						  cin>>degree;
						  cout<<endl<<"\t\t Enter address :- "
						  cin>>address;						  
				   }
				   void Dispaly_teature(){
					cout<<endl<<endl<<"\t\t The Tature info. are :- ";
					cout<<endl<<"\t\t teature_no     :- "<<t_no;
					cout<<endl<<"\t\t teature_name   :- "<<t_name;
					cout<<endl<<"\t\t degree         :- "<<degree;
					cout<<endl<<"\t\t address        :- "<<adress;
					
				}
				   
	       
};