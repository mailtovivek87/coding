#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    int tc,i;
    string pattern,hay;

    cin >> tc;
    while (tc-- > 0){
        cin >> pattern;
        cin >> hay;
        string rpattern;
        int bf = 0;
        for(i=pattern.size()-1;i>=0;i--)
            rpattern+=pattern[i];
        if (hay.find(pattern) != string::npos) bf=1;
        if (bf == 0){
            if (hay.find(rpattern) != string::npos) bf=1;
        }
        if (bf == 0) cout << "NO";
        else cout << "YES";
        cout << endl;
    }

    return 0;
}
