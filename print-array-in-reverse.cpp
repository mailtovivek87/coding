#include <iostream>
using namespace std;

int main()
{
    int tc,i;
    cin >> tc;
    int* arr = new int[tc];
    for(i=0;i<tc;i++)
    	cin >> arr[i];
    for(i=tc-1;i>=0;i--)
    	cout << arr[i] << endl;

    return 0;
}
