#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main() {
    int arr[10],j;
    string num;
    cin >> num;

    char myArray[num.size()+1];
    strcpy(myArray, num.c_str());

    for(j=0; j<10; j++)
        arr[j]=0;

    int s_len = num.size();

    for(j=0; j<s_len; j++){
        ++arr[(int)myArray[j]-48];
    }

    for(j=0; j<10; j++)
        cout << j << " " << arr[j] << endl;

    return 0;
}
