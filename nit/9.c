#include<stdio.h>
int main()
{
    int t,n,i,j,c[10000];
    scanf("%d",&t);
    while(t--)
    {
     scanf("%d",&n);
     if(n==0||n==1)
     {
      printf("0\n");
      continue;
     }
     n++;
     c[1]=1;
     for(i=2;i<=n;i++)
     {
       c[i]=0;
       for(j=1;j<=i-1;j++)
       {
        c[i]=(c[i]+((c[j]*c[i-j])%100003)%100003);
       }
       c[i]%=100003;
     }
      
    printf("%d\n",c[n]);
   
    }
    return 0;
}
