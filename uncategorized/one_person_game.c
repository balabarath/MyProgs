#include<stdio.h>
int m,n,count,f;
int con_set(int,int,int[][]);
int main()
{
    int i,j,t,num,n1,n2;
    scanf("%d",&t);
    while(t--)
    {
    count=num=0;
    f=1;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        if(a[i][j]>num)
        {
         num=a[i][j];
         n1=i;
         n2=j;
         }
      }
      
    }
    con_set(n1,n2,a);
     printf("%d\n",count);
    }
    return 0;
}
int con_set(int i,int j,int a[m][n])
{
     f=0;
     count+=a[i][j];
     //printf("%d\n",count);
     a[i][j]=0;
     if(a[i+1][j]&&i+1<m)
     {
      con_set(i+1,j,a);
      f=1;
     }
     if(a[i][j+1]&&j+1<n)
     {
      con_set(i,j+1,a);
      f=1;
     }
     if(a[i-1][j]&&i-1>=0)
     {
      con_set(i-1,j,a);
      f=1;
     }
     if(a[i][j-1&&j-1>=0])
     {
      con_set(i,j-1,a);
      f=1;
     }
     if(f==0)
     {
     return 0;
     }
}
     
     

