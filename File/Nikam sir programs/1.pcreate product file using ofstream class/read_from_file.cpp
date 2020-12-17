#include"iostream"
#include"sham.h"
#include"fstream"

int main(){
	   if(Pass_Word()){
         int pno;
		 char pname[20];
		 float price;
		  //using constructor and open for reading  but file already present into comp.
		 //Now read data from file 
		 ifstream fin("product"); 
		 
		 fin>>pno;
		 fin>>pname;
		 fin>>price;
		         
	   	 cout<<endl<<"\t Pno   :- "<<pno;
		 cout<<endl<<"\t Name  :- "<<pname;
		 cout<<endl<<"\t price :- "<<price;		 		 
	   }else
		   cout<<endl<<"\t Wrong !!! Pass_word...";
	   cin.get();
	   return(0);		
}
