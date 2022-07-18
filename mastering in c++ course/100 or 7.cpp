/*
●	Write a program that reads an integer and print 100 if number is even or 7 if number is odd
*/

#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >>a;
    int b = a%2;
    int c = b*7 + (!(b))*100;
    cout << c;
    return 0;
}
