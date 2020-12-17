#include<iostream>
#include"sham.h"
int main(){
	    if(Pass_Word()){
	    	char str[10];
	    	cout<<endl<<"\t Enter a 1st string = ";
	    	//cin.getline(str,10,'\n');
			cin.getline(str,10,'\n');
	    	cout<<endl<<"\t 1st string = "<<str;
	    	cout<<endl<<"\n\t Enter a 2st string = ";
	    	cin.getline(str,10,'\n');
	    	cout<<endl<<"\t 2st string = "<<str;
		}else
		    cout<<endl<<"\t Wrong !!! Pass word.....";
		cin.get();
		return(0);
}
