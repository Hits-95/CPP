#include<iostream>
using namespace std;

struct EmplInfo{
	       private:
		      int id;
			  char name[10];
			  
		   public:
		   	  int salary;
		   	  
		      int InputEmplInfo(){
				       cout<<" Enter Employee Informatio\n (ID,NAME,BASIC SALARY)\n-----------------------------------\n";
					   cin>>id>>name>>salary;
					   return(salary);
			  }
			  void DisplayEmplInfo(){
				       cout<<endl<<" The Employee Informatio are :-\n-----------------------------------";
					   cout<<endl<<" Employee id     :- "<<id;
					   cout<<endl<<" Employee Name   :- "<<name;
					   cout<<endl<<" Employee Salary :- "<<salary;
			  }
};
struct Calculation{
	     private:
			  float da,hra,gross,pf,net;
		 public:
		 	
		      void EmplDa(int salary){
		      	      da=1;
				      if(salary <= 5000)
						  da=salary*0.1;
					  else
						  da=salary*0.2;
					  EmplHra(salary);
			  }
			  void EmplHra(int salary){
			  	       hra=1;
				      if(salary <= 5000)
						  hra=0;
					  else
						  hra=salary*0.05;
					  EmplGross(salary);
			  }
			  void EmplGross(int salary){
			  	      gross=0;
				      gross=salary+da+hra;
				      EmplPf(salary);
			  }
			  void EmplPf(int salary){
			  	      pf=1;
				      if(gross < 10000)
						  pf=salary*0.02;
					  else
						  pf=salary*0.03;
					   EmplNet();
			  }
			  void EmplNet(){
				      net=gross-pf;
				      DisplayEmplSalar();
			  }
			  void DisplayEmplSalar(){
				     cout<<endl<<endl<<" The Employee Salary is :-\n-----------------------------------";
					 cout<<endl<<" Da =    "<<da;
					 cout<<endl<<" HRA =   "<<hra;
				     cout<<endl<<" GROSS = "<<gross;
					 cout<<endl<<" PF =    "<<pf;
					 cout<<endl<<" NET =   "<<net<<endl<<endl;
			  }
};
struct EmplResult{
	       public:
	            struct EmplInfo     ef;
		        struct Calculation  ec;
};
int main(){
	    EmplResult er;
	    int sa;
	    
	    sa = er.ef.InputEmplInfo();
		er.ef.DisplayEmplInfo();
		er.ec.EmplDa(sa);
		cin.get();
		cin.get();
		return(0);
}
