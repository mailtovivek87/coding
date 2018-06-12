#include<iostream>
using namespace std;

int main(){
    int n,x,y;
    cin >> n;
    int* v = new int[n];
    for(int i=1;i<=n;i++){
    	cin >> v[i];
    }
    cin >> x >> y;

    int cnt=0,a=x;
    bool ok=false;
    while(1){
    	if(cnt==n) break;
    	if(a==y){
    		ok=true;
    		break;
    	}
    	a=v[a];
    	cnt++;
    }

    cout << (ok?"Yes":"No") << endl;
    return 0;
}
