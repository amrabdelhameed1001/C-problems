/*
Read integer N, then print a left angled triangle that has N rows
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=1;
    while(i <= n){
        int j=0;
        while(j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
