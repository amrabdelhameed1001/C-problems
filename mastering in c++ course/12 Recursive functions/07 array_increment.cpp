// 1 8 2 10 3 ⇒ 1 9 4 13 7
#include <iostream>
using namespace std;

void array_increment(int arr[] , int len){
    if(len==0){
        return;

    }

    arr[len-1] += len-1;
    array_increment( arr , len-1);
}

int main(){
    int array[5]={1,8,2,10,3};
    array_increment(array , 5);

    for(int i=0 ; i<5 ; i++){
        cout << array[i] << " ";
    }

}
