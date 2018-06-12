#include <iostream>
using namespace std;

int main()
{
    int l,num,h,w,i;
    cin >> l;
    cin >> num;

    for (i=0;i<num;i++){
        cin >> h >> w;
        if(h<l || w<l)
            cout << "UPLOAD ANOTHER" << endl;
        else if((h==l && w==l)||h==w)
            cout << "ACCEPTED" << endl;
        else
            cout << "CROP IT" << endl;
    }
    return 0;
}
 
