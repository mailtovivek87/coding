#include <iostream>
#include <string>

using namespace std;

int main (){
    int i,tc,ops,hold1,hold2,j;
    string s,t;
    cin >> tc;
    while(tc-- > 0){
        int chs[26][2];
        for(i=0;i<26;i++){
            chs[i][0]=i+1;
            chs[i][1]=0;
        }
        cin >> s;
        for(i=0;i<s.size();i++) chs[(int)s[i]-97][1]++;
        for (i=0;i<26;i++){
            for (j=0;j<25;j++){
                if (chs[j][1] < chs[j+1][1]){
                    hold1 = chs[j][1];
                    hold2 = chs[j][0];
                    chs[j][1] = chs[j+1][1];
                    chs[j][0] = chs[j+1][0];
                    chs[j+1][1] = hold1;
                    chs[j+1][0] = hold2;
                }
            }
        }
        for(i=25;i>=0;i--){
            cout << (char)(chs[i][0]+96)<< " ";
        }
        cout << endl;
    }

  return 0;
}
 
