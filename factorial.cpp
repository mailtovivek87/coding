#include <iostream>
using namespace std;

int main()
{
    long long int icount,f=1,i;
    const unsigned int M = 1000000007;
    cin >> icount;
    if (icount>0){
	    for (i=icount;i>=1;i--){
	        f=(f*i)%M;
	    }
    }
    cout << f;
    return 0;
}
