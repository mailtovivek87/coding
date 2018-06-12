#include <iostream>

using namespace std;

int main (){
    int arr[1000][1000];
    int row,col,query,i,j,num,rpos,rcol;

    cin >> row >> col;
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
            cin >> arr[i][j];
    cin >> query;
    while(query-- > 0){
        cin >> num;
        rpos=row-1;
        rcol=0;
        while(1){
            if (rpos<0||rcol>col-1){
                cout << "-1 -1" << endl;
                break;
            }
            if(num==arr[rpos][rcol]){
                cout << rpos << " " << rcol << endl;
                break;
            }
            else{
            	if(num<arr[rpos][rcol]) rpos--;
            	else rcol++;
            }
        }
    }
    return 0;
}
