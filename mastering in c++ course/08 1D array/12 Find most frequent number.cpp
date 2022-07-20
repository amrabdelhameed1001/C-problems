
#include <iostream>
using namespace std;

int main()
{
    int n;          cin >> n;
    int array[n];   for(int i=0 ; i<n ; i++)    cin >> array[i];


    int max_repeated_num=array[0];
    int max_times=1;
    for(int i=0 ; i<n ; i++){
        int num_times=1;
        for(int j=i+1 ; j<n ; j++){
            if(array[i]==array[j]){
                num_times++;
            }
        }
        if(max_times < num_times) {
            max_times = num_times;
            max_repeated_num = array[i];
        }
    }
    cout << max_repeated_num << " is repeated " << max_times << " times.";
    return 0;
}
