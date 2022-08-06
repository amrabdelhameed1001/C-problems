// Read integers N, M, then Read matrix NxM. Then read Q for Q queries. ● Each query is 2 integers: first and 2nd row indices (1-based) ● Compare the 2 rows and print YES if first row < 2nd for all the row values


#include <iostream>
using namespace std;

int main(){
    int rows , cols;    cin >> rows >> cols;

    int arr[rows][cols];
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++)     cin >> arr[i][j];
    }

    int q;      cin >> q;
    for(int i=0 ; i<q ; i++){
        int row1, row2;     cin >> row1 >> row2;

        int sum1=0 , sum2=0;
        for(int j=0 ; j<cols ; j++){
            sum1 += arr[row1-1][j];
            sum2 += arr[row2-1][j];
        }

        if(sum1 < sum2) cout << "YES";
        else            cout << "NO";

    }

    return 0;
}
