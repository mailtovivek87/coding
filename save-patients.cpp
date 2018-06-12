#include <iostream>
using namespace std;

int main()
{
    int n,i,temp;
    int A[10],B[10];
    cin >> n;
    for(i=0;i<n;i++) cin >> A[i];
    for(i=0;i<n;i++) cin >> B[i];
    for(int k = 0; k< n-1; k++) {
        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
    for(int k = 0; k< n-1; k++) {
        for(int i = 0; i < n-k-1; i++) {
            if(B[ i ] > B[ i+1] ) {
                temp = B[ i ];
                B[ i ] = B[ i+1 ];
                B[ i + 1] = temp;
            }
        }
    }
    int no = 0;
    for(i=0;i<n;i++){
    	if(A[i]<B[i]){
    		no = 1;
    		break;
    	}
    }
    if(no == 1) cout << "No";
    else cout << "Yes";
    return 0;
}
