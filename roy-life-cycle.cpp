#include <iostream>
#include<string>
using namespace std;

int main()
{
	int n,count=0,res1=0,i,j,temp;
	string str,store;
	cin>>n;
	while(n>0){
		cin>>str;
		for(i=0;i<str.size();i++){
			if(str[i]=='C'){
				j=i;temp=0;
				while(str[j]=='C'){
					j++;
					temp++;
				}
				i=j;
				if(temp>count)count=temp;
			}
		}
		if(count>res1)res1=count;
		store+=str;
		n--;
	}
	cout<<count<<" ";
	count=0;
	for(i=0;i<store.size();i++){
		if(store[i]=='C'){
			j=i;temp=0;
			while(store[j]=='C'){
				j++;
				temp++;
			}
			i=j;
			if(temp>count)count=temp;
		}
	}
	cout<<count;
    return 0;
}
