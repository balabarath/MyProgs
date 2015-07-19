#include<stdio.h>
int main()
{
    int n,m,s,g,d,i,j,t,o_t;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    scanf("%d",&m);
    while(m--)
    {
     scanf("%d %d %d",&s,&g,&d);
     printf("%d %d\n",a[s][g]+a[g][d],a[s][g]+a[g][d]-a[s][d]);
    }
    scanf("%d");
    return 0;
}
