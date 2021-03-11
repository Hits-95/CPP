#include "iostream"
using namespace std;

//declaration 
class ClassB;

//mutual relationship 
class ClassA{
	private:
		int num1 = 23;
	public:
		friend class ClassB;
		void multiply(ClassA, ClassB);
};

class ClassB{
	private:
		int num2 = 78;
	public:
		friend class ClassA;
		void compare(ClassA, ClassB);
};

void ClassA :: multiply(ClassA objA, ClassB objB){
	cout<<endl<<"ClassA multiplication : "<<(objA.num1 * objB.num2);
}

void ClassB :: compare(ClassA objA, ClassB objB){
	if(objA.num1 > objB.num2)
		cout<<endl<<"ClassA is grestest : "<<objA.num1;
	else
		cout<<endl<<"ClassB is grestest : "<<objB.num2;
}

int main(){
	ClassA objA = ClassA();
	ClassB objB = ClassB();
	objA.multiply(objA, objB);
	objB.compare(objA, objB);
	return 0;
}
