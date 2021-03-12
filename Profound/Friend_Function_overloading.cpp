#include "iostream"
using namespace std;

class ClassTwo;

class ClassOne{
	 int num = 12;
	
	public:
	
	friend void add(ClassOne, ClassTwo);
	friend void add(ClassOne);
	friend void add();		
};

class ClassTwo{
	int num = 15;
	
	public:
	
	friend void add(ClassOne, ClassTwo);
	friend void add(ClassOne);
	friend void add();			
};

/*
*** friend function overloading 
*/

//passing parameters
void add(ClassOne objA, ClassTwo objB){
	cout<<endl<<"add(ClassOne objA, ClassTwo objB) : " <<(objA.num + objB.num);
}

//composition + passing parameters
void add(ClassOne objA){
	ClassTwo objB = ClassTwo();	
	cout<<endl<<"add(ClassOne)                     : "<<(objA.num + objB.num);
}

//composition
void add(){
	ClassOne objA = ClassOne();
	ClassTwo objB = ClassTwo();
	cout<<endl<<"add()                             : "  <<(objA.num + objB.num);
}

int main(){
	ClassOne objA = ClassOne();
	ClassTwo objB = ClassTwo();
	
	add(objA, objB);
	add(objA);
	add();
	
	return 0;
}
