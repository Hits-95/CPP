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
				    if(isPrime())
				       cout<<"The Niven Number is "<<n<<" Prime";
					else
					   cout<<"The Niven Number is "<<n<<" Not Prime";
			}			
			int isPrime(){
				for(int i=2;i<n && n%2!=0;i++)
					return(1);
				return(0);
			}
};
int main(){
	   Prime a;
	   a.Input();
	   a.Displsy();
	   cin.get();
	   return(0);
}
