/* 
Create logic!
●	Write a program that reads 3 integers about the class room
○ Number of boys (nb), number of girls (ng), number of teachers (nt) 
● Prepare and print a boolean variable for these cases:
●	nb greater than 25
●	ng less than or equal to 30
●	nb > 20 and nt > 2 or ng > 30 and nt > 4
●	Either nb < 60 or ng < 70
●	Neither nb >= 60 nor ng >= 70
●	nb is 10 more students than ng
●	Difference between nb and ng is more than 10 or nt > 5
●	Either nb is 10 more students than ng or ng is 15 more students than nb

*/
#include<iostream>
using namespace std;

int main()
{
    int nb , ng , nt;
    cout << "Enter number of boys (nb): "; cin >> nb; cout<< endl;
    cout << "Enter number of girls (ng): "; cin >> ng; cout<< endl;
    cout << "Enter number of teachers (nt): "; cin >> nt; cout<< endl;
    cout << "nb > 25" << (nb >25) << endl;
    cout << "ng <=30" << (ng<=30) << endl;
    cout << "nb > 20 and nt > 2 or ng > 30 and nt > 4" << endl
         << ((nb > 20) && (nt > 2) || (ng > 30) && (nt > 4)) << endl;
    cout << "nb < 60 or ng < 70" << endl
         << ((nb < 60) || (ng < 70)) << endl;
    cout << "Neither nb >= 60 nor ng >= 70" << endl
         << ((nb < 60) || (ng >= 70)) << endl;
    cout << "nb is 10 more students than ng" << endl
         << (nb > (ng+10)) << endl;
    cout << "Difference between nb and ng is more than 10 or nt > 5" << endl
         << (((nb-ng)>10) || (nt>5)) << endl;
    cout << "Either nb is 10 more students than ng or ng is 15 more students than nb" << endl
         << ((nb > (10+ng)) || (ng > (15 + nb))) << endl;

    return 0;
}
