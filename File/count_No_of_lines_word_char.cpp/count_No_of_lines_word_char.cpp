#include"iostream"
#include"sham.h"
#include"fstream"
#include"stdlib.h"      //for exite function
int main(){
	 if(Pass_Word()){
       int c_count,l_count,w_count;
	   char str[100];
	   ofstream fout("sample_for_writting_mode.txt");      //open for writting mode
	   if(!fout){
			cout<<endl<<"\t Error in file creation......";
			exit(1);
		}
		cout<<endl<<"\t File sucessfully created."<<endl;
		cout<<endl<<"\t Write into file :- "<<endl<<'\t';
		cin.getline(str,100,'\n');
		cin.getline(str,100,'\n');
		fout<<str;
		for(int i=0;i<15;i++)
		    cout<<str[i];
	 }else
		 cout<<endl<<"\t Wrong !!! Pass_Word ....";
     cin.get();
     return(0);	 
}
