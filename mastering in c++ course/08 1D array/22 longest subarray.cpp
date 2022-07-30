// Read integer N (< 1000) then N read numbers each is either 0 or 1. ● Find the longest subarray with number of zeros = numbers of ones
#include <iostream>
using namespace std;

int main() {
    int n;          cin >> n;
    int arr[n];     for(int i=0 ; i<n ; i++)    cin >> arr[i];

    int maxLen=0;

    for (int i=0 ; i<n ; i++){
        int zeroes=0 ;
        int ones=0;

        for(int j=i ; j<n ; j++){
            if(arr[j] == 0)     zeroes++;
            else                ones++;

            int subarrayLen=j-i+1;
            if(zeroes == ones){
                if(subarrayLen > maxLen)   maxLen=subarrayLen;
            }
        }
    }

    cout << maxLen;



    return 0;
}
