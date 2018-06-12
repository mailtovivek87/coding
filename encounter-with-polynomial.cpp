#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,k,ans,tc;
    cin >> tc;
    while(tc-- > 0){
		cin>>a>>b>>c>>k;c-=k;
		if(b*b-4*a*c<=0||c>=0) cout<<"0\n";
		else{
			ans=ceil((sqrt(b*b-4*a*c*1.0)-b)/(2*a));
			cout<<ans<<endl;
		}
    }
    return 0;
}
