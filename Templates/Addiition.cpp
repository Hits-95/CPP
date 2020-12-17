#include"iostream"
using namespace std;
#include"sham.h"

//TEMPLATE USE
template<class T>
T add(T a,T b){
	return(a+b);
}
int main(){
	    if(Pass_Word()){
           int a,b,c;
		   cout<<endl<<"\t Enter Two int Numbers :- ";
		   cin>>a>>b;
		   c=add<int>(a,b);    //int fun calling 
		   cout<<endl<<"\t Addition is = "<<c;
		   cout<<endl<<"\n\t Enter Two Float Numbers :- ";
		   float  x,y,z;
		   cin>>x>>y;
		   z=add<float>(x,y);         //flaot fun calling 
		   cout<<endl<<"\t Addition is  = "<<z;
		   
		}
		else 
			cout<<endl<<"\t Wrong Pass_Word !!";
		cin.get();
		return(0);		
}
