#include <iostream>
using namespace std;

int main(){
    string a , b;
    cin >> a >> b;

    int idx0;
    for(int i=0 ; i<a.size() ; i++)
        if(b[0] == a[i]) {
            idx0 = i;
            break;
        }

    bool substring=true;
    for(int i=1 ; i<b.size() ; i++){
        if(b[i] <= a[idx0]){
            substring = false;
            break;
        }
    }

    if(substring)   cout << "YES";
    else            cout << "NO";

    return 0;
}
