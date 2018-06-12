#include <iostream>
using namespace std;

int main()
{
    int i;
    string str;
    char temp;
    cin >> str;
    for (i=0;i<str.size();i++){
        if ((int)str[i]>=97){
            temp = (int)str[i]-32;
        }
        else {
            temp = (int)str[i]+32;
        }
        cout << temp;
    }
    return 0;
}
