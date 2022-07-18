/*
● Read 4 numbers representing 2 intervals and print their intersection interval. If they don’t intersect, print -1
*/

#include <iostream>
using namespace std;

int main()
{
    int s1 , e1 , s2 , e2;  // start , end
    cin >> s1 >> e1 >> s2 >> e2;
    int min , max;

    if(s1>s2)   min=s1; else    min = s2;
    if(e1<e2)   max=e1; else    max = e2;

    if(min < max)   cout << min << " " << max;  else    cout << -1;

    return 0;
}
