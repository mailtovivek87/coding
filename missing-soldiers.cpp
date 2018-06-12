#include <iostream>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;
vector<pair<ll,ll>> v;
ll n,x,y,d,a,sum=0;
int main()
{
   cin>>n;
   for(int i=0;i<n;i++)
   {cin>>x>>y>>d;
     v.push_back(make_pair(x,x+d));
   }
   sort(v.begin(),v.end());
   a=1;
   for(auto i=v.begin();i!=v.end();i++)
   {a=max(a,i->first);
    if(i->second>=a)
   { sum+=(i->second-a+1);
    a=i->second+1;
   }
   }
   cout<<sum;
    return 0;
}
