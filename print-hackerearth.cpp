#include <iostream>
#include<string>
using namespace std;
int main()
{
long int n,m;
int s[7]={0};
char Str[1000000];
cin>>n;
cin>>Str;
for(int i=0;i<n;i++)
{
if(Str[i]=='h') s[0]++;
else if(Str[i]=='a') s[1]++;
else if(Str[i]=='c') s[2]++;
else if(Str[i]=='k') s[3]++;
else if(Str[i]=='e') s[4]++;
else if(Str[i]=='r') s[5]++;
else if(Str[i]=='t') s[6]++;
}
s[0]/=2;
s[1]/=2;
s[4]/=2;
s[5]/=2;
//m=s[0]+s[1]+s[2]+s[3]+s[4]+s[5]+s[6];
m=s[0];
for(int i=0;i<7;i++)
{
if(s[i]<m) m=s[i];
}
cout<<m;
return 0;
}
