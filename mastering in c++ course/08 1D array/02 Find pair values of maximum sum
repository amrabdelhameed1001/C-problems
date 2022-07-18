/*
● Read an Integer N, then read N <= 200 (distinct) integers. Find a pair of numbers (e.g. 2 different indices) whose sum is maximum (from 50 + 15)
● Input: 5 2 10 3 50 15 ● Stop the video and code it ⇒ 65
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

    for(int i=1 ; i<n ; ++i){     // process to redefine max , max2
        if(max <= array[i]){
            max2=max;
            max=array[i];
        }
        else if (max2 < array[i])
            max2 = array[i];
    }

    int sum=max + max2;          // print outputs;
    cout << sum;
    return 0;
}
