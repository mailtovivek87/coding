#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num,i;
    int* days = NULL;
    cin >> num;
    days = new int[num];
    for(i=0;i<num;i++) cin >> days[i];
    sort(days,days+num);
    int max = 0,temp=0;
    for(i=num-1;i>=0;i--){
    	temp = num-i+days[i];
    	if(temp>max) max=temp;
    }
    cout << max+1;
    return 0;
}
