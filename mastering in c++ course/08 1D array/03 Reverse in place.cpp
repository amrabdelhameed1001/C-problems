/*
Read an Integer N, then read N <= 200 integers. ○ In-place: Change the current array, don’t use 2 arrays
*/
#include <iostream>
using namespace std;

int main()
{
    // read array
    int n;      cin >> n;
    int array[n];
    for(int i=0 ; i<n ; ++i)
        cin >> array[i];

    // reverse array
    for(int i=0 ; i<n/2 ; ++i){
        int temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }

    // print array after reversing
    for (int i=0 ; i<n ; ++i)
        cout << array[i] << " ";
    return 0;
}
