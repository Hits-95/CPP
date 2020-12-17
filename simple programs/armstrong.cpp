#include<iostream>
using namespace std;

struct Armstrong{
	      private:
		        int str,num,sum,r;
          public:
		       void Input(){
			           cout<<"\n Enter a Number -> ";
		               cin>>num;				
			   }
               void Displsy(){
				       str=num;
				       if(str==isArm())
						  cout<<"The given number "<<str<<" is Armstrong";
					  else
						  cout<<"The given number "<<str<<" is Not Armstrong";
			   }
			   int isArm();
};
int Armstrong::isArm(){         //process
	     sum=0;
	     while(num!=0){
			 r=num%10;
			 sum+=(r*r*r);
			 num/=10;
		 }
		 return(sum);
} 
int main(){
	   Armstrong x;
	   x.Input();
	   x.Displsy();
	   cin.get();
	   return(0);
}
