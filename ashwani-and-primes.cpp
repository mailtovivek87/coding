#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long int n, i, flag=0, tc, sq, s, j, temp,arr[1000001],st=0,prevs=0,preve=0,t;
  cin >> tc;

  while(tc-- > 0){
      cin >> s >> n;
      temp=0;
      if (prevs==s && preve==n){
      	while(arr[temp]!=0){
      		cout << arr[temp] <<endl;
      		temp++;
      	}
      }
      else{
      	  for(i=0;i<1000001;i++)
      	  	arr[i]=0;
	      t=s; st=0;
	      if (s<2) s=2;
	      for(i=s;i<=n;++i){
	          flag=0;
	          sq = (long int)sqrt(i);
	          for(j=2;j<=sq;++j){
	              if(i%j==0){
	                  flag=1;
	                  break;
	              }
	          }
	          if (flag==0){
	            cout << i << endl;
	            arr[st]=i;st++;
	          }
	      }
      }
      prevs=t;preve=n;
      cout << endl;
  }
  return 0;
}
