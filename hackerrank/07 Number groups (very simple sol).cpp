// https://www.hackerrank.com/challenges/number-groups/problem
#include <iostream>
using namespace std;

int main() {
    long long k;      cin >> k;

    if(k <=0 )  {cout << -1; return 0;}

    // by observe: sum of every group=k^3;

    long long sum=k*k*k;
    cout << sum;

    return 0;
}
