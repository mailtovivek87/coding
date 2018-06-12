#include <iostream>
using namespace std;

int main()
{
    int A[1001],i,k,n;
    int temp;
    cin >> n;
    for(i=0;i<n;i++) cin >> A[i];
    for(k = 0; k< n-1; k++) {
        for(i = 0; i < n-k-1; i++) {
            if(A[ i ] > A[ i+1] ) {
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
    int sum = 0;
    for(i=0;i<n;i++){
    	if(A[i]%2==0){
    		cout << A[i] << " ";
    		sum = sum+A[i];
    	}
    }
    cout << sum << " ";
    sum=0;
    for(i=0;i<n;i++){
    	if(A[i]%2!=0){
    		cout << A[i] << " ";
    		sum = sum+A[i];
    	}
    }
    cout << sum << " ";
}
