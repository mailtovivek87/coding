#include <iostream>
using namespace std;

int main()
{
    int n,i,swap=0,temp;
	cin >> n;
	int* A = new int[n];
	for(i=0;i<n;i++) cin >> A[i];
    for(int k = 0; k< n-1; k++) {
        for(i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
                swap++;
            }
        }
    }
    cout << swap << endl;
    return 0;
}
