/*
Read number X then read 6 numbers s1, e1, s2, e2, s3, e3 (s < e) ○ These 6 numbers are for 3 interval ○ Each Interval is a range [start, end] ○ Number X in a range if start <= X <= end ○ E.g 7 in range [5, 12] but not in range [10, 20]
● Print how many intervals that X is part of
● Inputs ○ 7
1 10 5 6 4 40 ⇒ 2
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int s1 , s2 , s3 , s4 , s5 , s6;
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;

    int intervals=0;

    if(x>s1 && x<s2)    intervals++;
    if(x>s3 && x<s4)    intervals++;
    if(x>s5 && x<s6)    intervals++;

    cout << intervals;

    return 0;
}
