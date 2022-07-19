/*
Read integer N ( < 1000), followed by reading N integers (0 <= value <= 500) ● The N numbers are ordered from small to large ● Print the unique list of the numbers, but preserve the given order ● Input: 12 1 1 2 2 2 5 6 6 7 8 9 9 ● Output: 1 2 5 6 7 8 9 ○ Observe: input is sorted list
*/
#include <iostream>
using namespace std;

int main(){
    int n;      cin >> n;
    int array[n];
    for(int i=0 ; i<n ; ++i)
        cin >> array[i];

    cout << array[0];
    for(int i=1 ; i<n ; ++i){
        if(array[i]!=array[i-1])
            cout << array[i] << " ";
    }
    return 0;
}
