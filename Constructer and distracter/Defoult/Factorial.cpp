#include<iostream>
using namespace std;

class Fact{
	      float num ;
	    public:
		     Fact(){
				 cout<<endl<<"\t Enter a Number = ";
				 cin>>num;
			 }
			 float Cal();
			 void Display(){
				    cout<<endl<<"\t Factorial = "<<Cal();
			 }
};

 float Fact :: Cal(){
	      if(num==1)
			  return (1);
		  else
			  return(num--*Cal());
 }
 int main(){
	 Fact obj;
	 obj.Display();
	 cin.get();
	 return(0);
 }
