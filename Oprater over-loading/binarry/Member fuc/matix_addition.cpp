#include<iostream>
using namespace std;
class Add{
	      int a[3][3];
		  int i,j;
	   public:
	      Add(){
			  cout<<endl<<"\t Enter a Matrix 3*3 :- ";
		      for(i=0;i<3;i++)
				  for(j=0;j<3;j++)
				     cin>>a[i][j];
			  cout<<endl<<"\t The matrix is entered .\n"; 
		  }
		  void Display(){
			       cout<<endl<<"\t The Matrix is :- ";
				   cout<<endl<<"\t -----------------\n";
				   for(i=0;i<3;i++){
					   for(j=0;j<3;j++)
						   cout<<" "<<a[i][j];
				       cout<<endl;
				   }
		  }
		 Add operator +(Add x){
			        for(i=0;i<3;i++)
					   for(j=0;j<3;j++)
                          x.a[i][j]=a[i][j]+x.a[i][j];
                     return(x);					  
		  }
};
int main(){
	 Add x,y;
	 x.Display();
	 y.Display();
	 x=x+y;
	 x.Display();
	 cin.get();
	 return(0);
	   
}
