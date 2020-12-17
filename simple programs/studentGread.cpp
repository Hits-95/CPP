#include<iostream>
using namespace std;

struct Student{
             private:
			      int Rno;
                  char Name[10];
                  int m1,m2,m3;
				  int Total;
				  float Persentage;
             public:
                  void Input(){
					      cout<<"Enter Student Information\n"<<endl<<"( Roll No,Name,Marks of\n1) science,\n2) MAth,\n3) English )\n\n";
                          cin>>Rno>>Name>>m1>>m2>>m3;						  
				  }
				  void Display(){
					      cout<<Name<<" Result is ->"<<endl<<endl;
						  cout<<"Rull No = "<<Rno<<endl;
						  cout<<"Name = "<<Name<<endl<<endl;
						  cout<<"Science = "<<m1<<endl<<"Math = "<<m2<<endl<<"English = "<<m3<<endl;
						  Result();            //Call Result
				  }
				  void Result(){
					      Total=m1+m2+m3;
						  Persentage=Total/3;
						  cout<<"\nTOtal Marks are = "<<Total<<endl;
						  cout<<"Persentage are = "<<Persentage<<endl<<endl;
						  Class();           //Call Class
				  }
				  void Class(){
					      if(m1>=35 && m2>=35 && m3>=35){
							 if(Persentage>70)
								 cout<<"1st Class with distingtion";
							 else if(Persentage<70 && Persentage>60)
								     cout<<"1st Class";
								  else if(Persentage<60 && Persentage>50)
									      cout<<"2nd Class";
									   else if(Persentage<50 && Persentage>=35)
										       cout<<"Pass";
						  }
						  else{
						    if(m1<35 && m2<35 && m3<35)
							      cout<<"You Are Fail in Science,Math And English";
							   else if(m1<35 && m2<35)
								      cout<<"You Are Fail in Science And Math";
								    else if(m1<35 && m3<35)
										    cout<<"You Are Fail in Science And English";
										 else if(m2<35 && m3<35)
										        cout<<"You Are Fail in Math And English";
										       else if(m1<35)
											           cout<<"You Are Fail in Science";
											        else if(m2<35)
												           cout<"You Are Fail in Math";
												         else
													       cout<<"You Are Fail in English";	
						  }
				  }
};
int main(){
	   Student x;
	   x.Input();
	   x.Display();
	   cin.get();
	   return(0);
}
