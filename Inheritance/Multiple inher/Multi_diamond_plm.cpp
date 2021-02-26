#include<iostream>
using namespace std;

class Calculate{
	public:
		void display(int x, int y){
			cout<<"Addition is : "<<(x + y);
		}
};

class Compare{
	public:
		void display(int x, int y){
			cout<<"Comparission is : "<<(x > y);
		}
};

class User : public Calculate, public Compare{
	public:
};


int main(){
    User obj = Calculate();
   // obj.display(2,5);

	return 0;
}