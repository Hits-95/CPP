#include<iostream>
using namespace std;

class MyDate{
           int d,m,y;
           unsigned int date[15]={0};
	    public:
		   void Getdate();
		   void Printdate();
		   void Compress();
		   void Finddiff(MyDate);
};
void MyDate :: Getdate(){
	     cout<<endl<<"\t Enter Day,Month,year";
		 cin>>d>>m>>y;
}
void MyDate :: Printdate(){
	     cout<<endl<<"\t "<<d<<" - "<<m<<" - "<<y;
}
void MyDate :: Compress(){
	     int temp=d,index=4;
		 while(temp>0){
			 date[index--]=temp%10;
			 temp=temp/10;
		 }
		 temp=m;
		 index=8;
		 while(temp>0){
			 date[index--]=temp%10;
			 temp=temp/10;
		 }
		 temp=y;
		 index=15;
         while(temp>0){
			 date[index--]=temp%10;
			 temp=temp/10;
		 }
		 cout<<endl<<"\t Date is Compreced = ";
		 for(int i=0;i<16;i++)
		    cout<<date[i];
}
void MyDate :: Finddiff(MyDate temp){
	     int arr[16]={0};
		 for(int i=0;i<16;i++)
			 arr[i]=date[i]-temp.date[i];
		 cout<<endl<<"\t Date difference is = "<<endl;
		 for(int j=0;j<16;j++)
			 cout<<arr[j];
}
int main(){
	   MyDate x;
	   //1st obj
	   x.Getdate();
	   x.Printdate();
	   //2nd obj
	   MyDate y;
	   y.Getdate();
	   y.Printdate();
	   //compress fun call for both obj.
	   x.Compress();
	   y.Compress();
	   //Find Differance Fun call
	   x.Finddiff(y);
	   cin.get();
	   return(0);
}
