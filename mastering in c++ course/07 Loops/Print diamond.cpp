/*
● Read an integer N, then print diamond of 2N rows
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int in = n;     // hold input

    int x;          // number of spaces
    int y;          // number of stares

    while(n > 0){
        x=n-1;
        y=(in-x)*2-1;
        while (x > 0)   {   cout << " ";    x--;    }
        while (y > 0)   {   cout << "*";    y--;    }
        n--;
        cout << endl;
    }

    // n =0

    while (n < in){
        x=in-n;
        y=(in-n)*2-1;
        while (x < in)  {   cout << " ";    x++;    }
        while (y > 0 )  {   cout << "*";    y--;    }
        n++;
        cout << endl;
    }

    return 0;
}
