#include<iostream>
using namespace std;

struct Prime{
	    private:
		    int n;
		public:
		    void Input(){
				    cout<<"\n Enter a Number -> ";
		         	cin>>n; 				
			}
            void Displsy(){
				    if(isPrime)
				       cout<<"The Niven Number is "<<x<<" Prime";
					else
					   cout<<"The Niven Number is "<<x<<" Not Prime";
			}			
			int isPrime(){
				for(int i=2;i<n && n%2!=0;i++)
					return(1);
				return(0);
			}
};
int main(){
	   Dsum a;
	   a.Input();
	   a.Displsy();N
	   cin.get();
	   return(0);
}
