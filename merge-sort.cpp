#include <bits/stdc++.h>

using namespace std;

long int _mergeSort(long int arr[], long int temp[], long int left, long int right);
long int merge(long int arr[], long int temp[], long int left, long int mid, long int right);
long int mergeSort(long int arr[], long int array_size)
{
    long int *temp = (long int *)malloc(sizeof(long int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}
long int _mergeSort(long int arr[], long int temp[], long int left, long int right)
{
  long int mid, inv_count = 0;
  if (right > left)
  {
    mid = (right + left)/2;
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
    inv_count += merge(arr, temp, left, mid+1, right);
  }
  return inv_count;
}
long int merge(long int arr[], long int temp[], long int left, long int mid, long int right)
{
  long int i, j, k;
  long int inv_count = 0;

  i = left; /* i is index for left subarray*/
  j = mid;  /* i is index for right subarray*/
  k = left; /* i is index for resultant merged subarray*/
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
      inv_count = inv_count + (mid - i);
    }
  }
  while (i <= mid - 1)
    temp[k++] = arr[i++];
  while (j <= right)
    temp[k++] = arr[j++];
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
  return inv_count;
}
int main()
{
  long int tc;
  long int arr[1000001];
  scanf("%ld", &tc);
  for(int i=0;i<tc;i++) scanf("%ld",&arr[i]);
  printf("%ld",mergeSort(arr, tc));
  return 0;
}
