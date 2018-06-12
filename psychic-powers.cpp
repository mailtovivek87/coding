#include <iostream>

using namespace std;

int main() {
    int i,j;
    string tc;
    char temp;
    cin >> tc;

    for(i=0;i<tc.size();i++){
        temp = tc[i];
        j=1;
        while (tc[j+i] == temp){
            j++;
        }
        if (j == 6)
        {
            cout << "Sorry, sorry!";
            break;
        }
    }
    if (j<6)
        cout << "Good luck!";

    return 0;
}
