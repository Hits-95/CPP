#include"iostream"
#include"sham.h"
//pointer to function declarationor 
typedef void(funPtr)(int x ,int y);   //  or typedef void(*funPtr)(int ,int); 

void Add(int x,int y){
	cout<<endl<<x<<" + "<<y<<" = "<<x+y;
}
void Subtract(int x,int y){
	cout<<endl<<x<<" - "<<y<<" = "<<x-y;
}
int main(){
	pass_word();
	funPtr *ptr;                       // or ptr
	// pass Add_fun addr to ptr
	ptr=&Add;
	//call Add function
	ptr(12,5);
	//pass subtract_fun addr to ptr
	ptr=&Subtract;
	ptr(10,3);
	cin.get();
	return(0);
}
