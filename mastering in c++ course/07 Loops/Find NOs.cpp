/*
● Read integer N, then read N strings. ○ Print only the strings (of 2 letters). ○ These 2 letters must be letter ‘N’ and letter ‘O’ ■ Regardless of lower or upper case ■ Regardless of the 2 letters order ■ E.g. print “No”, “ON”, “no” but ignore e.g. “YEs”, “Noooo” ■ That is: a word of 2 letters only N and O
● Input ○ 9 Yss NO noOO oN Mostafa no nN oOOooo oO
● Output ○ NO oN no
*/
#include <iostream>
using namespace std;

int main()
{
    int n;                      // number of strings
    cin >> n;

    int index=0;

    while (index < n){
        string s;
        cin >> s;
        if((s=="no") || (s=="nO") || (s=="No") || (s=="NO") ||
           (s=="on") || (s=="oN") || (s=="On") || (s=="ON")){
            cout << s << " ";}
        index++;
    }

    return 0;
}
