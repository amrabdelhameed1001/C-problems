/*
Read integer N ( <= 900), followed by reading N integers (0 <= value <= 500) ● Print the unique list of the numbers, but preserve the given order ● Input: 13 1 5 5 2 5 7 2 3 3 3 5 2 7 ● Output: 1 5 2 7 3
*/
#include <iostream>
using namespace std;

int main(){
    int n;          cin >> n;
    int arr[n];     for(int i=0 ; i<n ; i++)    cin >> arr[i];

    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i] == arr[j])    arr[j]=-1;
        }
    }

    for(int i=0 ; i<n ; i++)
        if(arr[i]>0)    cout << arr[i] << " ";


    return 0;
}
