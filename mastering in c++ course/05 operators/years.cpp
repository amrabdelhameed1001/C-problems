/*
●	Read an integer: whole number of days of someone age. Print 3 numbers
○	Total years     total months    remaining days

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int y = n/360;
    int m = (n%360)/30;
    int d = n-y*360-m*30;
    cout << y << " " << m << " " << d;
    return 0;
}
