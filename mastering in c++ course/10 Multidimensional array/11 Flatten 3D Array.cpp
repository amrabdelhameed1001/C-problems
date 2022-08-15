/*
● Read 3 numbers: DEPTH, ROWS, COLS the dimensions of 3D array ● Then read integer either 1 (convert 3D to 1D) or 2 (1D to 3D) ● If input was 1, then read 3 integers d, r, c then convert to position in 1D array ● If input was 2, then read 1 integer position, then convert to 3D array position
*/

#include <iostream>
using namespace std;

int main(){
    int depth , rows , cols;
    cin >> depth >> rows >> cols;

    int convert;        cin >> convert;


    if(convert ==1){
        int d , r , c;
        cin >> d >> r >> c;

        int idx = d * (rows * cols) + r * cols + c ;
        cout << idx;
    }

    else if(convert ==2){
        int pos;
        cin >> pos;

        int d = pos / (rows * cols);

        int remain_rows_cols = pos - d * rows * cols;
        int r = remain_rows_cols / cols;

        int c = remain_rows_cols % cols ;

        cout << d << " " << r << " " << c;

    }

    return 0;
}
