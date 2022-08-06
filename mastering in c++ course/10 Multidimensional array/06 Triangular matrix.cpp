// Read integer N, then Read Square matrix NxN. Then, print 2 values. The sum of the lower triangle matrix and the upper triangle
#include <iostream>
using namespace std;

int main(){
    int dim;    cin >> dim;

    int arr[dim][dim];
    int up_sum=0 , low_sum=0;

    for(int i=0 ; i<dim ; i++)  {
        for(int j=0 ; j<dim ; j++){
            cin >> arr[i][j];
            if(i >= j)         low_sum += arr[i][j];
            if(i <= j)         up_sum += arr[i][j];
        }
    }

    cout << low_sum << " " << up_sum;

    

    return 0;
}
