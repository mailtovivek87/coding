#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,a,ans=0;
	cin >> n;
	map<int, int> mp;

	for(int i=0;i<n;i++){
		cin >> a;
		mp[a]++;
	}
	cin >> m;
	for(int i=0;i<m;i++){
		int cnt=0;
		char c;
		while(scanf("%d%c", &a,&c)>0){
			if(mp.find(a)!=mp.end()) cnt++;
			if(c=='\n') break;
		}
		if(cnt>=n) ans++;
	}
	cout << ans << endl;
	return 0;
}
