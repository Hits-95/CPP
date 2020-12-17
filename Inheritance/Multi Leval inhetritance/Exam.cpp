#include<iostream>
#include<string.h>

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
			        cout<<endl<<"\n\t   >>>>~~* RESULT *~~<<<<";
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
					     cout<<endl<<"\t Sience  = "<<m1;
					     cout<<endl<<"\t Sience  = "<<m2;
					     cout<<endl<<"\t Sience  = "<<m3;
			    }
};
class Result : private Exam{
	       int tot;
		   float per;
	    public:
		    Result(){
				tot=m1+m2+m3;
				per=tot/3;
			}
			void Display_Result_info(){
				     Display_Exam_info();                    //Display_Result_info Fun Call
				     cout<<endl;
					 cout<<endl<<"\t Total      = "<<tot;
					 cout<<endl<<"\t Persentage = "<<per;
			}
};
void Hits(){
	   cout<<endl<<"\t **************************************";
	   cout<<endl<<"\t *    ~ WEL - COME TO HIS`s PROG. ~   *";
	   cout<<endl<<"\t **************************************";
}
bool Pass_Word(){
	         char pass[10];
	         cout<<endl<<endl<<"\t Please Enter a Pass-Word :- ";
	         cin>>pass;
	         return(strcmp(pass,"hitesh@223")==0);
}
int main(){
	    Hits();
	    if(Pass_Word()){
	       Result x;
	       x.Display_Result_info();
    	}
    	else
    		cout<<endl<<endl<<"\t Sorry ! Your Pass-Word Is Wrong !!!! ";
		cin.get();
		cin.get();
		return(0);
}





