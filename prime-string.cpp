#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int i,sz,j,tc=0,cnt=0,np=0,b;
    string str;
    int* arr = NULL;
    int chr[27]={0};

    cin >> tc;

    while(tc-- > 0){
        np=0;
        cin >> str;
        cnt=0;
        sz = str.size();
        arr = new int[sz];
        for(i=0;i<sz;i++)
            arr[i]=0;
        for(i=0;i<27;i++)
            chr[i]=0;
        for(i=0;i<sz;i++){
            chr[(int)str[i]-96]++;
        }
        for(i=0;i<27;i++){
            if(chr[i]!=0)
                cnt++;
        }
        if (cnt>1){
            for(j=2;j<=(long long int)sqrt(cnt);j++){
                if(cnt%j==0){
                    np=1;
                    cout << "NO";
                    break;
                }
            }
        }
        else{
            np=1;
            cout << "NO";
        }
        if(np==0){
            for(i=0;i<27;i++){
                if(chr[i]>0){
                    if(chr[i]==1){
                        cout << "NO";
                        np=1;
                        break;
                    }
                    for(j=2;j<=(long long int)sqrt(chr[i]);j++){
                        if(chr[i]%j==0){
                            np=1;
                            cout << "NO";
                            break;
                        }
                    }
                }
                if(np==1)
                    break;
            }
        }
        if(np==0)
            cout << "YES";
        cout << endl;
        delete [] arr;
        arr=NULL;
    }
    return 0;
}
