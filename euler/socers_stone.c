#include<stdio.h>
int main()
{
    int t,n,sum,ext,i,temp;
    scanf("%d",&t);
    while(t--)
    {
     sum=ext=0;
     scanf("%d",&n);
     while(n--)
     {
      scanf("%d",&i);
      if(i>0)
      sum+=i;
      else
      {
       if((sum+i)>0)
       sum+=i;
       else
       {
       temp=(1-sum-i);
       ext+=temp;
       sum=1;
       }
       printf("           %d    %d\n",ext,sum);
      }
      
     }
     printf("%d",ext);
    }
    //scanf("%d");
    return 0;
}
