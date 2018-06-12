#include <iostream>
using namespace std;

int main()
{
   // cout << "Hello World!" << endl;

    int n,q,x,first,l,r,p,i;

   scanf("%d %d",&n,&q);

  	string A="";

  	char B;


   for( i=1;i<=n;i++)
   {
   		cin>>B;
   		A+=B;
   }

 	//cout<<A<<endl;

   for( i=1;i<=q;i++)
   {
   		scanf("%d",&first);

   		if(first==1)
   		{
   			scanf("%d",&x);

   			if(A[x-1]=='0')
   				A[x-1]='1';
   			else
   				A[x-1]='0';
   		}
   		else
   		{
   			scanf("%d %d",&l,&r);

   			if(A[r-1]=='1')
   			{
   				printf("ODD\n");
   			}
   			else
   				printf("EVEN\n");
   		}
   }
    return 0;
}
