/*
● Read an integer N (1 <= 30): Print the first N numbers that are ○ multiple of 3 but not multiple of 4
● Input: 11 ● Output: 3 6 9 15 18 21 27 30 33 39 42
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int c = 0;                  // number of outputs
    int cv= 0;                  // values of outputs
    while (c < n){
        if (cv % 4 != 0){
            cout << cv << " ";
            cv+=3;
            c++;
        }
        else {
            cv+=3;
            continue;
        }

    }

    return 0;
}


