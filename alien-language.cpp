#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1,str2;
    int tc,i,j,bfound;

    cin >> tc;
    while(tc-- > 0){
    	int arr1[26]={0};
    	int arr2[26]={0};
    	bfound = 0;
        cin >> str1 >> str2;
        for(i=0;i<str2.size();i++) arr2[str2[i]-97]++;
        for(i=0;i<str1.size();i++) arr1[str1[i]-97]++;
        for(i=0;i<26;i++){
        	if(arr1[i]>0 && arr2[i]>0){
        		bfound=1;
        		break;
        	}
        }
        if (bfound == 1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
