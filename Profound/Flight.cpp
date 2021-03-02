#include "iostream"
using namespace std;

class Flight{
	private:
		int fno;
		string dest;
		float distance;
		float fuel;

		//calculate the fuel as per distance...
		float CALFUEL(){
			if(distance <= 1000)
				return(500);
			else if(distance >1000 && distance <= 2000)
				return(1100);
			return(2200);
		}
	public:
		void FEEDINFO(){
			cout<<endl<<"\t Enter Flight No   :\t";
			cin>>fno;
			cout<<endl<<"\t Enter Destination :\t";
			cin>>dest;
			cout<<endl<<"\t Enter Distance    :\t";
			cin>>distance;

			fuel = CALFUEL();
		}

		void SHOWINFO(){
			cout<<endl<<"\t *** Flight Info ***";
			cout<<endl<<"\t Flight No   :\t"<<fno;
			cout<<endl<<"\t Destination :\t"<<dest;
			cout<<endl<<"\t Distance    :\t"<<distance;
			cout<<endl<<"\t Fuel        :\t"<<fuel;
		}

};
//main body
int main(){
	Flight obj = Flight();
	obj.FEEDINFO();
	obj.SHOWINFO();
	return 0;
}