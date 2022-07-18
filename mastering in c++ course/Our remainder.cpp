/*
●	We know N % M computes the remainder of division
●	Write a program that reads 2 positive integers and print such reminder without using the modulus operator %
●	Input: 27 12 ●	Output: 3

*/

#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cout <<"a:" ; cin>>a;
    cout <<"b:" ; cin>>b;
    cout << (((double)a/b) -a/b )*b ;
    return 0;
}
