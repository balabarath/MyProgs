#include<stdio.h>
int n;
int con_set(int,int,int[][]);

int main()
{
    int i,j,t,c;
    scanf("%d",&t);
    while(t--)
    {
     c=0;
     scanf("%d",&n);
     int a[n][n];
     for(i=0;i<n;i++)
     for(j=0;j<n;j++)
     scanf("%d",&a[i][j]);
     for(i=0;i<n;i++)
     for(j=0;j<n;j++)
     if(a[i][j]==1)
     {
      
      c++;
      printf("    %d %d %d\n",i,j,c);
      con_set(i,j,a);
     }
     printf("%d\n",c);
    }
    scanf("%d");
    return 0;
}
int con_set(int i,int j,int pa[n][n])
{
   // printf("    %d %d %d\n",i,j,pa[i][j]);
    pa[i][j]=0;
    if(pa[i][j+1]==1&&j+1<n)
    {
     con_set(i,j+1,pa);
    }
    if(pa[i-1][j-1]==1&&i-1>=0&j-1>=0)//left top corner
    {
     con_set(i-1,j-1,pa);
    }
     if(pa[i-1][j]==1&&i-1>=0)//same row left
    {
     con_set(i-1,j,pa);
    }
     if(pa[i-1][j+1]==1&&i-1>=0&&j+1<n)//315 degree
    {
     con_set(i-1,j+1,pa);
    }
     if(pa[i][j-1]==1&&j-1>=0)//same column top
    {
     con_set(i,j-1,pa);
    }
     if(pa[i+1][j]==1&&i+1<n)//same row right
    {
     
     con_set(i+1,j,pa);
    }
     if(pa[i+1][j-1]==1&&i+1<n&&j-1>=0)//45 degree
    {
     con_set(i+1,j-1,pa);
    }
   
     if(pa[i+1][j+1]==1&&i+1<n&&j+1<n)//360 degree
    {
     con_set(i+1,j+1,pa);
    }
}
