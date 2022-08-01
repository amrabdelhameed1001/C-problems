#include <iostream>
using namespace std;

int main(){
    string a , b;
    cin >> a >> b;

    bool suffix=true;

    for (int i=b.size() ; i>0 ; i--){
        if (b[b.size()-i] != a[a.size()-i])   {suffix = false ; break;}
    }
    if(suffix)  cout << "YES";
    else        cout << "NO";
    return 0;
}
