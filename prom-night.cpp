#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tc,i,bc,gc;
    int *g=NULL;
    int *b=NULL;
    cin >> tc;
    while(tc-- > 0){
    	int dance = 1;
    	cin >> bc >> gc;
    	b = new int[bc];g = new int[gc];
    	for(i=0;i<bc;i++) cin >> b[i];
    	for(i=0;i<gc;i++) cin >> g[i];
    	if(gc<bc){
    		dance=0;
    		cout << "NO" << endl;
    		continue;
    	}
    	sort(b,b+bc);
    	sort(g,g+gc);
    	int pos = 0;
    	for(i=0;i<bc;i++){
    		if(b[i]>g[pos]){
    			pos++;
    			continue;
    		}
    		else{
    			dance=0;
    			break;
    		}
    	}
    	if(dance==0) cout << "NO" << endl;
    	else cout << "YES" << endl;
    }
    return 0;
}
