#include <iostream>
using namespace std;

int main()
{
    int tc,i,n,ms,temp,cnt;
    cin >> tc;
    while(tc-- > 0){
        cin >> n;
        cnt = 1;
        for(i=0;i<n;i++){
            cin >> ms;
            if (i==0) temp=ms;
            if (temp>ms&&i>0){
                temp = ms;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
