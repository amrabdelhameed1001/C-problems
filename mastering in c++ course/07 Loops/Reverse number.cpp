/*
● Read an integer N, then find its reverse integer R ○ Print R R*3
● input ⇒ Output ○ 123 ⇒ 321 963
*/
#include <iostream>
using namespace std;

int main()
{
    int n;              // integer number
    cin >> n;

    int r=0;            // reverser number
    int d;              // digit

    while(n){
        d=n%10;
        r=r*10+d;
        n/=10;
    }
    cout << r << " " << r*3;

    return 0;
}
