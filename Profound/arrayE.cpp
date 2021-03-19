#include "iostream"
using namespace std;

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int i;
	int len = sizeof(arr)  / sizeof(arr[0]);
	
	try{
	
		do{
			cout<<endl<<"enter index : ";
			cin>>i;
			
			if(i > len){
				throw "array index bound.";
			}
			
			cout<<endl<<"Data : "<<arr[i];
			
		}while(1);
	}catch( const char *err){
		cout<<endl<<"Error : "<<err;
	}
	return 0;
}
