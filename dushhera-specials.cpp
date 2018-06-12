#include <iostream>

using namespace std;

int main() {
    int tc,p,k,i;
    cin >> tc;

    while (tc-- > 0){
        cin >> p >> k;
        for (i=0;i<p;i++){
            cout << k*(i+1)+(i+1) << " ";
        }
        cout << endl;
    }
    return 0;
}
