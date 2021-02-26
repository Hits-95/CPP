#include<iostream>
using namespace std;

class Test{
    public:
        int x = 5, y = 6;
        void display();
};

void Test::display(){
    cout<<"X = "<<x<<" Y = "<<y;
}

int main(){
    Test obj = Test();
    obj.display();
    return(0);
}