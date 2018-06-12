#include <iostream>
#include <string>

using namespace std;

int main (){
    int i,tc,res,ops;
    string s,t;
    cin >> tc;
    while(tc-- > 0){
        int chs[26]={0};
        int cht[26]={0};
        ops = 0;
        cin >> s >> t;
        for(i=0;i<s.size();i++) chs[(int)s[i]-97]++;
        for(i=0;i<t.size();i++) cht[(int)t[i]-97]++;
        for(i=0;i<26;i++){
            res = chs[i]-cht[i];
            ops = ops+abs(res);
        }
        cout << ops << endl;
    }

  return 0;
}
 
