/*
● Read an integer N (2 <= N <= 10) ● Then read N integers, find which of them has the biggest value and print it.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;      // number of integers
    cin >> n;
    int num;    // input integer
    int max=0;

    if(n!=0) { cin >> num;  if (num>max) max = num; n--; }
    if(n!=0) { cin >> num;  if (num>max) max = num; n--; }
    if(n!=0) { cin >> num;  if (num>max) max = num; n--; }
    if(n!=0) { cin >> num;  if (num>max) max = num; n--; }
    if(n!=0) { cin >> num;  if (num>max) max = num; n--; }
    if(n!=0) { cin >> num;  if (num>max) max = num; n--; }
    if(n!=0) { cin >> num;  if (num>max) max = num; n--; }
    if(n!=0) { cin >> num;  if (num>max) max = num; n--; }
    if(n!=0) { cin >> num;  if (num>max) max = num; n--; }
    if(n!=0) { cin >> num;  if (num>max) max = num; n--; }

    cout << max;
    return 0;
}
