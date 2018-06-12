#include <iostream>
#include <string>

using namespace std;

int main (){
    int tc,i,qry,dual,j;
    string str;

    cin >> tc;
    while(tc-- > 0){
        dual=0; int ch[26]={0};
        cin >> str;;
        for(i=0;i<str.size();i++){
            ch[(int)str[i]-97]++;
            for (j=0;j<26;j++){
                if(ch[j]>1){
                    dual = 1;
                    break;
                }
            }
            if (dual==1){
                cout << "Yes" << endl;
                break;
            }
        }
        if(dual==0) cout << "No" << endl;
    }
  return 0;
}
