#include"iostream"
using namespace std;
#include"fstream"

int main(){
        string str;
		  //using constructor and open for reading  but file already present into comp.
		 //Now read data from file 
		 ifstream fin("product"); 
		         
	   	 while( getline(fin, str) ){
	   	 	cout<<str<<endl;
			}	
		fin.close();	 		 
	   cin.get();
	   return(0);		
};
