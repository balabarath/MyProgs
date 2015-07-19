#include<stdio.h>
#define end scanf("%d")
#define forp(i,n) for(i=0;i<n;i++)
#define forn(i,n) for(i=n;i>-1;i--)
int main()
{
    int n,i,n1;
    scanf("%d",&n);
    int a[n],t=0;
    if(n==0)
    {
     printf("0\n");
     goto end1;
    }
    while(n>=1)
    {
     a[t++]=n%2;
     n/=2;
    }
    
    forn(i,--t)
   printf("%d",a[i]);
   end1:
   end;
    return 0;
}
