/*
● Input: Read integer T for a number of test cases. ● For each test case read integer N followed by reading N integers. ● Output: For each test case, print the minimum of the N integers. ● Input ○ 2 6 10 50 20 70 30 4
3 10 5 30
○ Notice here we have 2 test cases ■ 6 10 50 20 70 30 4 ■ 3 10 5 30
● Output ○ 4 ○ 5
[6 numbers to read] ⇒ min is 4
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int c = 0;                  // number of outputs
    int cv= 0;                  // values of outputs
    while (c < n){
        if (cv % 4 != 0){
            cout << cv << " ";
            cv+=3;
            c++;
        }
        else {
            cv+=3;
            continue;
        }

    }

    return 0;
}
