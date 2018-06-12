#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long int tc,sum,temp,pf=0,i;
    cin >> tc >> sum;
    unsigned long int arr[2000001]={0};
    unsigned long int bm[2000001]={0};
    for(i=0;i<tc;i++) scanf("%uld",&arr[i]);
    for(i=0;i<tc;i++){
    	temp = sum-arr[i];
    	if (temp >= 0 && bm[temp] == 1){
    		pf=1;
    		break;
    	}
      	bm[arr[i]] = 1;
  	}
	if (pf==0) printf("NO");
	else printf("YES");

    return 0;
}
