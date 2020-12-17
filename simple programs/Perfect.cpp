
#include<iostream>
using namespace std;

struct Perfect{
           private:
		         int num,sum,i;
		   public:
		        void Input(){
			            cout<<"\n Enter a Number -> ";
		                cin>>num;				
			    }
				/*void Diaplay(){
					    if(isPerfect()==num)
						   cout<<"The given number "<<num<<" is Perfect";
					    else
						   cout<<"The given number is "<<num<<" Not Perfect";
				}*/
				
				int isPerfect(){
					if(num<=1000){
					    sum=0;
					    for(i=1;i<num && num%i==0;i++)
						    sum+=i;
					    if(sum==num)
					      cout<<"\n"<<num;
					    num++;
					    isPerfect();
				   }
			}
};
int main(){
	   Perfect x;
	   x.Input();
	   x.isPerfect();
	   cin.get();
	   return(0);
}
	 
