// read 2d array and print sum of the left/right diagonal , last row/column 
#include <iostream>
using namespace std;

int main(){
    int rows , cols;
    cin >> rows >> cols;
    
    int arr[rows][cols];
    for(int i=0 ; i<rows ; i++)
        for(int j=0 ; j<cols ; j++) 
            cin >> arr[i][j];

    // diagonals sum
    int max=rows , min=cols;
    if(max < cols)  max=cols , min=rows;
    
    int left_diag=0; 
    int right_diag=0;
    for(int i=0 ; i<min ; i++){
        left_diag += arr[i][i];
        right_diag += arr[i][cols-i-1];
    }    
    
    // last rows and cols sum
    int last_row=0 , last_col=0;
    for(int i=0 ; i<cols ; i++){
        last_row += arr[rows-1][i];
    }
    for(int i=0 ; i<rows ; i++){
        last_col += arr[i][cols-1];
    }
    
    
    cout << left_diag << " " << right_diag << endl
        << last_row << " " << last_col;
    

    return 0;
}
