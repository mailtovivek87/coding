#include <iostream>
using namespace std;

int main()
{
    int n,iter,k,A[101];
    int minimum;
    cin >> n >> iter;
    for(int k = 0; k < n ; k++) cin >> A[k];
	    for(int i = 0; i < iter ; i++)  {
			minimum = i ;
			for(int j = i+1; j < n ; j++ ) {
				if(A[ j ] < A[ minimum ]) minimum = j ;
			}
			swap ( A[ minimum ], A[ i ]) ;
	    }
    for(int k = 0; k < n ; k++) cout << A[k] << " ";
    return 0;
}
