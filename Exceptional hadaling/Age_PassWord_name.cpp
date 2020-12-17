#include"iostream"               
#include"sham.h"
#include"string"
//pass word and name length must be > 4 && age >14 and <40
int main(){
	   if(Pass_Word()){
		   try{
		      int age;
		      char nm[10],pwd[10];
		      cout<<endl<<"\t Enter a Name and Pass_Word = ";
		      cin>>nm>>pwd;
			  if(strlen(nm)<4|| strlen(pwd)<4)
                 throw nm[0];
			  cout<<endl<<"\t Enter age = ";
			  cin>>age;
			  if(age<18 || age>40)
				  throw age;			 
		   }
		   catch(int a){
			   cout<<endl<<"\t Invalide age.....";
		   }
		   catch(char m){
			   cout<<endl<<"\t Name and Pass_Word length Must be greate than 4....";
		   }
	   }else
		   cout<<endl<<"\t Wrong !!! Pass_Word...";
	   cin.get();
	   return(0);
}
