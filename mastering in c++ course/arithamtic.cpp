/*
Read 2 integers A, B and print based on following cases: ○ if both are odd print their product A*B ○ if both are even print their division A/B (assume B != 0) ○ if the first is odd and the second is even then find their sum A+B ○ if the first is even and the second is odd then find their subtraction A-B
● Inputs ⇒ outputs ○ 5 7 => 35 ○ 12 2 => 6 ○ 5 6 => 11 ○ 12 3 => 9
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "a="; cin>> a;
    cout << "b="; cin>> b;
    if(a%2){
        cout << "a is odd\n";
        if(b%2){
            cout<< "b is odd\n";
            cout<< a*b;
        }
        else {
            cout << "b is even\n";
            cout << a + b;
        }
    }
    else
    {
        cout << "a is even\n";
        if(b%2) {
            cout << "b is odd\n";
            cout << a - b;
        }
        else {
            cout << "b is even\n";
            cout << a / b;
        }
    }
    return 0;
}
