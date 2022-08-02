/*
● Read a string of letters and then compress each group of same letter ○ E.g. if the sub-string is cccc ⇒ c4 ○ Use _ between each group
● Input ⇒ Outputs ○ ccccDDDxxxxxxxxe ⇒ c4_D3_x8_e1 ○ xxxxxxxx ⇒ x8
*/
#include <iostream>
using namespace std;

int main(){
    string str;     cin >> str;

    int freq[150]={0};

    int idx1;
    for(int i=0 ; i<str.size() ; i++){      // print first letter and its repeating times
        if(str[i] != str[i+1]) {
            cout << str[i] << i + 1;
            idx1=i;
            break;
        }
    }


    for(int i=idx1 +1 ; i<str.size() ; i++){
        int letter=str[i];
        freq[letter]++;
        if(str[i] != str[i+1]){
            cout << "_" << str[i] << freq[letter];
        }
    }



    return 0;
}
