// https://atcoder.jp/contests/abc181/tasks/abc181_b
#include <iostream>
using namespace std;

int main(){
    int n;      cin >> n;

    long long sum=0;
    for(int i=0 ; i<n ; i++){
        int start;      cin >> start;
        int end;        cin >> end;

        for(int j=start ; j <= end ; j++){
            sum+=j;
        }
    }

    cout << sum;


    return 0;
}
