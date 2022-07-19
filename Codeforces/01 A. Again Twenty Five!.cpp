/*
https://codeforces.com/problemset/problem/630/A
*/
#include <iostream>
using namespace std;

int main(){
    int n;          cin >> n;
    if(n==0)        cout << 1;
    else if(n==1)   cout << 5;
    else if(n>1)    cout << 25;
    else{
        double pow=1;
        for(int i=n ; i<0 ; ++i)
            pow/=5;
        cout << pow;
    }
        

    return 0;
}
