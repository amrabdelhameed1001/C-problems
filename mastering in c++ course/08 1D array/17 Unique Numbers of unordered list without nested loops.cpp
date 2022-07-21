#include <iostream>
using namespace std;

int main(){
    int n;          cin >> n;

    int max=500+1;
    int freq[max]={0};

    for(int i=0 ; i<n ; i++){
        int value;           cin >> value;
        if(!freq[value])     cout << value << " ";
        freq[value] =1;
    }


    return 0;
}
