#include<iostream>

using namespace std;

int main(){
    int i,j,k,len,maxlen=0,minlen=0;
    string str;
    cin >> len >> str;
    // Max
    maxlen = len;
    for (i=0;i<len;i++){
        if (str[i] == 'w')
            maxlen++;
    }
    // Min
    minlen = len;
    for (i=0;i<len;i++){
        //cout << "in loop" << endl;
        if (str[i]=='v'){
            if (str[i+1]=='v'){
                minlen--;
                i++;
                continue;
                //cout << minlen << " " << i;
            }
            if (str[i+1]=='w'){
                while (str[++i]=='w');
                if (str[i]=='v')
                    minlen--;
            }
        }
    }
    cout << minlen << " " << maxlen;
    return 0;
}
