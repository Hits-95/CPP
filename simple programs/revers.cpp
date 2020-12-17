#include<iostream>
using namespace std;

struct Revers{
	    private:
		    int x,sum;
		public:
		    void Input(){
				    cout<<"\n Enter a Number -> ";
		         	cin>>x; 				
			}
            void Displsy(){
				    cout<<"The Revers of "<<x;
					cout<<" is = "<<isRev();
			}			
			int isRev(){
				   sum=0;
				   while(x>0){
				   	   sum=sum*10+(x%10);
					   x/=10;
				   }
				   return(sum);
			}
};
int main(){
	   Revers a;
	   a.Input();
	   a.Displsy();
	   cin.get();
	   return(0);
}
