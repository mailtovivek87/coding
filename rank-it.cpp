#include <iostream>
using namespace std;
int binarySearch(int a[],int low,int high,int key){
   while(low<high){
     int mid=(low+high)/2;
     if(a[mid]<key) low=mid+1;
     else if(a[mid]>key) high=mid-1;
     else return mid;
   }
   return low;
 }
int binarySearchRev(int a[],int low,int high,int key){
   while(low<high){
     int mid=(low+high)/2;
     if(a[mid]<key) high=mid-1;
     else if(a[mid]>key) low=mid+1;
     else return mid;
   }
   return high;
 }
int main()
{
    int arr[100001],i,tc,rank,q;
    cin >> tc;
    for(i=0;i<tc;i++) cin >> arr[i];
    cin >> rank;
    while(rank-- > 0){
    	cin >> q;
    	if(arr[0]<arr[tc-1])
    		cout << binarySearch(arr,0,tc-1,q)+1 << endl;
    	else
    		cout << 100-binarySearchRev(arr,0,tc-1,q) << endl;
    }
}
