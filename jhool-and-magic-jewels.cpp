#include <iostream>

using namespace std;

int main (){
    int tc,i,minc;
    string str;
    int ch[4]={98,114,117,121};

    cin >> tc;
    while(tc-- > 0){
        int arr[256]={0};
        cin >> str;
        for(i=0;i<str.size();i++) arr[str[i]]++;
        if (arr[98]==0||arr[114]==0||arr[117]==0||arr[121]==0) cout << 0 << endl;
        else{
            minc = arr[ch[0]];
            for(i=1;i<4;i++){
                if(arr[ch[i]]<minc)
                    minc = arr[ch[i]];
            }
            cout << minc << endl;
        }
    }
    return 0;
}
