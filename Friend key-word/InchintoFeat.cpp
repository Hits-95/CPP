                      /* Inch into Feat */		
#include<iostream>
using namespace std;

class InchInfo{
           private:
                float inch;
           public:				
                void Read(){
					    cout<<" Enter a Inch :- ";
						cin>>inch;
				}
	 			friend void Convert(InchInfo obj);
};
void Convert(InchInfo obj){
	     float feat;
		 feat=obj.inch/12;
		 cout<<endl<<obj.inch<<" Inch is "<<feat<<" Feat";
}
int main(){
	   InchInfo obj;
       obj.Read();
       Convert(obj);
       cin.get();
       return(0);	   
}
