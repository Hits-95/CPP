#include<iostream>
using namespace std;

struct Factorial{
	      private:
		      int x; 
          public:
		    void Input(){
				   cout<<"Enter a Number -> ";
				   cin>>x;
			}
			void Display(){
				   cout<<endl<<"Factorial of "<<x<<" is "<<Fact(x)<<"a="<<x;
			}
			int Fact(int x){
				   if(x==1)
					 return(1);
				   else
					 return(x  *Fact(x-1));
			}
};
int main(){
       Factorial a;
       a.Input();
       a.Display();   
	   cin.get();
	   return(0);
}
