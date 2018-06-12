#include <iostream>
using namespace std;

int partition(int *A, int start, int end){
	int pivot = A[end];
	int parindex = start;
	for(int i=start;i<end;i++){
		if(A[i]<=pivot){
			swap(A[i],A[parindex]);
			parindex++;
		}
	}
	swap(A[parindex],A[end]);
	return parindex;
}

void qs(int *A,int start,int end){
	if(start<end){
		int par = partition(A,start,end);
		qs(A,start,par-1);
		qs(A,par+1,end);
	}
}

int main()
{
    int tc,i,arr[100001];
    cin >> tc;
    for(i=0;i<tc;i++) cin >> arr[i];
    qs(arr,0,tc-1);
    for(i=0;i<tc;i++) cout << arr[i] << " ";

    return 0;
}
