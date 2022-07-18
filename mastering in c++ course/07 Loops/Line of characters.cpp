/*
● Input: Read an integer N followed by a single character ● Output: Print the character N times as below ● Input ⇒ Output ○ 5 Y ⇒ YYYYY ○ 3 # ⇒ ###
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    while (n>0){
        cout << c;
        n--;
    }
    return 0;
}
