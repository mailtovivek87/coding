#include <iostream>
using namespace std;

int main(){
    int nswap,i;
    string str;
    char a,b;
    int val[256]={0};
    for(i=0;i<255;i++) val[i]=i;

    cin >> nswap;
    while(nswap-- > 0){
        cin >> a >> b;
        for(i=0;i<255;i++){
            if (val[i]==(int)a){
                val[i]=(int)b;
                val[i+32]=(int)b+32;
                continue;
            }
            if (val[i]==(int)b){
                val[i]=(int)a;
                val[i+32]=(int)a+32;
            }
        }
    }
    cin >> str;
    for(i=0;i<str.size();i++) cout<<(char)val[str[i]];
    return 0;
}
