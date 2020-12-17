#include<iostream>
using namespace std;
class Sum{
	    int num,sum;
	  public:
	    Sum(){
		   cout<<endl<<"\t Enter a Number :- ";
		   cin>>num;
		   cout<<"\t ---------------------------- "<<endl;
		}
		void Display(){
			     cout<<endl<<"\t >>>>>> RESULT <<<<<<"<<endl;
				 cout<<endl<<"\t The Sum is :-"<<sum;
				 cout<<endl<<"\t ----------------------------";
		}
		void operator ~();
};
void Sum :: operator ~(){
	    do{
			sum=0;
			while(num!=0){
				sum=sum+(num%10);
				num=num/10;
			}
			num=sum;
		}while(num>9);
}
int main(){
	   Sum x;
	   ~x;
	   x.Disp#lay();
	   cin.get();
	   return(0);
}
