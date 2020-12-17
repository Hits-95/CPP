#include"iostream"
using namespace std;
#include"sham.h"

class Vector{
	       int *v;
		   int size;
		public:
		    Vector(int m){                   //create a null vector
				v=new int[size=m];
                for(int i=0;i<size;i++)        //initilize all element by 0	
                    v[i]=0;
			}
			Vector operator=(int *a){                   //create a vector from an arry
				for(int i=0;i<size;i++)
					v[i]=a[i];
			}
			int operator*(Vector &y){         //scall product
				int sum=0;
				for(int i=0;i<size;i++)
					sum+=this->v[i]*y.v[i];
				return(sum);
			}
};
int main(){
	    if(Pass_Word()){
			int x[3]={1,2,3};
			int y[3]={3,2,1};
			Vector v1(3),v2(3);             //create null vector of 3 int 
			v1=x;                           //create v1 from arra x
			v2=y;
			int r=v1*v2;
			cout<<endl<<"\t Sum = "<<r;
		}else
			cout<<endl<<"\t Wrong !!! Pass_Word ";
		cin.get();
		return(0);
}
