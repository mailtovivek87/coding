#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<pair<long long int, string> >q ;
    while(n--)
    {  string s;
    long long int temp;
        cin>>s>>temp;
        temp=temp*(-1);
        q.push_back(make_pair(temp,s));

    }
    sort(q.begin(), q.end());
    for(int i=0;i<t;i++)
    {
        cout<<q[i].second<<endl ; //<<" "<<(-1)*q[i].first<<endl;
    }
    q.clear();

    return 0;
}
