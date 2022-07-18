/*
●	The following code reads an integer and computes a boolean if the number is even in 3 different ways. 
●	Fill in the is_even to solve the problem in 3 ways as following
●	Using only %2
●	Using only /2
●	Using only %10

*/

include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"number:";
    cin>> n;

    bool is_even1 , is_even2 , is_even3;
    cout << (n%2 ==0) << "\n" << (n-(n/2)*2 ==0 ) << "\n" << ((n%10-((n%10)/2)*2)==0);

    return 0;
}
