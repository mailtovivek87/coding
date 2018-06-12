#include<iostream>
#include<cmath>
using namespace std;

const int maxn = 1000001;
int arr[maxn] = {0};
int arrprime[79502] = {0};

void sievealgo(){
    long long int i,j=0;
    for (i=2;i<(long long int)sqrt(maxn);i++)
        if (arr[i]==0)
            for (j=i;i*j<maxn;j++)
                arr[i*j]=1;
    j=0;
    for (i=2;i<maxn;i++){
        if(arr[i]==0)
            arrprime[j++]=i;
    }
}

int main(){
    int i,rev,n,temp;
    int setp[maxn] = {0};
    sievealgo();

    for(i=4;i<79502;i++){
        if(setp[arrprime[i]]==0){
            rev=0;
            n=arrprime[i];
            while (n != 0){
                rev = rev * 10;
                rev = rev + n%10;
                n = n/10;
            }
            if(rev==arrprime[i]) continue;
            else{
                cout << arrprime[i] << endl;
                setp[arrprime[i]]=1;
                setp[rev]=1;
            }
        }
    }

    return 0;
}
