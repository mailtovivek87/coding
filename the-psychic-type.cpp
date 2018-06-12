#include <iostream>
using namespace std;

int main()
{
    int i,j,cnt,start,endn,bfound=0,fl=0,temp=0;;
    int* nums = NULL;
    cin >> cnt;
    nums = new int[cnt];

    for(i=0;i<cnt;i++){
        cin >> nums[i];
    }
    cin >> start >> endn;
	if (start == endn)
		cout << "Yes";
	else{
	    for(i=0;i<cnt;i++){
	        if(nums[i]==endn){
	            bfound=1;
	            break;
	        }
	    }
	    i=start;
	    if(bfound==1){
	        while(temp<cnt){
	            i=nums[i-1];
	            //cout << i << endl;
	            if(i==endn){
	                fl=1;
	                break;
	            }
	            temp++;
	        }
	        if(fl==1)
	            cout << "Yes";
	        else
	            cout << "No";
	    }
	    else
	        cout << "No";
	}

    return 0;
}
