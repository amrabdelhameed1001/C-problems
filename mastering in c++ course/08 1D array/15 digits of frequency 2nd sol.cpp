#include <iostream>
using namespace std;

int main(){
    int n;      cin >> n;
    int x;
    int arr[10]={0};

    for(int i=0 ; i<n ; i++) {
        cin >> x;

        if(x==0)    arr[0]++;

        while(x){
            int digit=x%10;
            arr[digit]++;
            x/=10;
        }
    }

    for(int i=0 ; i<10 ; i++)
        cout << i << " " << arr[i] << endl;


    return 0;
}
