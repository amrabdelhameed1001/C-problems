/*
Write a program that reads 5 numbers and print the following:
	○	A) Their average
○	B) The sum of the first 3 numbers divided by the sum of the last 2 numbers ○	
C) The average of the first 3 numbers divided by the average of the last 2 numbers.

*/

#include<iostream>
using namespace std;

int main()
{
    int a , b , c , d , e;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    cout << "d: "; cin >> d;
    cout << "e: "; cin >> e;

    double SO3 = a + b + c; //sum of first three numbers
    double SO2 = d + e; //sum of the last 2 numbers

    double average = ((SO3 + SO2)/5);
    cout << "averge= " << average << "\n";

    cout << "The sum of the first 3 numbers divided by the sum of the last 2 numbers= " << (SO3 / SO2) << "\n";

    cout << "The average of the first 3 numbers divided by the average of the last 2 numbers = " << ((SO3/3) / (SO2/2));
    return 0;
}
