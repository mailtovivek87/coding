#include <iostream>
using namespace std;

int main()
{
    int i,j;
    int* arr = NULL;

    cin >> i;
    arr = new int[i];
    for (j=0;j<i;j++){
        cin >> arr[j];
    }
    for (j=0;j<i;j++){
        cout << arr[j]-1 << endl;
    }

    delete [] arr;
    arr = NULL;
    return 0;
}
