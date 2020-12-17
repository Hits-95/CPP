#include"iostream"
#include"sham.h"
using namespace std;
class Base{
	  public:
	      virtual void Show(){
			  cout<<endl<<"\t hello Base Class ";
		  } 
};
class Derived : public Base{
	    public:
	      void Show(){
			  cout<<endl<<"\t hello Derived Class ";
		  }
};
int main(){
	    if(Pass_Word()){
			Base *ptr,B;
			Derived D;
			
			ptr=&B;
			ptr->Show();
			
			ptr=&D;
			ptr->Show();
		}else
			cout<<endl<<"\t Wrong Pass_Word !!! ";		
		cin.get();
		return(0);				
}
