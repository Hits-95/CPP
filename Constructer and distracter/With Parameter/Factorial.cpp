#include<iostream>
using namespace std;

class Fact{
	         float f;
         public:
         	 Fact(){
         	 	f=1;
			  }
		     float CalFact(int x);
			 Fact(float f){
	            cout<<endl<<"\t Fctorial is = "<<f; 
	      	 }
};
float Fact :: CalFact(int x){
	             if(x==1)
					 return(1);
				 else
					 return(x*CalFact(x-1));
}
int main(){
	  int x;
	  Fact obj1;
	  cout<<endl<<"enter a Number = ";
	  cin>>x;
	  float m=obj1.CalFact(x);
	  Fact obj2(m);
	  cin.get();
	  return(0);
}
