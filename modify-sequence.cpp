#include<iostream>
#include<stack>
using namespace std;
int main(){
    long n=0,sum=0,a=0,b=0;
    cin >> n;
    long arr[n];
    if(n==1){
        cin >> a;
        if(a==0) cout << "YES";
        else cout << "NO";
    }
    if(n==2){
        cin >> a >> b;;
        if((a-b)==0) printf("YES");
        else printf("NO");
    }
    if(n>2){
        for(long i=0;i<n;i++) cin >> arr[i];
        sum=arr[0];
        for(long i=1;i<n;i++)
            sum=abs(arr[i]-sum);
        if(sum==0) cout << "YES";
        else cout << "NO";
    }
    return 0;
}
