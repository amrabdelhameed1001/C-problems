// Read a very long string of digits (at least 6 digits), and add 5555 to it. ○ Don’t convert to integer, as integer has max limit for values
#include <iostream>
using namespace std;

int main(){
    string str;
    cin >> str;

    int carry=0;
    for(int i=0 ; i< str.size() ; i++){
        int digit=str[str.size()-1-i]-'0';

        if(i<4) digit +=5;
        digit += carry;

        if(digit >= 10) digit -=10 , carry=1;
        else            carry=0;

        str[str.size()-1-i] = digit +'0';
    }
    if(carry)   cout << 1;
    cout << str;

    return 0;
}
