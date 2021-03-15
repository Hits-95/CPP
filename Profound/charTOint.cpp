#include <iostream> 
using namespace std;

int main(){
    char str = '5';
    int num1 = str-'0';
    int num2 = str - 48;
    
    printf("Desimal value of char : %d", '0');
    cout<<endl<<"String data str       : "<<str;
    cout<<endl<<"str - 0 = num1        : "<<++num1;
    cout<<endl<<"str - 48 = num2       : "<<++num2;
    
    return 0;
}
