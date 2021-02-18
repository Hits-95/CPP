#include <iostream>
using namespace std;

class Matrix{
    private:
        int  arr[5][5];
    public:
        //get matric method
        void getMatrix(){
            for(int i = 0; i < 3; i++)
                for(int j = 0; j < 3; j++)
                    cin>>arr[i][j];
        }
         //display matric method
        void displayMatrix(){
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        //add matrix
        add(Matrix obj1, Matrix obj2){
        	for(int i = 0; i < 3; i++){
        		for(int j = 0; j < 3; j++){
        			arr[i][j] = obj1.arr[i][j] + obj1.arr[i][j];
        		}
        	}
        }
        //mul matrix
        mul(Matrix obj1, Matrix obj2){
        	for(int i = 0; i < 3; i++){
        		for(int j = 0; j < 3; j++){
        			for(int k = 0; k < 3; k++){
        				arr[i][j] += obj1.arr[i][k] + obj1.arr[k][j];
        			}
        		}
        	}
        }
};
int main(){
    Matrix obj1, obj2, result;
    cout<<"Enter 1st matrix : ";
    obj1.getMatrix();
	obj1.displayMatrix();
	cout<<"Enter 2nd matrix : ";
	obj2.getMatrix();
	obj2.displayMatrix();

	cout<<endl<<"Additionn\n";
	result.add(obj1, obj2);
	result.displayMatrix();

	cout<<endl<<"Multiplication \n";
	result.mul(obj1, obj2);
	result.displayMatrix();
    return 0;
}