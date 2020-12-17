#include<iostream>
using namespace std;
class Number {
	        int num;
		public:
		    Number(){          // 1) Defoult constructer
				num=0;
			}
			Number(int n){     // 2) Parametarice consteracter
				num=n;
			}
			void Display(){
				 cout<<endl<<" Number = "<<num;
			}
};
 main(){
	   Number x;
	   x.Display(); //Call Defoult Constructer
	   Number y(10);//Call Parametrice constructer
	   y.Display();
	   cin.get();
	   return(0);
}
