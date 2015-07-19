#include <stdio.h>

int main()
{
    int t,n,num,i;
    scanf("%d",&t);
    while(t--)
    {
      num=0;
      scanf("%d",&n);
      for(i=1;i*i<=n;i++)
      {
       num+=(n/i)-(i-1); 
      }
      printf("%d\n",num);
    }
    return 0;
}
