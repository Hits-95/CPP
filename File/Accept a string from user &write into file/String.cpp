#include"iostream"
#include"fstream"
#include"bhagavan.h"

int main(){
	     pass_word();
			char str;
			std::cout<<std::endl<<"\t Enter a string ";
			std::cin.std::getline(str,20,'\n');                          //IMP
			std::cout<<std::endl<<"\t String = "<<str;
		    ofstream f1("text_output");    //open file for write mode using Constructer
			for(int i=0;i<20;i++)
				f1.put(str[i]);
			std::cout<<std::endl<<"\t String is Stored into file ";
            f1.close();			
		 return(0);
         std::cin.get();
}

