#include"iostream"
using namespace std;
#include"sham.h"

template<class T>
class Large{
	      T a,b;
	    public:
		    void input_Large_info(){
				     cout<<endl<<"\t Enter Two Numbers  :- ";
					 cin>>a>>b;
			}
			T find_Large(){
		         if(a>b)
				   return(a);
				 else
				   return(b);
			}
};
int main(){
	   if(Pass_Word()){
	      Large<int> x;
		  x.input_Large_info();
	      cout<<endl<<"\t Large  :-"<<x.find_Large();
	   }
	   else
		   cout<<endl<<"Wrong Pass_Word !!! ";
	   cin.get();
	   return(0);		
}
