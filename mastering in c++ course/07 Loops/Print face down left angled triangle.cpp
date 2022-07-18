/*
 ● Read integer N, then print a face down left angled triangle that has N rows.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=n;
    while(i > 0){
        int j=i;
        while(j > 0) {
            cout << "*";
            j--;
        }
        cout << endl;
        i--;
    }
    return 0;
}
