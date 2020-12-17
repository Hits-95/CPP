#include<iostream>
using namespace std;

class Rev{
	    int num,rev;
     public:
	    Rev(){
			cout<<endl<<"\t Enter a Number :- ";
			cin>>num;
			cout<<"\t --------------\n";
			
			
		}
		void Display(){
			     cout<<endl<<"\t The Revers Number is :- "<<rev;
				 cout<<endl<<"\t --------------------";
		}
        void operator -();
};
void Rev ::operator -(){
	    rev=0;
	    while(num>0){
			rev=(num%10)+(rev*10);
			num/=10;			
		}
}
int main(){
	   Rev x;
	   -x;
	   x.Display();
	   cin.get();
	   return(0);
}