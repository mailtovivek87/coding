#include<bits/stdc++.h>
using namespace std;
int ar[50005];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(ar,0,sizeof(ar));
		int n,tmp;
		scanf("%d",&n);
		for(int i=1;i<=n;++i)
		{
			scanf("%d",&tmp);
			ar[tmp]++;
		}
		int ans=0,cnt=0,j=0;
		bool pos=true;
		for(int i=1;i<=n;++i)
		{
			while(ar[j]==0)
				j++;
			ar[j]--;
			if(j-cnt<=0)
			{
				pos=false;
				break;
			}
			if(i%6==0 && i!=0)
				cnt++;
			cnt++;
			ans++;
		}
		if(pos)
			printf("Rick now go and save Carl and Judas\n");
		else
			printf("Goodbye Rick\n%d\n",ans);
	}
	return 0;
}
