#include <iostream>
using namespace std;
int main(){
    int row,col,i,j;
    int arr[10][10];
    cin >> row >> col;
    //arr = new int[row][1000000];
    for (i=0;i<row;i++)
        for (j=0;j<col;j++)
            cin >> arr[i][j];
    for (j=0;j<col;j++){
        for (i=0;i<row;i++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
