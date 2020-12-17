#include<iostream>
using namespace std;

struct Palindrom{
	     private:
		    int n,s,sum;
		 public:
		    void Input(){
				   cout<<"Enter a number";
				   cin>>n;
			}
			void Display(){
				   s=n;
				   if(isPali()==s)
					   cout<<"\n The Number "<<s<<" is "<<"Palindrom";
				   else
                       cout<<"\n The Number "<<s<<" is "<<"Not Palindrom";					   
			}
			int isPali();
};
int Palindrom::isPali(){
	     sum=0;
	     while(n>0){
            sum=(sum*10)+(n%10);
             n/=10;
		 }
   		 return(sum);
}
int main(){
	   Palindrom x;
	   x.Input
	   ();
	   x.Display();
	   cin.get();
	   return(0);
}
