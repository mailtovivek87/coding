#include <iostream>
using namespace std;

int main()
{
    int tc,i,m,ms,temp,skip=0,attempt=0;
    cin >> tc;
    cin >> m;
    for(i=0;i<tc;i++){
        cin >> ms;
        if(ms>m) skip++;
        else attempt++;
        if (skip>1) break;
    }
    cout << attempt << endl;
    return 0;
}
