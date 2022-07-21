/*
Read an Integer N, then read N <= 200 integers. For all the digits from 0 to 9, we want to know how many times appeared ○ Input 2 78 307 ○ Output: ○ 0 1 ○ 1 0
[digit 1 never appeared]
○ 2 0 ○ 3 1 ○ 4 0 ○ 5 0 ○ 6 0 ○ 7 2
○ 8 1 ○ 9 0
[digit 7 appeared twice]
*/
#include <iostream>
using namespace std;

int main(){
    int n;          cin >> n;
    int array[n];   for(int i=0 ; i<n ; i++)    cin >> array[i];

    int digits[10] = {0};              // make array for digits
    for(int i=0 ; i<n ; i++){
        int unit_digit=array[i]%10;
        digits[unit_digit]++;

        if(array[i]/10==0)  continue;
        int tens_digit=(array[i]/10)%10;
        digits[tens_digit]++;

        if(array[i]/100==0) continue;
        int hund_digit=(array[i]/100)%100;
        digits[hund_digit]++;
    }

    for(int i=0 ; i<10 ; i++)
        cout << i << " " << digits[i] << endl;

    return 0;
}
