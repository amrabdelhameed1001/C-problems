// https://codeforces.com/problemset/problem/510/A
#include <iostream>
using namespace std;

int main(){
    int a , b;      cin >> a >> b;

    for(int i=0 ; i<a ; ++i){
        if(i%2==0){
            for(int j=0 ; j<b ; ++j)    cout << "#";
        }
        else if(i%4==1){
            for(int j=1 ; j<b ; ++j)    cout << ".";
            cout << "#";
        }
        else if(i%4==3){
            cout << "#";
            for(int j=1 ; j<b ; ++j)    cout << ".";
        }
        cout << endl;

    }
    return 0;
}
