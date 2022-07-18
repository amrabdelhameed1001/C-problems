/*
Read integer N, followed by reading N numbers. Print 2 values ○ The average of the numbers in odd positions (1st, 3rd, 5th, …) ○ The average of the numbers in even positions (2nd, 4th, 6th, …)
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int odd_sum=0 , even_sum=0;     // sum of inputs values
    int odd_in , even_in;           // inputs values from user
    int odd_n=0 , even_n=0;         // number of inputs

    int i=1;
    while(i <= n){
        if (i%2 == 0){
            even_n++;
            cin >> even_in;
            even_sum += even_in;
        }
        else{
            odd_n++;
            cin >> odd_in;
            odd_sum += odd_in;
        }
        i++;
    }
    int odd_av= odd_sum/odd_n;
    int even_av = even_sum/even_n;

    cout << odd_av << " " << even_av;
    return 0;
}
