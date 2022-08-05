// Read 2 integers for the rows and columns of a matrix ( <= 100). Then read rows x cols integer value. Find the position of maximum value in the array. If there are several ones, find the last occurance

#include <iostream>
using namespace std;

int main(){

    int rows , cols;
    cin >> rows >> cols;

    int arr[rows][cols];
    int maxi=0 , maxj=0;
    int max=-9999;
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            cin >> arr[i][j];
            if (arr[i][j] >= max){
                maxi=i ; maxj=j;
                max=arr[i][j];
            }
        }
    }

    cout << "Max value at position " << maxi << " " << maxj << " with value = " << max;
    return 0;
}
