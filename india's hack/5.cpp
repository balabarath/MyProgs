#include<stdio.h>

int num=0;
int n,r,t;
long long c(int n,int r)
{
     if(n==r) return 1;
     if(r==1) return n;
     return c(n-1,r) + c(n-1,r-1);
}
int main()
{
    
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d %d",&n,&r);
    printf("%lld",c(n,r));
     
    }
    scanf("%d");
    return 0;
}


