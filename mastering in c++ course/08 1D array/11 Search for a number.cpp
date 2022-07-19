/*
● Read an Integer N, then read N <= 200 integers [0 <= A[i] <= 500]. ○ We will search in this array for numbers
● Then read integer Q (for a number of queries), then read Q integers ○ For each integer, find the last occurance in the array. Print its index ○ If doesn’t exist, print -1
*/
#include <iostream>
using namespace std;

int main()
{
    int n;          cin >> n;
    int array[n];   for(int i=0 ; i<n ; i++)    cin >> array[i];

    int q;          cin >> q;
    int queries[q]; for(int i=0 ; i<q ; i++)    cin >> queries[i];

    for(int i=0 ; i<q ; i++){
        int index=-1;
        for(int j=0 ; j<n ; j++){
            if(array[j]==queries[i])
                index=j;
        }
        cout << index << endl;
    }

    return 0;
}
