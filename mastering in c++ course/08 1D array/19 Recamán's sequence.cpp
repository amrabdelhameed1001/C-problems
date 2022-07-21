/*
● The first terms of this sequence are 0, 1, 3, 6, 2, 7, … ○ So last term value is 7 and its index is 5 (zero based) ○ The next value is either: ■ LastValue - LastIndex - 1 if the following 2 conditions are satisfied: ● value > 0 and It did not appear before ● E.g. 7 (last value) - last index (5) - 1 = 7-5-1 = 1 (> 0 but already exists)
■ Or LastValue + LastIndex + 1 = 7+5+1 = 13
● Read integer zero-based index ([1, 200]) and print the value of this index ○ E.g. (6 ⇒ 13), (9 ⇒ 21), (17 ⇒ 25)
*/
#include <iostream>
using namespace std;

int main(){
    int n;          cin >> n;

    int max=200+1;
    int freq[max];  for(int i=0 ; i<n ; i++)    freq[i]=0;              // make array for frequency


    int arr[max];
    arr[0]=0;

    if(n==0)    cout << 0;
    else{

        for(int i=1 ; i <= n+1 ; i++){
            arr[i]= arr[i-1]-(i-1)-1;
            if(arr[i] <= 0)             arr[i]=arr[i-1]+(i-1)+1;
            else if(freq[arr[i]]==1)    arr[i]=arr[i-1]+(i-1)+1;

            freq[(arr[i])]=1;
        }
        cout << arr[n];

    }




    return 0;
}
