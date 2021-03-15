#include <iostream> 
using namespace std;

int main(){
    char str = '5';
    int num1 = str-'0';
    int num2 = str - 48;
    int num3 = ((int)str) - ((int)'0');
    
    printf("Desimal value of char          	     : %d", str);
    cout<<endl<<"String data str                      : "<<str;
    cout<<endl<<"str - 0 = ++num1                     : "<<++num1;
    cout<<endl<<"str - 48 = ++num2                    : "<<++num2;
    cout<<endl<<"((int)str) - ((int)'0') = num3       : "<<++num3;
    
    return 0;
}
