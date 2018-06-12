#include <iostream>

using namespace std;

int main() {
    int tc,num,i,j,arr[2][1000001],bob=0,alice=0,maxtemp;
    cin >> tc;

    while (tc-- > 0){
        cin >> num;
        for (i=0;i<2;i++){
            for (j=0;j<num;j++){
                cin >> arr[i][j];
            }
        }

        maxtemp = arr[0][0];
        for (i=1;i<num;i++){
            if(arr[0][i]>maxtemp)
                maxtemp = arr[0][i];
        }
        bob = maxtemp;

        maxtemp = arr[1][0];
        for (i=1;i<num;i++){
            if(arr[1][i]>maxtemp)
                maxtemp = arr[1][i];
        }
        alice = maxtemp;

        //cout << endl << "alice and bob " << alice << " " << bob << endl;

        if (bob>alice)
            cout << "Bob";
        if (bob<alice)
            cout << "Alice";
        if (bob == alice)
            cout << "Tie";
        cout << endl;
    }

    return 0;
}
