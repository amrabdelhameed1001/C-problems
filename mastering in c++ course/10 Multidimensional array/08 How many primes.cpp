/*
Read 2 integers N and M, then Read matrix NxM. ● Then read integer Q, for Q queries. ● For each query read 4 integers: i j r c ○ Represents a grid (submatrix): top left (i, j) and (r, c) for (# rows, # cols)
● For each query, print how many prime numbers in the requested grid. ○ Each query should be answered using nested loops maximum not more ○ In future: with smart precomputation it can be done without loops ■ It is called Image integral in Computer Vision field.Problem #1: How many primes
● Input ⇒ Output ○ 3 4 ○ 8 2 9 5 ○ 3 2 27 6 ○ 7 8 29 22 ○ 2 ○ 1 0 2 2 ⇒ 3 (primes 3, 2, 7 in rectangle (0, 1) (2, 1) ) ○ 0 1 2 3 ⇒ 3 (primes 2, 5, 2 in rectangle (0, 1) (1, 3) )
*/

#include <iostream>
using namespace std;

int main(){
    int rows , cols;        cin >> rows >> cols;

    int arr[rows][cols];
    for(int i=0 ; i<rows ; i++) for(int j=0 ; j<cols ; j++) cin >> arr[i][j];

    int q;                  cin >> q;

    while(q){

        int row , col , x_grid , y_grid;
        cin >> row >> col >> x_grid >> y_grid;

        int primes=0;
        for(int i=row ; i< (x_grid + row) ; i++){
            for (int j=col ; j< (y_grid + col) ; j++){
                bool prime=true;

                for(int k=2 ; k < arr[i][j] ; k++){
                    if( arr[i][j] %k == 0)  prime=false;
                }

                primes += prime;

            }
        }

        cout << primes;
        q--;
    }

    return 0;
}
