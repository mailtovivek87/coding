#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l,temp;
    string mystring[30];
    cin >> i;

    temp=i;
    while(temp--){
        cin >> mystring[temp];
    }

    for (j=i-1;j>=0;j--){
        int strsize = mystring[j].size();
        for (k=0;k<strsize;k++){
            cout << mystring[j][k];
            if (k<strsize-1)
                l=k+1;
            while (l<=strsize-1)
            {
                if (mystring[j][k]==mystring[j][l])
                    k=l++;
                else
                    break;
            }
        }
        cout << endl;
    }
    return 0;
}
