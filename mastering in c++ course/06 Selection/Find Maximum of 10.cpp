/*
Read 10 integers, find which of them has the biggest value and print it.
*/
#include <iostream>
using namespace std;

int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10;
    int max=a1;

    if (a2 > max) max=a2;
    if (a3 > max) max=a3;
    if (a4 > max) max=a4;
    if (a5 > max) max=a5;
    if (a6 > max) max=a6;
    if (a7 > max) max=a7;
    if (a8 > max) max=a8;
    if (a9 > max) max=a9;
    if (a10 > max) max=a10;

    cout << max;

    return 0;
}
