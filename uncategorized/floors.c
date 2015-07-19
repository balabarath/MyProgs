#include<stdio.h>
int main()
{
    int n,m,cints[101],cfloats[101],i,j,sum,t,t1,t2,max;
    scanf("%d",&t);
    while(t--)
    {
     max=100;
     sum=0;
     scanf("%d %d",&m,&n);
     //memset(cints,0,100);
     //memset(cfloats,0,100);
     for(i=1;i<=100;i++)
     {
      cints[i]=cfloats[i]=0;
     }
    // for(i=0;i<m;i++)
     for(i=0;i<m;i++)
     {
      scanf("%d %d",&t1,&t2);
      cints[t2]+=t1;
     }
     for(i=0;i<n;i++)
     {
      scanf("%d %d",&t1,&t2);
      cfloats[t2]+=t1;
     }
     while(max--)
     {
      cints[max]-=cfloats[max];
      if(cints[max]<0)
      sum+=cints[max];
     }
     if(sum<0)
     printf("%d\n",-sum);
     else 
     printf("0\n");
    }
    return 0;
}
