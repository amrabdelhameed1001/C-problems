/*
Read an integer N (< 200), then read N integers. ○ Assume all values [0, 2000]
● Print the array after doing the following operations: ○ Find minimum number in these numbers. ○ Find maximum number in these numbers. ○ Replace each minimum number with maximum number and Vise Versa.
● Input ⇒ Output ○ 7 4 1 3 10 8 10 10 ⇒ 4 10 3 1 8 1 1
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

    // hold max and min
    int max=0 , min=2000;

    for(int i=1 ; i<n ; ++i){
        if(array[i]>max) {
            max = array[i];

        }
        if(array[i]<min)
            min=array[i];

    }

    // swap max and min
    for(int i=0 ; i<n ; ++i){
        if(array[i]==min)       array[i]=max;
        else if(array[i]==max)   array[i]=min;
    }

    // print
    for(int i=0 ; i<n ; ++i)
        cout << array[i] << " ";

    return 0;
}
