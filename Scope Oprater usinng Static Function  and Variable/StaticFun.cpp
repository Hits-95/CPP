#include<iostream>
using namespace std;

class Book{
	     private:
	           int bno;
		       char btitle[10];
         public:
		      void Input(){
		      	      cout<<endl;
				      cin>>btitle;
					  bno=1;
			  }
			  void Display(){
				      cout<<endl<<bno<<"\t"<<btitle;
			  }
};
int main(){
	   Book b1,b2,b3;
	   cout<<"Enter a Book Information :- ";
	   b1.Input();
	   b2.Input();
	   b3.Input();
	   b1.Display();
	   b2.Display();
	   b3.Display();
	   cin.get();
	   return(0);
}
