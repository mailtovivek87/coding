#include <iostream>
#include<stack>
using namespace std;
long long mod = 1e9 + 7;
int main()
{
	int t;
	long int n,i,index;
	long long int res,max;

    cin>>t;
    while(t--)
    {
    	max=-1;
    	cin>>n;
    	long long int a[n+1];
    	stack<long int>s1,s2;
    	long long int backward[n+1];
    	long long int forward[n+1];
    	for(i=1;i<=n;i++)
    	cin>>a[i];
    	backward[1]=0;
    	s1.push(1);
    	for(i=2;i<=n;i++)
    	{
    		while((!s1.empty()) && a[i]>a[s1.top()])
    		{
    			s1.pop();
    		}
    		if((!s1.empty()))
    		backward[i]=i-s1.top();
    		else
    		backward[i]=i-1;
    		s1.push(i);
    	}
    	forward[n]=0;
    	s2.push(n);
    	for(i=n-1;i>=1;i--)
    	{
    		while((!s2.empty()) && a[i]>a[s2.top()])
    		{
    			s2.pop();
    		}
    		if((!s2.empty()))
    		forward[i]=s2.top()-i;
    		else
    		forward[i]=n-i;
    		s2.push(i);
    	}
    	for(i=1;i<=n;i++)
    	{
    		res=((forward[i]+backward[i])%mod * i)%mod;
    		if(max<res)
    		{
    			max=res;
    			index=i;
    		}
    	}
    	cout<<index<<"\n";
    }
    return 0;
}
