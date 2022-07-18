/*
● Read an Integer N ( < 200), then read N (distinct) integers. Find the maximum and 2nd maximum values
● Input: 5 10 20 3 30 7 ⇒ Output 30 20
*/
#include <iostream>
using namespace std;

int main()
{
    int n;      cin >> n;       // read size of array

    int array[n];               // input elements of array
    for(int i=0 ; i<n ; ++i){
        cin >> array[i];
    }

    int max=array[0];
    int max2=array[0];

    for(int i=1 ; i<n-1 ; ++i){     // process to redefine max , max2
        if(array[i] > array[i-1]){
            max2=max;
            max=array[i];
        }
    }

    cout << max << " " << max2;      // print outputs;
    return 0;
}
