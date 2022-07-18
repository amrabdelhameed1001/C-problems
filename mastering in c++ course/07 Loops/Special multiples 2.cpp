/*
● Read an integer N (1 <= 30): Print the first N numbers that are ○ multiple of 3 but not multiple of 4
● Input: 11 ● Output: 3 6 9 15 18 21 27 30 33 39 42
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

