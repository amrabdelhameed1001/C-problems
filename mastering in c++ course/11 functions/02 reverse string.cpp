#include <iostream>
using namespace std;

string reverse(string &a){
    for(int i=0 ; i<a.size()/2 ; i++){
        char tmp=a[i];
        a[i]=a[a.size()-1-i];
        a[a.size()-1-i]=tmp;
    }
    return a;
}

int main(){
    string a;
    cin >> a;
    reverse(a);
    cout << a;
    return 0;
}
