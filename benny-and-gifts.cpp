#include <iostream>
#include <set>
using namespace std;

int main()
{
    set< pair<int,int> > st;
    string str;
    int r=0,c=0,i;
    cin >> str;
    st.insert(make_pair(0,0));
    for(i=0;i<str.size();i++){
    	if(str[i]=='L') c--;
    	if(str[i]=='R') c++;
    	if(str[i]=='U') r++;
    	if(str[i]=='D') r--;
    	st.insert(make_pair(r,c));
    }
    cout << str.size()+1-st.size();
    return 0;
}
