#include <bits/stdc++.h>
using namespace std;

int fast_pow(long long base, long long n,long long M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}
int findMMI_fermat(int n,int M)
{
    return fast_pow(n,M-2,M);
}
int main()
{
    long long fact[1000000];
    fact[0]=1;
    int i=1;
    int MOD=1000000007;
    while(i<=1000000)
    {
        fact[i]=(fact[i-1]*i)%MOD;
        i++;
    }
    int n,r=6;
    scanf("%d",&n);
    long long numerator,denominator,mmi_denominator,ans;
    numerator=fact[n];
    denominator=(fact[r]*fact[n-r])%MOD;
    mmi_denominator=findMMI_fermat(denominator,MOD);
    ans=(numerator*mmi_denominator)%MOD;
    printf("%lld\n",ans);
    return 0;
}
