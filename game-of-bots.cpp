#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    string si,sf;
    cin>>t;
    while(t--){
    	cin>>si>>sf;
    	int length=si.size();
    	int i=0;
    	int j=0;
    	char ti,tf;
    	int flag=0;
    	while(i<length && flag==0){
    		while( i<length && si[i]=='#' )
    			i++;
    		while(j<length  && sf[j]=='#' )
    			j++;
    		if(i<length && j<length){
    			ti=si[i];
    			tf=sf[j];
    			if(ti==tf){
    				if(ti=='A'){
    					if(i<j)
    					flag=1;
    				}
    				else{
    					if(i>j)
    					flag=1;
    				}
    			}
    			else
    			flag=1;
    			i++;
    			j++;
    		}
       	}
       	if(flag==0)
       	cout<<"Yes"<<endl;
       	else
       	cout<<"No"<<endl;
    }
    return 0;
}
