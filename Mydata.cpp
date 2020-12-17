#include<iostream>
using namespace std;
class Maxdata{
	    public:
            int Max(int x,int y){
				   if(x>y)
					   return(x);
				   else 
					   return(y);
			}
			int Maximum(int *ar){
				    int temp=ar[0];
					for(int i=0;i<5;i++)
						if(ar[i]>temp)
							temp=ar[i];
				    return(temp);
			}
};
int main(){
	   int a[5]={2,5,6,3,5};
	   Maxdata obj;
	   cout<<endl<<obj.Max(50,60);
	   cout<<endl<<obj.Maximum(a);
	   cin.get();
	   return(0);
}
	   
