#include<stdio.h>
int main()
{
    int n,m,i,j,f1=0,f2=0,f3=0;
    scanf("%d %d",&n,&m);
    int a[n][n];
    for(i=0;i<n;i++)
     for(j=0;j<m;j++)
     scanf("%d",&a[i][j]);
    
    for(i=1;i<n-1;i++)
    {
      if((a[i][0]==a[i-1][0])||(a[i][0]==a[i+1][0]))
      {
        printf("NO");
        goto end;                                              
      }
    }
    for(i=0;i<n;i++)
    {
     for(j=1;j<m-1;j++)
     {
      if(a[i][j]!=a[i][j-1])
      {
        printf("NO");
        goto end;                                              
      }
     }
    }
    printf("YES");
    end:
        scanf("%d");
        return 0;
}
