#include "iostream"
using namespace std;

int main(int argc, char *argv[]){
	cout<<endl<<"Result of CMD : ";
	for(int i = 0; i < argc; i++)
		cout<<endl<<i<<" -> "<<argv[i];
	return 0;
}

