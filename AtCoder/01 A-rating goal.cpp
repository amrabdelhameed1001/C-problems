// https://atcoder.jp/contests/abc076/tasks/abc076_a
#include <iostream>
using namespace std;

int main(){
    int a;      cin >> a;
    int av;     cin >> av;

    // av = (a+b)/2     b= av*2 - a

    int b = av*2 - a;
    cout << b;

    return 0;
}
