#include <iostream>
using namespace std;

int sum(int arr[], int len){
    if(len==1){
        return arr[0];
    }
    else if (len==2){
        return (arr[0]+arr[1]);
    }
    else {
        return arr[len-1]+sum(arr,len-1);
    }

}

int main(){
    int array[5]={1,8,2,10,3};
    cout << sum(array , 5);
}
