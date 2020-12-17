#include<iostream>
using namespace std;
class Internal_Marks{
          public:
		      int im1,im2,im3;
			  void Input_internam_mark(){
				       cout<<endl<<"\t Enter Internal marks :- ";
					   cout<<endl<<"\t Science = ";
					   cin>>im1;
					   cout<<endl<<"\t Math    = ";
					   cin>>im2;
					   cout<<endl<<"\t English = ";
					   cin>>im3;
			  }
};
class External_Marks{
	      public:
		      int em1,em2,em3;
		      Input_externam_mark(){
			      cout<<endl<<"\t Enter External marks :- ";
				  cout<<endl<<"\t Science = ";
				  cin>>em1;
				  cout<<endl<<"\t Math    = ";
				  cin>>em2;
				  cout<<endl<<"\t English = ";
				  cin>>em3;
		      }
};
class Result : public Internal_Marks,public External_Marks{
	      public:
			  void Display(){
			  	        int total=(im1+im2+im3+em1+em2+em3)/2;
			            float per=(float)total/3;
				       cout<<endl<<"\t Internal Marks :- ";
					   cout<<endl<<"\t scince  = "<<im1;
					   cout<<endl<<"\t Math    = "<<im2;
					   cout<<endl<<"\t English = "<<im3;
					   cout<<endl<<"\t External Marks :- ";
					   cout<<endl<<"\t scince  = "<<em1;
					   cout<<endl<<"\t Math    = "<<em2;
					   cout<<endl<<"\t English = "<<em3;
					   cout<<"\n\n\t TOTAL    = "<<total;
					   cout<<"\n\t PERSENTAGE = "<<per;
			  }
};
int main(){
	    Result x;
		x.Input_internam_mark();
		x.Input_externam_mark();
		x.Display();
		cin.get();
		return(0);
}
