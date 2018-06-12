#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    int tc,n,i,j,mid;
    cin >> tc;
    while(tc-- > 0){
        cin >> n;
        int yes = 1;
        string arr[10000];
        for (i=0;i<n;i++)
            cin >> arr[i];
        mid = n/2;
        for(i=0;i<n;i++){
            for (j=0;j<mid;j++){
                if (arr[i][j]!=arr[i][n-j-1]) yes=0;
            }
            if (yes==0) break;
        }
        for (i=0;i<mid;i++){
            for(j=0;j<n;j++){
                if (arr[i][j]!=arr[n-i-1][j]) yes=0;
            }
            if (yes==0) break;
        }
        if(yes==1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
