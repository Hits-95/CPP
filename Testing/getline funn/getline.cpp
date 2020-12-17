#include"iostream"
using namespace std;
int main(){
	    char str[20];
		
		cout<<endl<<"\t Enter a name = ";
		cin>>str;
		cout<<endl<<"\t Name = "<<str;;
		cin.getline(str,20,'\n');                                 //getline alwase write 2 time 
        cout<<endl<<endl<<"\t Enter friend name  = ";            //1st fun can't work but 2nd work ie.read perticular srting
     	cin.getline(str,10);
		cout<<endl<<"\t Name = "<<str;
		cin.get();
		return(0);
}
