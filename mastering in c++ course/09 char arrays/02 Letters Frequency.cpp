#include <iostream>
using namespace std;

int main(){
    string str;   cin >> str;

    int freq[150]={0};

    for(int i=0 ; i< str.size() ; ++i)
        freq[str[i]]++;

    for(int i='a' ; i<= 'z' ; ++i){
        if(freq[i] !=0)
            cout << (char) i << " " << freq[i] << endl;
        else continue;
    }
    return 0;
}
