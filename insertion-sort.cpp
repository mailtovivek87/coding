#include <iostream>

using namespace std;

int main()
{
    int tc,i;
    int num[101],pos[101];
    cin >> tc;
    for(i=0; i<tc; i++) cin >> num[i];
	for(i=0; i<tc; i++) pos[i]=num[i];

	int temp;
    for(int k = 0; k< tc-1; k++) {
        for(i = 0; i < tc-k-1; i++) {
            if(num[ i ] > num[ i+1] ) {
                temp = num[ i ];
                num[ i ] = num[ i+1 ];
                num[ i + 1] = temp;
            }
        }
    }

    for(i=0;i<tc;i++){
    	for(int k=0;k<tc;k++){
    		if(pos[i]==num[k]) cout << k+1 << " ";
    	}
    }
}
