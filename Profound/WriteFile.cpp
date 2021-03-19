#include"iostream"
#include"fstream"
using namespace std;

int main(){
	int pno;
	char pname[20];
	float price;
	 
	cout<<endl<<"\t Enter  Pno  :- ";
	cin>>pno;
	cout<<endl<<"\t Enter Name  :- ";
	cin>>pname;
	cout<<endl<<"\t Enter price :- ";
	cin>>price;
		 
	//Now write these into file 
	ofstream fout("product");         //using constructor and open for writting 
	fout<<"Pno    :- "<<pno;
	fout<<endl<<"Pname  :- "<<pname;
	fout<<endl<<"Price  :- "<<price;
	fout.close();	
		 
	//now read from file and display on screen
	ifstream fin("product");                //using constructor and open for reading 
	fin>>pno;
	fin>>pname;
	fin>>price;
	cout<<endl<<" "<<pno<<"  "<<pname<<"  "<<price;
	fin.close();		 	 
	cin.get();
	return(0);		
}
