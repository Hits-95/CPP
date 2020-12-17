#include"iostream"
#include"sham.h"
#include"fstream"
using namespace std;

 //1) ios::binary for write and read fun alwase open afile in binary mode
 //2) ios::app is for write new dada upto previos dada ie.(pre data is stored )more times to run pre dada is save

 class product{
	        
	        char pname[10];
	        long price;
		public:
			int pno;
		    void Read(){
				    cout<<endl<<"\t Enter a pno    :- ";
					cin>>pno;
					cout<<endl<<"\t Enter pname    :- ";
                    cin>>pname;
                    cout<<endl<<"\t Enter price    :- ";
                    cin>>price;				
			}
			void Display(){
				    cout<<endl<<"\t pno     :- "<<pno;
					cout<<endl<<"\t pname   :- "<<pname;
					cout<<endl<<"\t price   :- "<<price;
					cout<<endl<<"\t ---------------";
			}
 }; 
 
int main(){
	   pass_word();
       char ch;
	   int c=0,check=0;	  
	   fstream fout,fin;
	   fout.open("product",ios::out|ios::binary);   //open for write and reading mode
	   product obj;
	   do{
	   	  ++c;
		  obj.Read();
		  fout.write((char *) &obj,sizeof(obj));
		  obj.Display();
		  cout<<endl<<endl<<" - \t Any more records ? :- ";
		  cin.get(ch);
		  cin.get(ch);
	   }while(ch=='y'||ch=='Y');
	   fout.close();
	   //read data from file
	   fin.open("product",ios::in|ios::binary) ;
	   
	   while(fin.read((char*)&obj,sizeof(obj))){    //vvvvvvvv IMP condition and Also "!=NULL
	   	   if(obj.pno==1)
		   obj.Display();                    
	   }
	   fin.close();
	   cin.get();
	   return(0);       
}
