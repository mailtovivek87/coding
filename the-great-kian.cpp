#include <iostream>
using namespace std;

int main()
{
    long int* arr = NULL;
    long int tc,i,f=1,s=2,t=3,fn=0,sn=0,tn=0;
    cin >> tc;
    arr = new long int[tc];
    for(i=0;i<tc;i++) cin >> arr[i];
    for(i=0;i<tc;i++){
    	if(i+1==f){
    		fn+=arr[i];
    		f+=3;
    	}
    	if(i+1==s){
    		sn+=arr[i];
    		s+=3;
    	}
    	if(i+1==t){
    		tn+=arr[i];
    		t+=3;
    	}
    }
    cout << fn << " " << sn << " " << tn;
    return 0;
}
