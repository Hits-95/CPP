#include<iostream>
using namespace std;

struct StudentInfo{
              private:
			      int Rno;
                  char Name[10];
				  char Addres[10];
			  public:
                  void InputStudentInfo(){
					      cout<<endl<<" Enter Student Information\n"<<endl<<"( Roll No,Name,Addres) \n------------------------------------\n";
                          cin>>Rno>>Name>>Addres;	
				  }
                  void DisplayStudentInfo(){
					      cout<<"\n\n\n\n====**=====**=====**=====**=====\n\n";
					      cout<<Name<<" Result is ->\n------------------------------------\n";
						  cout<<" Rull No = "<<Rno<<endl;
						  cout<<" Name =    "<<Name<<endl;
                          cout<<" Addres =  "<<Addres;
				  }	
};
struct StudentMarks{
	          private:
			       int m1,m2,m3;
				   float total,persentage; 
		      public:
			       void InputStudentMark(){
					       cout<<endl<<endl<<" Enter Marks of Three Subjects :-\n\n (science,Math,English)\n------------------------------------\n";
						   cin>>m1>>m2>>m3;
				   }
				   void DisplayStudentMark(){
					       cout<<endl<<endl<<" Marks of Three Subjects are :-\n------------------------------------";
						   cout<<endl<<" Science = "<<m1;
						   cout<<endl<<" Math    = "<<m2;
						   cout<<endl<<" English = "<<m1;
				   }  
				   void Result(){
					       total=m1+m2+m3;
					       persentage=total/3;
						   cout<<endl<<"\n Total Marks and Persentage are :-\n------------------------------------";		   
						   cout<<endl<<" Total Marks = "<<total;
						   cout<<endl<<" Persentage =   "<<persentage<<endl;
						   Class();
				   }
				   void Class(){
					      if(m1>=35 && m2>=35 && m3>=35){
								 cout<<endl<<" student Gets :-\n------------------------------------\n";
							 if(persentage>70)
								 cout<<" 1st Class with distingtion";
							 else if(persentage<70 && persentage>60)
								     cout<<" 1st Class";
								  else if(persentage<60 && persentage>50)
									      cout<<" 2nd Class";
									   else if(persentage<50 && persentage>=35)
										       cout<<" Pass";
						  }
						  else{
						    if(m1<35 && m2<35 && m3<35)
							      cout<<" You Are Fail in Science,Math And English";
							   else if(m1<35 && m2<35)
								      cout<<" You Are Fail in Science And Math";
								    else if(m1<35 && m3<35)
										    cout<<" You Are Fail in Science And English";
										 else if(m2<35 && m3<35)
										        cout<<" You Are Fail in Math And English";
										       else if(m1<35)
											           cout<<" You Are Fail in Science";
											        else if(m2<35)
												           cout<" You Are Fail in Math";
												         else
													       cout<<" You Are Fail in English";	
						  }
						  cout<<endl<<endl;
					}
};				  
struct StudentResult{
	        StudentInfo sf;
			StudentMarks sm; 
};
int main(){
	   StudentResult sr;
	   
	   sr.sf.InputStudentInfo();
	   sr.sm.InputStudentMark();
	   sr.sf.DisplayStudentInfo();
	   sr.sm.DisplayStudentMark();
	   sr.sm.Result();
	   cin.get();
	   cin.get();
	   return(0);
	   
}
