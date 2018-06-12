#include <iostream>
#include <queue>

using namespace std;

int main ()
{
    int tc,num;
    char qry;
    cin >> tc;
    queue <int> q;
    while (tc-- > 0){
        cin >> qry;
        if (qry == 'E'){
            cin >> num;
            q.push(num);
            cout << q.size() << endl;
        }
        else{
            if (q.size()==0) cout << "-1 0" << endl;
            else{
                cout << q.front();
                q.pop();
                cout << " " << q.size() << endl;
            }
        }
    }
    return 0;
}
