// https://codeforces.com/problemset/problem/546/A
#include <iostream>
using namespace std;

int main(){
    int first_banana , my_dollars , bananas_num;
    cin >> first_banana >> my_dollars >> bananas_num;

    int total_cost=0;
    for(int i=1 ; i <= bananas_num ; i++)
        total_cost+= first_banana*i;

    int borrowed_dollars=total_cost  - my_dollars;
    if(borrowed_dollars > 0)    cout << borrowed_dollars;
    else                        cout << 0;
    
    return 0;
}
