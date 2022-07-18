/*
Given 3 integers, you have to find the biggest one of them which is < 100. ○ Print -1 if no such number
*/

#include <iostream>
using namespace std;

int main()
{
    int a , b ,c;
    cin>>a >> b >> c;
    int out=-1;
    if(a<100 || b<100 || c<100){
        if(a<100)            out = a;
        if (b<100 && b>a)    out = b;
        if (c<100 && c>b)    out = c;
    }
    cout << out;
    return 0;
}
