#include <bits/stdc++.h>

using namespace std;

int main(){
    int l;
    char s[10001];
    char asc[129]={0};
    scanf("%d\n",&l);
    gets(s);
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    int j=0;
    for(j=0;j<i;j++){
        int a=s[j];
        asc[a]=1;
    }
    if(asc[97]==1 && asc[101]==1 && asc[105]==1 && asc[111]==1 && asc[117]==1) printf("YES");
    else printf("NO");

return 0;
}
