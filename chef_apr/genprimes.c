#include<stdio.h>
int main()
{
    int t=10000,i,f,j,n=1,a[10000];
    a[0]=2;
    for(i=3;i<t;i+=2)
    {
     f=0;
     for(j=0;j<n;j++)
     if(i%a[j]==0)
     {
      f=1;
      break;
     }
     if(!f)
     {
      printf("%d,",a[n-1]);
      a[n++]=i;
     }
    }
    printf("    %d",n);
    return 0;
}
