/*
Assume a list: 1 0 3 -4 2 -6 9 ● Sliding window (sublist): 3 ● Let’s print all windows of length 3 and their sum ○ 1 0 3 ⇒ sum = 4 ○
0 3 -4 ⇒ sum = -1
○ ○ ○
3 -4 2 ⇒ sum = 1 -4 2 -6 ⇒ sum = -8 2 -6 9 ⇒ sum = 5
*/
#include <iostream>
using namespace std;

int main(){
    int n=7;
    int list[n]={ 1 , 0 , 3 , -4 , 2 , -6 , 9};

    int w1 , w2 , w3;       // windows
    for (int i=2 ; i<n ; i++){
        w1=list[i-2];
        w2=list[i-1];
        w3=list[i];

        int sum= w1 + w2 + w3;

        cout << w1 << " " << w2 << " " << w3 
             << "  sum = " << sum << endl;
    }
    return 0;
}
