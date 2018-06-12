#include <iostream>
#include<stack>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long long N,Id;
        cin>>N>>Id;
        stack<long long> s;
        s.push(Id);
        while(N--){
            char ch;
            long long pid;
            cin>>ch;
            if(ch=='P'){
                cin>>pid;
                s.push(pid);
            }
            else{
                long long x=s.top();
                s.pop();
                long long y=s.top();
                s.push(x);
                s.push(y);
            }
        }
        cout<<"Player"<<" "<< s.top()<<endl;
    }
    return 0;
}
