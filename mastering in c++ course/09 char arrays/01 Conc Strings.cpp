//● Read two strings S and T. Print a new string that contains the following: ○ First letter of the string S followed by the First letter of the string T. ○ Second letter of the string S followed by the Second letter of the string T. ○ and so on...
//● Don’t create new strings. Don’t change input content ● Input ⇒ Output ○ abc defghi ⇒ adbecfghi ○ AM CICPC ⇒ ACMICPC
#include <iostream>
using namespace std;

int main(){
    string a , b;
    cin >> a >> b;

    int a_ismin=1;
    int minLen = a.size();
    if(minLen > b.size())   minLen=b.size(), a_ismin=0 ;

    for(int i=0 ; i<minLen ; i++){
        cout << a[i] << b[i];
    }

    if(a_ismin){
        for(int i=minLen ; i<b.size() ; i++)
            cout << b[i];
    }
    else{
        for(int i=minLen ; i<a.size() ; i++)
            cout << a[i];
    }

    return 0;
}
