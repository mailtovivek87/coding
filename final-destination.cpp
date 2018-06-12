#include <iostream>

using namespace std;

int main() {
    int i,j,l=0,r=0;
    string tc;
    char temp;
    cin >> tc;

    for(i=0;i<tc.size();i++){
        if (tc[i] == 'L')
            l--;
        if (tc[i] == 'R')
            l++;
        if (tc[i] == 'U')
            r++;
        if (tc[i] == 'D')
            r--;
    }
    cout << l << " " << r;

    return 0;
}
