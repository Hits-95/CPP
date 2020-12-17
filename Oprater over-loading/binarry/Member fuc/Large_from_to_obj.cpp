#include<iostream>
using namespace std;
class Circle{
	      int r;
		  float area;
		public:
		  void Input(){
			      cout<<endl<<"\t Enter Radius :- ";
				  cin>>r;
				  area=3.14*(r*r);
		  }
		  int operator >(Circle x){
			  return(area>x.area);
		  } 
};
int main(){
	  Circle n1,n2;
      n1.Input();
      n2.Input();
      cout<<endl<<endl<<"\t >>>> RESULT <<<<"<<endl<<"\t --------------------";
      if(n1>n2)
		  cout<<endl<<"\t Large Circle is First";
	  else
		  cout<<endl<<"\t Large Circle is Second ";
	  cin.get();
	  return(0);  
}
