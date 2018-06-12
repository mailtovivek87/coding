#include <iostream>
using namespace std;

int main()
{
    long long int count,answer=1,i;
    long long int* arr = NULL;
    const unsigned int M = 1000000007;
    cin >> count;
    arr = new long long int[count];
    for (i=0;i<count;i++)
        cin >> arr[i];
    for (i=0;i<count;i++){
        answer=(answer*arr[i])%M;
    }
    cout << answer;
    return 0;
}
