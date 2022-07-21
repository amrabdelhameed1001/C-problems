// without nested loop

// Read an Integer N, then read N <= 200 integers. Find the value that repeated the most number of times. ○ Each integer is -500 <= value <= 270
#include <iostream>
using namespace std;

int main()
{
    int n;          cin >> n;

    int max = 270 + 500 + 1;
    int freq[max]={0};

    for(int i=0 ; i<n ; i++){
        int value;
        cin >> value;

        value+=500;
        freq[value]++;
    }

    int max_idx;
    for(int i=0 ; i<max ; i++){
        if(freq[max_idx] < freq[i])
            max_idx=i;
    }

    cout << max_idx-500 << " has repeated " << freq[max_idx] << " times.";
    return 0;
}
