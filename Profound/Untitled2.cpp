#include <iostream> 
using namespace std;

class Conversion{
	string str;
	int sum;
	
	
	public :
		void getString(){
			cout<<endl<<"Enter String Number : ";
			cin>>this->str;
		}
		
		void displayResult(){
			cout<<endl<<"Equvalant integer value : "<<sum;
		}
		
		void strToint(){
			for(int i = 0; str[i] != '\0'; i++){
				if(str[i] >= 48 || str[i] <= 57){
					
				}else
					cout<<endl<<"Conversion not posible.";
			}
		}
};

//main body
int main(){
	
	return 0;
}
