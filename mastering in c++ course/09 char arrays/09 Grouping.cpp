// ● Read a string, then divide it to consecutive groups of same letter. Print each group
#include <iostream>
using namespace std;

int main(){
    string str;     cin >> str;

    cout << str[0];
    for(int i=1 ; i<str.size() ; i++){
        if(str[i] == str[i-1])  cout << str[i];
        else                    cout << " " << str[i];
    }

    return 0;
}
