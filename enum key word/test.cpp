#include<iostream>
using namespace std;
#include<String.h>


enum Book{
        english,math,scince  
};
int main(){
	  char a[4];
	  Book obj;
	  cin>>obj;
	  if(obj==english)
		  cout<<endl<<"English";
	  else if(obj==math)
		     cout<<endl<<"math";
		   else
			  cout<<endl<<"science";
	 cin.get();
	 return(0);
}
