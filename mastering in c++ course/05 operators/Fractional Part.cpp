/*
●	Write a program that reads 2 numbers a, b and divides them (a/b), but prints only the fraction part
●	Input: 201 25 ●	Output: 0.04
	○	Notice: 201 / 25 = 8.04
	○	We only want the fraction part: 0.04

*/
#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cout << "a= "; cin >> a;
    cout << "b= "; cin >> b;

    int int_part = a/b;
    double double_part=((double)a/b);

    cout << double_part - int_part ;
    return 0;
}
