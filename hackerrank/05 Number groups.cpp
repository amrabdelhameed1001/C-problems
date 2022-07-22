// https://www.hackerrank.com/challenges/number-groups/problem
#include <iostream>
using namespace std;

int main() {
    long long k;      cin >> k;

    if(k <=0 )  {cout << -1; return 0;}

    long long start=1 , end=1;
    for(int i=2 ; i <= k ;i++){

        start= end+2;
        end=start+(i-1)*2;
    }

    long long sum=0;
    for(int i=start ; i <= end ; i+=2 )
        sum+=i;

    cout << sum;

    return 0;
}
