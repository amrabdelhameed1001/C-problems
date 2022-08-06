// ● Read integers N, M, then Read matrix NxM. All values are distinct. ● A robot starts at cell (0, 0). ● Take the value in the current cell and moves. ● It can move only one step to either: Right, Bottom or the diagonal. ● It always selects the cell that has maximum value. ● Print the total values the robot collects
#include<iostream>
using namespace std;

int main() {
	int rows , cols;
    cin >> rows >> cols;

    int arr[rows][cols];
    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            cin >> arr[i][j];
        }
    }

    int sum=0;
    int di[3]={0,1,1};
    int dj[3]={1,0,1};
    int i=0 , j=0;

    while(i<rows && j<cols){
        sum += arr[i][j];
        int best_i=-1 , best_j=-1;
        int next;

        for(int d=0 ; d<3 ; d++){
            int ni=i+di[d];
            int nj=j+dj[d];
            if(ni < rows && nj <cols)
                if(best_i ==-1 || best_j == -1 || next < arr[ni][nj]){
                    next=arr[ni][nj];
                    best_i=ni;
                    best_j=nj;
                }


        }
        if(best_i ==-1 && best_j ==-1)
            break;
        i=best_i;
        j=best_j;
    }

    cout << sum;

	return 0;
}
