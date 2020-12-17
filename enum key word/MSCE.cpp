#include<iostream>
using namespace std;
#include<string.h>

enum Type{
	Home,Comme,Agri
};
struct CustInfo{
	       private:
		        char name[10];
		        char tempc[10];
           public:
           	   float curead,preread;
           	   Type ctype;
		        void Input(){
		        	    cout<<"\t\t*********    MSCB    *********\n";
					    cout<<"\n\t\t Enter Customer details :-\n";
						cout<<endl<<"\t\t( Name, Ctype, Current reading & Previous reading)";
						cout<<endl<<"\t\t 1)Home  2)Comme  3)Agri ";
                        cout<<"\n\t\t----------------------------------------------------\n\t\t\t";
                        cin>>name>>tempc>>curead>>preread;	
						Conversion();				    //conversion Function call
				}
				void Diaplay(){
					   
					    cout<<endl<<endl<<"\t\t Customer Information is :- ";
						cout<<endl<<"\t\t -----------------------------------";
						cout<<endl<<"\t\t Customer Name    = "<<name;
						cout<<endl<<"\t\t Customer Type    = "<<tempc;
						cout<<endl<<"\t\t current reading  = "<<curead;
						cout<<endl<<"\t\t previous reading = "<<preread;
				}
				void Conversion(){
					    if(strcmp(tempc,"Home")==0)
					       ctype=Home;
					    else if(strcmp(tempc,"Comme")==0)
					           ctype=Comme;
					         else
					           ctype=Agri;
				}
};
struct Bill{
	     private:
		      int unite;
			  float amount;
		 public:
		      void Process(CustInfo obj){
				       unite=obj.curead-obj.preread;
				       if(unite<0)
				          unite=unite*(-1);
				          
					   if(obj.ctype == Home){                 //Home Rate
						   if(unite>=1 && unite<=100){
							   amount=unite*3;
						   }
						   else if(unite>=101 && unite<=500){
							       amount=unite*5;
								}
								else{
									amount=unite*7;
								}
					   }                                      
					   else if(obj.ctype == Comme){             // Commer rate
						      if(unite>=1 && unite<=100){
							     amount=unite*7;
						      }
						      else if(unite>=101 && unite<=500){
							          amount=unite*9;
								    }
								    else{
									    amount=unite*10;
								    }
					        }
							else{
								if(unite>=1 && unite<=100){         //agree rate  
							       amount=unite*5;
						        }
						        else if(unite>=101 && unite<=500){
							            amount=unite*6;
								     }
								     else{
									     amount=unite*7;
								     }
							}
			  }
			  void DiaplayBill(){
				       cout<<endl<<endl<<"\t\t Bill :- ";
					   cout<<endl<<"\t\t ----------------------------------";
					   cout<<endl<<"\t\t Total unite used by Customer are  = "<<unite;
					   cout<<endl<<"\t\t Total Amount                      = "<<amount;
					   cout<<endl<<endl;
			  }
};
int main(){
      CustInfo a;
	  Bill b;

      a.Input();
	  a.Diaplay();
	  b.Process(a);
	  b.DiaplayBill();
	  cin.get();
	  return(0);
}
