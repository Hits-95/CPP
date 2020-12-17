#include<iostream>
using namespace std;

class Large{
	      int num1,num2;
		public:
		  Large(){
			  cout<<endl<<"\t\t Enter Two Numbers :- ";
			  cin>>num1>>num2;
		  }
		  void Display();
};
void Large :: Display(){
			       if(num1>num2)
					   cout<<endl<<"\t\t Large Number is = "<<num1;
				   else
					   cout<<endl<<"\t\t Large Number is = "<<num2;
}
int main(){
	   Large obj;            //defoult function calling
	   obj.Display();
	   cin.get();
	   return(0);
}
