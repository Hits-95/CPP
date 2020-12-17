#include"iostream"
using namespace std;
#include"sham.h"

template<class T>
class Vector{
	        T *v;
		   int size;
		public:
		    Vector(int m){                   //create a null vector
				v=new T[size=m];
                for(int i=0;i<size;i++)        //initilize all element by 0	
                    v[i]=0;
			}
			Vector operator=(T a[]){                   //create a vector from an arry
				for(int i=0;i<size;i++)
					v[i]=a[i];
			}
			T operator*(Vector &y){         //scall product
				T sum=0;
				for(int i=0;i<size;i++)
					sum+=this->v[i]*y.v[i];
				return(sum);
			}
};
int main(){
	    if(Pass_Word()){
			int x[3]={1,2,3};
			int y[3]={3.5,2.1,2.0};
			Vector <int>v1(3);
			Vector <int>v2(3);             //create null vector of 3 int 
			v1=x;                           //create v1 from arra x
			v2=y;
			int r=v1*v2;
			cout<<endl<<"\t Sum = "<<r;
		}else
			cout<<endl<<"\t Wrong !!! Pass_Word ";
		cin.get();
		return(0);
}
