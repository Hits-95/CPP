#include<iostream>
using namespace std;

struct Product{
	       private:
		         int Pno,i;
				 char Pname[10];
				 int Price;
		   public:
		        void Input(){
					    cout<<endl<<"Enter Product Number,Name and Price :- ";
						cin>>Pno>>Pname>>Price;
				}
				void Display(Product a[],int key){
					    for( i=0;i<3;i++)
					        if(a[i].Pno == key){
						    	cout<<endl<<"The record are :-"<<endl;
							    cout<<endl<<"Product No:-    "<<a[i].Pno;
							    cout<<endl<<"Product Name:-  "<<a[i].Pname;
							    cout<<endl<<"Product Price:- "<<a[i].Price;
						    	break;
					    	}
					    	if(i==3)
							   cout<<endl<<"Record is Not Found";
				}
				
};
int main(){
	   Product x,a[3];
	   int key;
	   for(int i=0;i<3;i++)
		   a[i].Input();
	   cout<<endl<<"Enter a Product No. to be Search:- ";
	   cin>>key;
	   x.Display(a,key);
	   cin.get();
	   return(0);
}
