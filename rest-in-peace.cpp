#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int tc,i;
    string temp;
    cin >> tc;
    for(i=0;i<tc;i++) cin>>arr[i];
    for(i=0;i<tc;i++){
    	temp = to_string(arr[i]);
    	if (temp.find("21") != string::npos) cout << "The streak is broken!";
    	else if (arr[i]%21==0) cout << "The streak is broken!";
    	else cout << "The streak lives still in our heart!";
    	cout << endl;
    }
}
