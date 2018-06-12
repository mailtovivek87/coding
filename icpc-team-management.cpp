#include <iostream>
using namespace std;

int main(){
    int tc,i,len,groupsz,num;
    string str,name;

    cin >> tc;
    while(tc-- > 0){
        cin >> len >> groupsz;
        int arrsize[101] = {0};
        int totalgrps = len/groupsz;
        int sum = 0;
        int poss = 1;
        while(len-- > 0){
            cin >> name;
            arrsize[name.size()]++;
        }
        for(i=0;i<101;i++){
            if(arrsize[i]>0){
                if (arrsize[i]%groupsz==0){
                    num = arrsize[i]/groupsz;
                    if(num==0){
                        poss = 0;
                        break;
                    }
                    else sum = sum+num;
                    if(sum>totalgrps){
                        poss=0;
                        break;
                    }
                }
                else{
                    poss=0;
                    break;
                }
            }
        }
        if(poss==1) cout << "Possible" << endl;
        else cout << "Not possible" << endl;
    }
    return 0;
}
