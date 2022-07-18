/*
● Read three numbers N, A, B. Print the summation of the numbers between 1 and N whose sum of digits is between A and B.
*/
#include <iostream>
using namespace std;

int main(){
    int n ;     cin >> n;
    int a ;     cin >> a;
    int b ;     cin >> b;

    int sum_num=0;

    for(int i=1 ; i <= n ; ++i){
        int sum_digits=0;
        int digit=i;
        while(digit !=0){
            sum_digits+= digit % 10;
            digit/=10;
        }

        if(sum_digits >= a && sum_digits <= b)
            sum_num+=i;
    }

    cout << sum_num;

    return 0;
}
