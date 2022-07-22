// https://www.hackerrank.com/challenges/number-groups/problem
#include <iostream>
using namespace std;

int main() {
    long long k;      cin >> k;

    if(k <=0 )  {cout << -1; return 0;}

    long long start= k*(k-1)+1;     // by observe
    long long end  = k*(k+1)-1;

    long long sum=0;
    for(int i=start ; i <= end ; i+=2)
        sum+=i;

    cout << sum;

    return 0;
}
