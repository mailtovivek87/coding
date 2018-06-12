#include <iostream>

using namespace std;

int main() {
    int tc,j,temp;
    cin >> tc;

    while (tc-- > 0){
        cin >> j;
        if (j%2 == 0)
            cout << j/2 << " " << j/2;
        else{
            temp = j/2;
            temp = j-temp;
            cout << j/2 << " " << temp;
        }
        cout << endl;
    }
    return 0;
}
