#include <iostream>
#include <string>

using namespace std;

int main (){
    int i,qry,maxn,j,pos;
    string str;
    int ch[256]={0};
    getline(cin,str);
    for(i=0;i<str.size();i++){
        ch[(int)str[i]]++;
    }
    maxn=0;
    for(i=0;i<256;i++){
        if(ch[i]>maxn) {
            maxn=ch[i];
            pos=i;
        }
    }

    cout << (char)pos << " " << maxn;

  return 0;
}
