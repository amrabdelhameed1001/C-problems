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
    int t;      // number of test cases
    cin >> t;

    int n;      // number of each test case group
    int i;      // number of inputs
    int min;    // minimum value

    while (t>0){
        cin >> n;
        while(n>0){
            min=i;
            cin >> i;
            if(i<min)   min=i;
            n--;
        }
        cout << min << " " << endl ;
        t--;
    }

    return 0;
}

