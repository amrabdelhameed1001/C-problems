// https://codeforces.com/problemset/problem/733/A
#include <iostream>
using namespace std;

int main(){
    string txt;     cin >> txt;
    int max_pos=txt.length();

    int initial_vwl_idx;
    int jump=1;
    int max_jump=1;
    for(int i=0 ; i<max_pos ; i++){
        if((txt[i] == 'A') || (txt[i] == 'E') || (txt[i] == 'I')
        || (txt[i] == 'O') || (txt[i] == 'U') || (txt[i] == 'Y')){
            initial_vwl_idx=i;
            jump=1;
        }
        else{
            jump++;
        }
        if(max_jump < jump){
            max_jump=jump;
        }
    }

    cout << max_jump;

    return 0;
}
