#include <iostream>
using namespace std;

int main()
{
    int arr[100001];
    int tc,ele,i,pos=0;
    cin >> tc >> ele;
    for(i=0;i<tc;i++) cin >> arr[i];
    for(i=0;i<tc;i++){
    	if (arr[i]==ele)
    		pos = i+1;
    }
    if(pos == 0) pos = -1;
    cout << pos;
}
