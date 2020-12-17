                      /* Inch into Feat */		
#include<iostream>
using namespace std;

class FeatInfo{
           private:
                float feat;
           public:				
                void Read(){
					    cout<<" Enter a Feat :- ";
						cin>>feat;
				}
	 			friend void Convert(FeatInfo obj);
};
void Convert(FeatInfo obj){
	     float inch;
		 inch=obj.feat * 12;
		 cout<<endl<<obj.feat<<" Feat is "<<inch<<" Inch";
}
int main(){
	   FeatInfo obj;
       obj.Read();
       Convert(obj);
       cin.get();
       return(0);	   
}
