#include<iostream>
using namespace std;

class Operator{
	      int x;
	      char str[10];
	    public:
	    	friend istream & operator >> (istream &Hin,Operator &m);
	    	friend ostream & operator << (ostream &Hout,Operator &m);
};

istream & operator >> (istream &Hin,Operator &m){
	          Hin>>m.x>>m.str;
			  return(Hin);
}
ostream & operator << (ostream &Hout,Operator &m){
	          Hout<<m.x<<endl<<" "<<m.str;
			  return(Hout);
}
int main(){
	    Operator m;

	   cout<<"Enter Number";
	   cin>>m;
	   cout<<endl<<" m = "<<m;
	   cin.get();
	   return(0);
}
