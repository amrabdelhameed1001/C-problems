/*
● Read an integer N (< 500) and print YES if it is prime, otherwise NO
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool prime=true;

    for (int i=2 ; i < n ; ++i ){
        if(n%i == 0){
            prime=false;
            break;
        }
    }
    if(prime)   cout << "YES";
    else        cout << "NO";

    return 0;
}
