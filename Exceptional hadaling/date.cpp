#include"iostream"
#include"sham.h"

int main(){
	   if(Pass_Word()){
		   int d;
		   float m,y;
		   while(1){
		      try{
			     cout<<endl<<"\t Enter a day ";
			     cin>>d;
			     if(d>30)
					 throw d;
			     cout<<endl<<"\t Enter month ";
			     cin>>m;
				 if(m>12)
					 throw m;
				 cout<<endl<<"\t Enter year " ;
				 cin>>y;
		      }
			  catch(int a){
				  cout<<"\t Invalide Date Day ......";
			  }
			  catch(...){                                      //for all situations
				  cout<<"\t Invalide Date Month ......";
			  }
		   }
	   }else
		   cout<<endl<<"\t Wrong !!! Pass_Word...";
	   cin.get();
	   cin.get();
	   return 0;
}
