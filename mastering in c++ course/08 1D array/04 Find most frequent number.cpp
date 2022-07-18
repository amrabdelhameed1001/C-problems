/*
● Read an Integer N, then read N <= 200 integers. Find the value that repeated the most number of times.
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

    // process and print
    int most_num=array[0];      // most repeated times
    int max_repeat=1;           // max repeated times for elements
    for(int i=0 ; i<n ; ++i){
        int repeat=1;
        for(int j=i+1 ; j<n ;++j){
            if(array[i]==array[j]){
                repeat++;
            }
        }
        if(repeat>max_repeat){
            max_repeat=repeat;
            most_num=array[i];
        }
    }

    cout << most_num << " repeated " << max_repeat << " times";

    return 0;
}
