// https://codeforces.com/problemset/problem/758/A
#include <iostream>
using namespace std;

int main()
{
    int n;          cin >> n;
    int array[n];   for(int i=0 ; i<n ; i++)    cin >> array[i];

    int max=array[0];
    for(int i=0 ; i<n ; i++){
        if(array[i] > max)
            max=array[i];
    }

    int sum=0;
    for(int i=0 ; i<n ; i++){
        sum+=(max-array[i]);
    }

    cout << sum;

    return 0;
}
