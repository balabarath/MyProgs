#include<stdio.h>
#define f(i,n) for(i=0;i<n;i++)
int main()
{
    int t,n,v1,v2,i;
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d",&n);
     int a[n];
     v1=n*(n-1)/2;
     v2=0;
     f(i,n)
     {
         scanf("%d",&a[i]);
         v2+=a[i];
     }
     
     printf("%d\n",abs(v1-v2));     
    }
    scanf("%d");
    return 0;
}
