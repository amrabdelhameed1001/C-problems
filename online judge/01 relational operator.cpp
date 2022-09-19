// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=9
#include <iostream>
using namespace std;

string op(int a , int b){
    if(a > b)
        return ">";
    else if(a < b)
        return "<";
    else
        return "=";
}

int main(){
    int t;
    cin >> t;

    string str="";
    for(int i=0 ; i<t ; i++){
        int x , y;
        cin >> x >> y;
        str+=op(x,y);
    }

    for(int i=0 ; i<t ; i++){
        cout << str[i] << endl;
    }

    return 0;
}
