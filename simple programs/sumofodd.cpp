#include<iostream>
using namespace std;

struct Odd{
	     private:
		       int num,sum1,sum2;
		 public:
		      void Input(){
				      cout<<"Enter a Range->";
					  cin>>num;
			  }
			  void Display(){
				      
					  sum1,sum2=0;
				      cout<<"\nThe Sum Odd Number is =";
					  for(int i=1;i<=num;i++)
					     if(i%2!=0)
					       sum1+=i;
					     else
					       sum2+=i;
                      cout<<sum1;
					  cout<<"\nThe Sum Even Number is ="<<sum2;					 
			  }
};
int main(){
	   Odd x;
	   x.Input();
	   x.Display();
	   cin.get();
	   return(0);
}
