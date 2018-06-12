#include <iostream>
using namespace std;

int main()
{
    int i,s,temp,fl=1;
    string str;
    cin >> str;
    s = str.size();
    temp = s-1;

    for (i=0;i<s/2;i++){
        if (str[i] != str [temp]){
            fl = 0;
            break;
        }
        temp--;
    }

    if (fl==0)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}
