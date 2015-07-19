#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n,k,sum1,i,t,sum2;
    scanf("%d",&t);
    while(t--)
    {
     sum1=sum2=0;
     scanf("%d %d",&n,&k);
     int a[n];
     for(i=0;i<n;i++)
     {
      scanf("%d",&a[i]);
     }
     sort(a,a+n);
     if(k<=n/2)
     {
      for(i=0;i<k;i++)
      sum1+=a[i];
      for(;i<n;i++)
      sum2+=a[i];
     }
     else
     {
      for(i=0;i<(n-k);i++)
      sum1+=a[i];
      for(;i<n;i++)
      sum2+=a[i];
     }
     printf("%d\n",abs(sum1-sum2));
    }
    return 0;
}
