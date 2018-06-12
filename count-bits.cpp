#include<stdio.h>

int countSetBits(unsigned int n)
{
  unsigned int count = 0;
  while(n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}

int main()
{
    int i,j;
    scanf ("%d",&i);

    while (i-- > 0)
    {
    	scanf ("%d",&j);
    	printf("%d\n", countSetBits(j));
    }
    return 0;
}
