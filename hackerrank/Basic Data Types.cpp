#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int i;              cin >> i;       
    long ld;            cin >> ld;      
    char a;             cin >> a;       
    float f;            cin >> f;
    double d;           cin >> d; 
    
    cout << i << endl;
    cout << ld << endl;
    cout << a << endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d;
    return 0;
}
