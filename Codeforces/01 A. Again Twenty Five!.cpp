/*
https://codeforces.com/problemset/problem/630/A
*/
#include <iostream>
using namespace std;

int main(){
    int n;      cin >> n;
    int pow=1;

    for(int i=1 ; i<=n ; ++i){
        pow*=5;
    }

    cout << pow%100;

    return 0;
}
