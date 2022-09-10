#include <iostream>
using namespace std;

bool palind(int arr[] , int size){
    bool pal=true;
    for(int i=0 ; i<size/2 ; i++){
        if(arr[i] != arr[size-1-i]){
            pal=false;
            break;
        }
    }
    return pal;
}

int main(){
    int n;
    cin >> n;

    int array[n];
    for(int i=0 ; i<n ; i++){
        cin >> array[i];
    }

    bool palindrome=palind(array , n);

    if(palindrome)      cout << "yes";
    else                cout << "no";

    return 0;
}
