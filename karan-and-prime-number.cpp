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
    int i,n,cnt,tc,s,e,sp=0,ep=0,sum;
    sievealgo();

    cin >> tc;

    while(tc-- > 0){
        sp=0;ep=0;sum=0;
        cin >> s >> e;
        while(arrprime[sp]<s) sp++;
        while(arrprime[sp]<=e) sum=sum+arrprime[sp++];
        cout << sum << endl;
    }
    return 0;
}
