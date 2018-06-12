#include<iostream>

using namespace std;

int main(){
    int tc,i,j,len1,len2,bfound;
    string str1,str2;
    cin >> tc;
    while (tc-- > 0){
        bfound = 0;
        cin >> str1 >> str2;
        len1=str1.size();
        len2=str2.size();
        for(i=0;i<len1;i++){
        	if (i>0)
        		if (str1[i]==str1[i-1])
        		continue;
        	for(j=0;j<len2;j++){
        		if (str1[i] == str2[j]) {
                    bfound=1;
                    break;
                }
        	}
            if (bfound == 1){
                cout << "Yes";
                break;
            }
        }
        if (bfound == 0)
            cout << "No";
        cout << endl;
    }
    return 0;
}
