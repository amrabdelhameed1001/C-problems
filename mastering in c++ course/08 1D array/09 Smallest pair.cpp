/*
● Given a number N (<= 200) and an array A of N numbers. ● Print the smallest possible result of A[i] + A[j] + j - i , where 1 ≤ i < j ≤ N. ● Input ⇒ Output ○ 4 20 1 9 4 ⇒ 7
*/
#include <iostream>
using namespace std;

int main()
{
    int n;          cin >> n;
    int A[n];
    for(int i=0 ; i<n ; ++i)    cin >> A[i];

    int min=A[0]+A[1]+1-0;       // first i and j for expression
    for(int i=0 ; i<n ; ++i){
        for(int j=i+1 ; j<n ; ++j){
            if(A[i]+A[j]+j-i < min)
                min=A[i]+A[j]+j-i;
        }
    }
    cout << min;
    return 0;
}
