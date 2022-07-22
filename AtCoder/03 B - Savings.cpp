// https://atcoder.jp/contests/abc206/tasks/abc206_b
#include <iostream>
using namespace std;

int main() {
    // series  = 1 + 2 + 3 + 4 + 5
    // day_yens= day*(day+1)/2       function to calculate the yens for every day

    long long yens;     cin >> yens;
    long long day=1;

    long long total_yens=1;
    while(total_yens< yens){
        day++;
        total_yens += day;

    }
    cout << day;

    return 0;
}
