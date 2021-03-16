#include <iostream> 
using namespace std;

class Conversion{
	string str;
	int sum1, sum2, sum3;
	
	
	public :
		void getString(){
			cout<<endl<<"Enter String Number : ";
			cin>>this->str;
		}
		
		void displayResult(){
			cout<<endl<<"Type Sum1  : "<< ++sum1;
			cout<<endl<<"Type Sum2  : "<< ++sum2;
			cout<<endl<<"Type Sum3  : "<< ++sum3;
		}
		
		void strToint(){
			for(int i = 0; str[i] != '\0'; i++){
				if(str[i]< 48 || str[i] > 57){
					cout<<endl<<"Conversion not posible.";
					return ;
				}else{
					sum1 = sum1 * 10 + (str[i] - '0');
					sum2 = sum2 * 10 + (str[i] - 48);
					sum3 = sum3 * 10 + ((int) str[i]) - ((int) '0');
				}
			}
		}
};

//main body
int main(){
	Conversion obj = Conversion();
	obj.getString();
	obj.strToint();
	obj.displayResult();
	
	return 0;
}
