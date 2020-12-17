#include<iostream>
using namespace std;

namespace test{
	int n;
	display(int m){
		cout<<endl<<"n2 = "<<n;
		cout<<endl<<"m = "<<m;
	}
}
int main(){
	  using test::n;
	      n=11 ;          //ok
	      cout<<endl<<"n1 = "<<n;
	      display(20)     //not posible
	
	
	  /* 2st type*/
	   using namespace test;
	        n= 100;            //ok
			display(200);      //ok
	
			
			cin.get();
			return(0);
}
