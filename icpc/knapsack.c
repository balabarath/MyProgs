#include<stdio.h>
int max(int x,int y)
{
    if(x>y)
    return x;
    return y;
} 
int main()
{
    int n,mw,i,j;
    scanf("%d %d",&n,&mw);
    int c[n][mw],wi[n],vi[n];
    for(i=0;i<n;i++)
    scanf("%d %d",&wi[i],&vi[i]);
    for(i=0;i<=n;i++)
    c[i][0]=0;
    for(i=0;i<=mw;i++)
    c[0][i]=0;
    for(i=1;i<=n;i++)
     for(j=1;j<=mw;j++)
     {
      if(wi[i]>j)
      c[i][j]=c[i-1][j];
      else
      c[i][j]=max(c[i-1][j],c[i-1][j-wi[i]]+vi[i]);
     }
     printf("  \n %d  ",c[n][mw]);
     scanf("%d");
    return 0;
}
