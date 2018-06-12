#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int tc;
    string input,suvo="SUVO",suvojit="SUVOJIT";
    cin >> tc;
    while(tc-- > 0){
    	cin >> input;
		int len = suvo.size();
		int count = 0;
		char* temp = &input[0];
		if(len){
		    while ((temp = strstr(temp, suvo.c_str()))) {
		        temp += len;
		        count++;
	    	}
		}
		len = suvojit.size();
		int sjcount = 0;
		temp = &input[0];
		if(len){
		    while ((temp = strstr(temp, suvojit.c_str()))) {
		        temp += len;
		        sjcount++;
	    	}
		}
		//cout << count << " " << sjcount << endl;
		cout << "SUVO = " << count-sjcount << ", SUVOJIT = " << sjcount << endl;
    }
    return 0;
}
