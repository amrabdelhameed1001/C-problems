#include <iostream>
using namespace std;

int arr_max(int arr[], int len){
    if (len==2){
        return max(arr[1],arr[0]);
    }
    return max(arr[len-1],arr[len-2]);
}

int main(){
    int array[5]={1,8,2,10,3};
    cout << arr_max(array , 5);
}
