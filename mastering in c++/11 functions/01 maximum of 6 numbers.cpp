#include <iostream>
using namespace std;

int max1(int a,int b , int c , int d , int e , int f ){
    a=max(a,b);
    a=max(a,c);
    a=max(a,d);
    a=max(a,e);
    a=max(a,f);
    return a;
}

int main(){
    int a , b , c , d , e , f;
    cin >> a >> b >> c >> d >> e >> f;
    int maximum=max1(a,b,c,d,e,f);
    cout << maximum;
    return 0;
}
