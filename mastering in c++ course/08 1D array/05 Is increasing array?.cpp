/*
● Read an Integer N, then read N (<= 200) integers. ● Print YES if the array is increasing. ○ An array is increasing if every element is >= the previous number
● Inputs ○ 4 1 2 2 5 ⇒ YES ○ 5 1 0 7 8 9 ⇒ NO [0 is < 1, the previous number] ○ 2 -10 10 ⇒ YES
*/
#include <iostream>
using namespace std;

int main(){
    // read array
    int n;      cin >> n;
    int array[n];
    for(int i=0 ; i<n ; ++i){
        cin >> array[i];
    }

    // process
    bool inc=true;
    for(int i=1 ; i<n ; ++i){
        if(array[i]<array[i-1]){
            inc=false;
            break;
        }
    }

    //print
    if(inc)     cout << "YES";
    else        cout << "NO";
    
    return 0;
}
