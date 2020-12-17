#include<iostream>
using namespace std;
class Large{
	      int a;
		public:
		  void Input(){
			      cout<<endl<<"\t Enter a Numbers :- ";
				  cin>>a;
		  }
		  void Diaplay(){
			        cout<<endl<<endl<<"\t >>>> RESULT <<<<"<<endl<<"\t --------------------";
			        cout<<endl<<"\t Large Number :- "<<a;
		  }
		  int operator >(Large x){
			  return(a>x.a);
		  } 
};
int main(){
	  Large n1,n2;
      n1.Input();
      n2.Input();
      if(n1>n2)
		  n1.Diaplay();
	  else
		  n2.Diaplay();
	  cin.get();
	  return(0);  
}
