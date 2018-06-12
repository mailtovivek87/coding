#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
	int n;
	cin >> n;
	map<int,int> m;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
		m[a[i]]++;
	}
	long long ans = 0;
	map<int,int> vis;
	vis.clear();
	for(int i = 0 ; i < n ; i++){
		m[a[i]]--;
		if(m[a[i]] == 0){
			m.erase(m.find(a[i]));
		}
		if(!vis[a[i]]) {
		  ans += m.size();
		  vis[a[i]] = 1;
		}
	}
	cout << ans << endl;
}
