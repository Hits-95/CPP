#include<iostream>
using namespace std;

class t{
      int a;
      char *nm;
    public:
      void getdata();
      void putdata();
};
void t::getdata(){
	  cout<<"\n Enter data\n";
	  cin>>a>>nm;
}
void t::putdata(){
	  cout<<"Your Information are"<<endl;
	  cout<<"Nmber="<<a<<"\t"<<"Name"<<nm;
}
int main(){
       t a;
       a.getdata();
       a.putdata();
       cin.get();
       return(0);
}
