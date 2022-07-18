#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int s1 , s2 , s3 , s4 , s5 , s6;
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;

    int intervals=0;

    intervals = intervals + (x>s1 && x<s2) + (x>s3 && x<s4) + (x>s5 && x<s6);

    cout << intervals;

    return 0;
}
