/*
Write a program that reads number X, then other 5 numbers. Print 2 values: ○ How many numbers <= X ○ How many numbers > X ○ Any relation between these 2 outputs?
*/
#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    cout << endl;

    int max=0 , min=0;

    int a , b , c , d , e;
    cin >> a;
    if(a<=x) min++;
    if(b<=x) min++;
    if(c<=x) min++;
    if(d<=x) min++;
    if(e<=x) min++;

    max= 5-min;

    cout << min << max;

    return 0;
}
