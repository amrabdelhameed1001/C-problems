#include <iostream>
using namespace std;

double power(double n,double m){
    if (m==0)   return 1;
    return n*power(n,m-1);
}

int main(){

    cout << power(7,3);
    return 0;
}
