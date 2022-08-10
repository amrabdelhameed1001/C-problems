/*
Read integers N, M represents a matrix. A robot start at cell (0, 0). ● Read integer K, then K commands. Each command is 2 values ○ Direction from 1 to 4: up, right, down, left ○ Steps: a number to number steps to take in the direction. Steps [1, 1000000000] ○ If the robot hits the wall during the move, it circulates in the matrix. ○ For every command, print where is the robot now
● Input ○ 3 4 4 2 1
3 2 4 2 1 3 ■ 2 1 means to right 1 step - 3 2 means down 2 steps
● Output ○
(0, 1) (2,1) (2, 3) (2, 3)
*/

#include <iostream>
using namespace std;

int main(){
    int n , m;                  cin >> n >> m;

    int k;                      cin >> k;

    int di[4]={-1 , 0 , 1 , 0};
    int dj[4]={0 , 1 , 0 , -1};

    int ni=0 , nj=0;
    for(int i=0 ; i<k ; i++){
        int dir , steps;        cin >> dir >> steps;

        ni += steps * di[dir-1];
        while(ni < 0)     ni += n;
        while(ni >= n)    ni -= n;

        nj += steps * dj[dir-1];
        while(nj < 0)     nj += m;
        while(nj >= m)    nj -= m;

        cout << ni << " " << nj;
    }

    return 0;
}
