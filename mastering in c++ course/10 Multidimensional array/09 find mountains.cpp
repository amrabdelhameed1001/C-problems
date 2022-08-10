// Read integers N, M, then Read matrix NxM. Print all positions that are mountain. Position is mountain if its value > 8 neighbours values

#include <iostream>
using namespace std;

int main(){
    int n , m;          cin >> n >> m;

    int arr[n][m];      for(int i=0 ; i<n ; i++) for(int j=0 ; j<m ; j++) cin >> arr[i][j];

    int ni[8]={-1 , 0 , 1 , 1 , 1 , 0 , -1 , -1};
    int nj[8]={-1 , -1 , -1 , 0 , 1 , 1 , 1 , 0};

    for(int i=0 ; i<n ; i++){                                                       //cout << " i " << i;
        for(int j=0 ; j<m ; j++) {                                                  //cout << " j " << j;

            bool mount = true;                                                      //cout << " mount: " << mount;
            for (int d = 0; d < 8; d++) {                                           //cout << " d " << d;
                int di = i + ni[d];                                                 //cout << " di " << di;
                int dj = j + nj[d];                                                 //cout << " dj " << dj;

                if ((di < 0) || (di >= n) || (dj < 0) || (dj >= m)) continue;
                if (arr[i][j] < arr[di][dj]) {
                    mount = false;                                                  //cout << " mount " << mount;
                    break;
                }
            }
                                                                                    //cout << endl;

            if (mount) cout << i << " " << j << endl;
        }
    }
    return 0;
}
