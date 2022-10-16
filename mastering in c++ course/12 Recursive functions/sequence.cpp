/*
If this number is even, next number in sequence is n / 2 ● If this number is odd, next number in sequence is 3 * n + 1 ● If this number is 1 = end of sequence ● E.g. Start from 5: 5 16 8 4 2 1 ● E.g. Start from 6: 6 3 10 5 16 8 4 2 1 ● E.g. Start from 9: 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
*/

#include <iostream>
using namespace std;

void sequence(int n){

    cout << n << endl;
    if(n==1)    return;

    if(n%2==0){
        sequence(n/2);
    }else{
        sequence(3*n+1);
    }

}

int main(){

    sequence(6);
    return 0;
}
