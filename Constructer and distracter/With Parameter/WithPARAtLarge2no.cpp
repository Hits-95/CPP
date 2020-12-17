#include<iostream>
using namespace std;

class Large{
	     
		public:
		  Large(int x,int y);
};
Large :: Large(int x,int y){
	if(x>y)
		cout<<endl<<"\t Large Number is = "<<x;
	else
		cout<<endl<<"\t Large Number is ="<<y;
}
int main(){
	   int num1,num2;
	   cout<<endl<<"\t Enter a Two Numbers :- ";
	   cin>>num1>>num2;
	   
	   Large obj(num1,num2);
	   cin.get();
	   return(0);
}
