#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	set<int> s,ss;
	map<int, int> m;
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	int j=0;
	for(int i=0;i<n;i++)
	{
		while(j<n && ss.size() < s.size())
		{
			m[a[j]]++;
			if(m[a[j]]==1)
				ss.insert(a[j]);
			j++;
		}
		if(ss.size()==s.size())
			ans+=n-j+1;
		m[a[i]]--;
		if(m[a[i]]==0)
			ss.erase(a[i]);
	}
	cout<<ans;
    //cout << "Hello World!" << endl;
    return 0;
}
