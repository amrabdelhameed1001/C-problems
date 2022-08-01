// Read 2 strings input and str. Print YES if the given str is a prefix for the string. Otherwise, print NO
#include <iostream>
using namespace std;

int main(){
    string a , b;
    cin >> a >> b;

    bool prefix=true;

    for (int i=0 ; i<b.size() ; i++){
        if (b[i] != a[i])   {prefix = false ; break;}
    }
    if(prefix)  cout << "YES";
    else        cout << "NO";
    return 0;
}
