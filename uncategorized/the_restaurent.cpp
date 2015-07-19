//02-05-12 23:47
#include<stdio.h>
#include<math.h>
#include<iostream>
int main()
{
    int t,n;
    long x[1001],y[1001],i,j,c,xmin,ymin,xmax,ymax,k;
    long long co,tem;
    scanf("%d",&t);
    while(t--)
    {
      xmin=ymin=xmax=ymax=tem=0;
      c=0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
       scanf("%ld %ld",&x[i],&y[i]);
       if(x[i]<xmin)
       xmin=x[i];
       if(x[i]>xmax)
       xmax=x[i];
       if(y[i]>ymax)
       ymax=y[i];
       if(y[i]<ymin)
       ymin=y[i];
      }
      tem=999999999;
      for(i=xmin;i<=xmax;i++)
      {
        for(j=ymin;j<=ymax;j++)
        {
         co=0;
         for(k=0;k<n;k++)
         {
          co=co+abs(i-x[i])+abs(j-y[j]);
         }
         if(co<tem)
         {
          c=1;
          tem=co;
         } 
         else if(co==tem)
         c++;
        }
      }
      printf("%ld\n",c);
    }
    //scanf("%d");
    return 0;
}
