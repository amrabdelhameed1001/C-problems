/*
● Read integer N (<500), then print all prime numbers <= N ○ Output should be comma separated, as below ■ Don’t print comma after the last number
*/
Problem (5)
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << 2;

    for( int i=3 ; i <= n ; ++i){       // counter for numbers <= n
        bool prime =true;
        for(int j=2 ; j < i ; ++j){     // counter for each number <=n
            if (i % j == 0)     prime = false;
        }
        if(prime){
            cout << "," << i ;
        }

    }

    return 0;
}
