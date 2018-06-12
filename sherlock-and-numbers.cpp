#include <stdio.h>
int main()
{
    int t,k,i;
    long int n,p;
    scanf("%d",&t);
    while(t--)
    {
      scanf("%ld%d%ld",&n,&k,&p);
      long int a[k];
      for(i=0;i<k;i++)
         	scanf("%ld",&a[i]);
      if(p>(n-k))
       printf("-1\n");
      else
      {
        i=0;
        while((i<k)&&a[i]<=p)
             {
             	i++;
             	p=p+1;
             }
        printf("%ld\n",p);
      }
    }
    return 0;
}
