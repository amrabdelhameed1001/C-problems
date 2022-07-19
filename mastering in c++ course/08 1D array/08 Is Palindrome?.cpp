#include <iostream>
using namespace std;

int main(){
    int n;      cin >> n;
    int array[n];
    for(int i=0 ; i<n ; ++i)
        cin >> array[i];

    bool pal=true;
    for(int i=0 ; i<n/2 ; ++i){
        if(array[i]!=array[n-1-i]){
            pal=false;
            break;
        }
    }

    if(pal)         cout << "YES";
    else            cout << "NO";
    return 0;
}
