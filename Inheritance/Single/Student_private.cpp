#include"iostream"
using namespace std;
#include"sham.h"
class Student_info{
          protected:
		      int roll,m1,m2,m3;
			  char name[10];
	      
		      Student_info(){
				       cout<<endl<<"\t Enter a ROll_No :- ";
					   cin>>roll;
					   cout<<endl<<"\t Enter a Name    :- ";
					   cin>>name;
					   cout<<endl<<"\t Enter marks of 3 sub  :- ";
					   cin>>m1>>m2>>m3;
			  }
};
class Result: protected Student_info{
	      int total;
		  float per;
		public:
		    Result(){
				cout<<endl<<"\t Roll No    :- "<<roll;
				cout<<endl<<"\t Name       :- "<<name;
				cout<<endl<<"\t Marks      :- "<<m1<<"   "<<m2<<"   "<<m3;
				total=m1+m2+m3;
				per=(float)total/3;
				cout<<endl<<"\t Total      :- "<<total;
				cout<<endl<<"\t Persentage :- "<<per;				
			}
};
int main(){
	   Pass_Word();
	   Result x;
	   cin.get();
	   return(0);
}
