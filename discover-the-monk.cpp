#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,q,x,temp,i;
	map<int,int> m;
	cin>>n>>q;
	for(i=0;i<n;i++){
		cin>>temp;
		if(m.find(temp)==m.end()) m.insert(make_pair(temp,1));
	}
	for(i=0;i<q;i++){
		cin>>x;
		if(m.find(x)!=m.end()) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}
