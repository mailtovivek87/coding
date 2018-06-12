#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long int n, i, flag=0, tc, sq;
  cin >> tc;

  while(tc-- > 0){
  	  flag=0;
      cin >> n;
      sq = (long int)sqrt(n);
      for(i=2;i<=sq;++i)
      {
          if(n%i==0)
          {
              flag=1;
              break;
          }
      }
      if (flag==0)
          cout << "prime";
      else
          cout << "composite";
      cout << "\n";
  }
  return 0;
}
