#include <iostream>
using namespace std;
int count[900000],count1[900000],t,n,m=0,a[900000],b[900000],z=0,x;
int main()
{
    cin>>t;
    while(t--)
    {cin>>n;
    m=0;
    z=0;
    for(int i=1;i<=n;i++)
    {count[i]=0;
    count1[i]=0;
    }
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    cin>>b[i];
    for(int i=1;i<=n;i++)
    {if(b[a[i]]!=i)
       count[b[a[i]]]++;
       m=max(m,count[b[a[i]]]);
       x=b[a[i]];
       if(x>i)
       if(b[a[x]]==i)
       z++;

       if(a[b[i]]!=i)
       count1[a[b[i]]]++;
       m=max(m,count1[a[b[i]]]);
       x=a[b[i]];
       if(x>i)
       if(a[b[x]]==i)
       z++;
    }
    cout<<m<<" "<<z<<endl;
    }

    return 0;
}
