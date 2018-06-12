#include <iostream>

using namespace std;

int main()
{
    int i,j,k,temp;
    string mystring[30];
    cin >> i;

    temp=i;
    while(temp--){
        cin >> mystring[temp];
    }

    for (j=i-1;j>=0;j--){
        int strsize = mystring[j].size();
        for (k=strsize-1;k>=0;k--){
            cout << mystring[j][k];
        }
        cout << endl;
    }
    return 0;
}
