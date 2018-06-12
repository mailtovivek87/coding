#include<bits/stdc++.h>
using namespace std;

const int maxn = 1000001;
int  arr[maxn] = {0};

void sievealgo(){
	for(int i=2;i<=sqrt(maxn);i++){
		if(arr[i] == 0){
			for(int j=i*i;j<maxn;j +=i)
				if(arr[j] == 0) arr[j] = i;
		}
	}
	for(int i=2;i<maxn;i++) {
		if(arr[i] == 0) arr[i] = i;
	}
}

int main(){
    long long int n,i;
    int tc;

	sievealgo();
	scanf("%d",&tc);

	while(tc--)
	{
        scanf("%d",&n);
        printf("%d\n",n-arr[n]);
	}

	return 0;
}
