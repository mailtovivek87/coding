#include <iostream>

using namespace std;

int main()
{
    long int testcount,friendCount,totalCost,c,i,j,sum,invite;
    cin >> testcount;

    long int testcase[testcount][1000010];

    long int tmp = 0;
    while (tmp < testcount){
        cin >> testcase[tmp][0] >> testcase[tmp][1];
        c=0;
        while (c < testcase[tmp][0]){
            cin >> testcase[tmp][c+2];
            c++;
        }
        tmp++;
    }
    long int temp;
    for (i=0;i<testcount;i++){
        invite = 0;
        for (j=2;j<testcase[i][0]+2;j++){
            temp = j;
            sum = 0;
            while ((sum<testcase[i][1]) && (temp<testcase[i][0]+2)){
                sum+=testcase[i][temp];
                temp++;
            }
            if (sum==testcase[i][1]){
                cout << "YES";
                invite = 1;
                break;
            }
        }
        if (invite == 0)
            cout << "NO";
        cout << endl;
    }

    return 0;
}
