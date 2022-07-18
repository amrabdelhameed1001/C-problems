/*
● Read integer T for number of test cases. ● For each test case read integer N. Then read N integers a, b, c ● Output: Compute the sum of the following expression: ○ a, b*b, c*c*c, d*d*d*d, e*e*e*e*e…… ■ That is the k-th number is repeated k times
● Input: ○ 2 ○ 3 5 7 2 ○ 4 1 2 3 4
● Output ○ 62
○ 288 [as (5 + 7*7 + 2*2*2) = 62] [as (1+2*2+3*3*3+4*4*4*4) = 288]
*/
#include <iostream>
using namespace std;

int main()
{
    int t;      // number of test cases
    cin >> t;

    int n;      // number of integers for each test case
    int a;      // inputs for each test cases

    while(t){
        cin >> n;

        int out=0;    // output for each test case
        int i=1;      // counter for each test case
        while(i <= n){

            cin >> a;
            int j=1;    // counter for repeating times
            int pow=1;    // a after power
            while(j <= i){
                pow*=a;
                j++;
            }
            out +=pow;
            i++;
        }
        cout << out << endl;
        t--;
    }

    return 0;
}
