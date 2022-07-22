/*
● Read an Integer N, then read N (< 200) integers. ● Output: Count how many subarrays are increasing in the array. ● E.g. If input is 1 2 3 4 ○ We can find all sublists of length 1 ⇒ [1], [2], [3], [4] ○ All sublists of length 2 ⇒ [1, 2], [2, 3], [3, 4] ○ All sublists of length 3 ⇒ [1, 2, 3], [2, 3, 4] ○ All sublists of length 4 ⇒ [1, 2, 3, 4]
*/

#include <iostream>
using namespace std;

int main() {
    int n;          cin >> n;
    int arr[n];     for(int i=0 ; i<n ; i++)    cin >> arr[i];

    int count=0;
    for(int i=0 ; i<n ; i++){
        count++;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j] > arr[j-1])   count++;
            else                    break;
        }
    }
    cout << count ;

    return 0;
}
