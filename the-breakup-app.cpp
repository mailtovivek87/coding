#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tc,i;
    cin >> tc;
    int arr[32]={0},date=1,g=0;
    string msg,str;
    while(tc-- > 0){
    	getline(cin,msg);
    	if(msg[0]=='G') g=1;
    	else g=0;
    	for(i=0;i<msg.size();i++){
    		if(msg[i]>47 && msg[i]<58){
    			str = msg[i];
    			if(msg[i+1]>47 && msg[i+1]<58){
    				str+=msg[i+1];i++;
    			}
    			//cout << "str is " << str << endl;
    			if (g==1) arr[atoi(str.c_str())]+=2;
    			else arr[atoi(str.c_str())]++;
    		}
    	}
    }
    int max = arr[0],dt;
    for(i=1;i<32;i++){
    	if(arr[i]>max){
    		max = arr[i];
    		dt = i;
    	}
    }
    for(i=1;i<32;i++){
    	if(i==dt) continue;
    	if(arr[i]==max){
    		date=0;
    		break;
    	}
    }
    if(date==1){
    	if(dt<19||dt>20)
    		date = 0;
    }
    if (date == 1) cout << "Date";
    else cout << "No Date";
}
