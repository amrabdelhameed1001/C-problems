// swap 2 cols in matrix
#include <iostream>
using namespace std;

int main(){
    int rows , cols;
    cin >> rows >> cols;
    
    int arr[rows][cols];
    for(int i=0 ; i<rows ; i++)
        for(int j=0 ; j<cols ; j++) 
            cin >> arr[i][j];

    int col1 , col2;
    cin >> col1 >> col2;
    
    for(int i=0 ; i<rows ; i++){
        int tmp=arr[i][col1];
        arr[i][col1]=arr[i][col2];
        arr[i][col2]=tmp;
    }
    
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}
