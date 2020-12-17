#include<iostream>
using namespace std;

enum hi{
	   False,True
};

hi isEven(int x){
	   if(x%2==0)
	      return(True);
	    else
	      return(False);
}
int main(){
	   int a;
	   cout<<"Enter a Number ";
	   cin>>a;
	   if(isEven(a)==True)
	      cout<<"\nEven";
	    else
	      cout<<"\nOdd";
	    cout<<"True="<<True<<"\t"<<"False="<<False;
	    cin.get();
		cin.get();
	    return(0);
}
