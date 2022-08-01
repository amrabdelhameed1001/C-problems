/*
Read a string and do the following conversions for its letters ○ If it is an upper letter, don’t change ○ If it is lower letter, use this map of 26 letters: ■ abcdefghijklmnopqrstuvwxyz ■ YZIMNESTODUAPWXHQFBRJKCGVL ■ E.g. a ⇒ Y and z ⇒ L
○ If it is digit, use this map of 10 letters: ■ 0123456789 ■ !@#$%^&*()
● Input ⇒ Output ○ acMNmn39 ⇒ YIMNPW$) ○ vwXYZ0123 ⇒ KCXYZ!@#$
*/
#include <iostream>
using namespace std;

int main(){
    string str;   cin >> str;

    string mapLetters="YZIMNESTODUAPWXHQFBRJKCGVL";

    for(int i=0 ; i<str.size() ; i++){
        if('A' <= str[i] && str[i] <= 'Z')       cout << str[i];
        else if('a' <= str[i] && str[i] <= 'z')  cout << mapLetters[str[i]-'a'];
        else    cout << (int)str[i];
    }
    return 0;
}
