#include <iostream>
#include <map>

using namespace std;

int main (){
    int tc,roll,qry;
    string name;
    map<int,string> m;

    cin >> tc;
    while(tc-- > 0){
        cin >> roll >> name;
        m.insert( make_pair(roll,name));
    }

    cin >> qry;
    while(qry-- > 0){
        cin >> roll;
        cout << m.at(roll) << endl;
    }
  return 0;
}
