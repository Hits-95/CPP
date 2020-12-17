#include"iostream"
#include"fstream"
using namespace std;
int main(){
	   char  y[3];
	   ofstream fout;
	   fout.open("hitesh");
	   cout<<"Enter a no :-";
	   for(int i=0;i<3;i++)
	   cin>>y[i];	   
	   fout.write((char*) &y,sizeof(y));
	   fout.close();
	   cin.get();
	   return(0);
}
