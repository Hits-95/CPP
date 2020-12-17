#include<iostream>
using namespace std;

class Time{
	     private:
		      int hrs,min,sec;

	     public:
		      void Read(){
				     cout<<endl<<"\nEnter Hourse  = ";
					 cin>>hrs;
					 cout<<endl<<"Enter Minutes = ";
					 cin>>min;
					 cout<<endl<<"Enter Seconds = ";
					 cin>>sec;
					 cout<<"----------------------";
			  }
			  void Display(){
			  	     static int  t;
			  	     if(t<2)
			  	       cout<<endl<<"\nTime "<<++t<<" is -->"<<endl;  
				     cout<<endl<<"Hourse  = "<<hrs;
					 cout<<endl<<"Minutes = "<<min;
					 cout<<endl<<"Seconds = "<<sec;
					 cout<<endl<<"----------------------";
			  }
			  Time Add(Time t2);
			  Time Diff(Time t2);
};
Time Time :: Add(Time t2){
	           static Time temp;
	           
			    temp.hrs=hrs+t2.hrs; 
			    temp.min=min+t2.min;
			    temp.sec=sec+t2.sec;	    
			    
			   if(temp.hrs > 12){
				   temp.hrs = temp.hrs - 12;
			   }
			   if(temp.min >= 60){
				   temp.hrs++;
				   temp.min=temp.min - 60;
			   }
			   if(temp.sec >= 60){
				   temp.min++;
				   temp.sec=temp.sec-60;
			   }
			   return(temp);
}
Time Time :: Diff(Time t2){
	            Time temp;
				
				if(hrs < t2.hrs)
				   temp.hrs=t2.hrs-hrs;
				else
				   temp.hrs=hrs-t2.hrs;
				if(min < t2.min)
				   temp.min=t2.min-min;
				else	 
				   temp.min=min-t2.min;
				if(sec < t2.sec)
				   temp.sec=t2.sec-sec;
				else	  
				   temp.sec=sec-t2.sec;
				return(temp);
}
int main(){
	   Time t1,t2,t3,t4;
	   t1.Read();
	   t1.Display();
	   t2.Read();
	   t2.Display();
	   cout<<endl<<"      RESULT      ";
	   cout<<endl<<"******************";
	   cout<<endl<<"\nTime Addition  is -->"<<endl;  
	   t3=t1.Add(t2);
	   t3.Display();
	   cout<<endl<<"\nTime Diffarance is -->"<<endl;  
	   t4=t1.Diff(t2);
	   t4.Display();
	   cin.get();
	   cin.get();
	   cin.get();
	   return(0);
}
