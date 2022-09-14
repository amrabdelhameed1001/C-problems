/*
Implement the following 2 functions: ● bool is_prime(int num); ○ Return true if number is prime
● Int nth_prime(int n); ○ Return the n-th prime number. It should use is_prime function ○ E.g nth_prime(6) = 13 ■ Recall: 2, 3, 5, 7, 11, 13, 17, 19
*/
#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num){
    if(num <2 ){
        return false;
    }

    bool prime=true;
    for(int i=2 ; i< num ; i++){
        if(num % i == 0){
            prime = false;
            break;
        }
    }

    return prime;
}

int nth_prime(int n){
    int count=0;
    int ith=1;
    while(count < n){
        ith++;
        if(is_prime(ith)){
            count++;
        }

    }
    return ith;
}

int main(){
    int nth_primed;
    cin >> nth_primed;

    int out_prime = nth_prime(nth_primed);
    cout << out_prime;

    return 0;
}
