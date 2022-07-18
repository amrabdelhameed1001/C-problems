/*
Count how many (a, b, c, d) with following property: ○ 1 <= a, b, c, d <= 200 ○ a + b = c + d
*/
#include <iostream>
using namespace std;

int main(){
    int m=0;
    for (int a=1 ; a<= 200 ; ++a){
        for(int b=1 ; b <= 200 ; ++b){
            for(int c=1 ; c <= 200 ; ++c ){
                for(int d=1 ; d <= 200 ; ++d){
                    if(a+b == c+d)
                        m++;
                }
            }
        }
    }
    cout << m;

    return 0;
}
