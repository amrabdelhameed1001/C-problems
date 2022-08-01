#include <iostream>
using namespace std;

int main(){
    string str;     cin >> str;

    int num=(int)(str[0]-'0');
    for(int i=1 ; i<str.size() ; i++){
        num = num*10 + (int)(str[i]-'0');
    }
    cout << num << " " << num*3;

    return 0;
}
