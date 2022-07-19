// read integer n then read n integers. find the 3 lowest numbers
#include <iostream>
using namespace std;

int main()
{
    int n;          cin >> n;
    int a[n];
    for(int i=0 ; i<n ;++i)     cin >> a[i];

    for(int i=0 ; i<n ; ++i){
        for(int j=0 ; j<n-1 ; ++j){
            if(a[j] > a[j+1]){
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }

    for(int i=0 ; i<3 ; ++i)    cout << a[i] << " ";

    return 0;
}
