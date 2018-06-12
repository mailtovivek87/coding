#include<bits/stdc++.h>

using namespace std;

const int maxn = 1000001;
int arr[maxn] = {0};
int arrprime[maxn] = {0};

void sievealgo(){
    long long int i,j=0;
    for (i=2;i<(long long int)sqrt(maxn);i++)
        if (arr[i]==0)
            for (j=i;i*j<maxn;j++)
                if (arr[i*j]==0){
                	arr[i*j]=i;
                	arrprime[i]++;
                }
}

int main(){
    long int i,tc,n,cnt;
    sievealgo();

    scanf("%ld",&tc);

    while(tc-- > 0){
        cnt = 0;
        cin >> n;
        printf("%ld\n",arrprime[n]+1);
    }
    return 0;
}
