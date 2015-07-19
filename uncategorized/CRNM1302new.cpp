#include<stdio.h>
#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,k,i,j,k1,t;
    map<int,int> comp;
    long long sum;
    scanf("%d",&t);
    while(t--)
    {
     sum=0;
     scanf("%d %d %d",&n,&m,&k);
     int a[n][m],f[n][m],r[n][m],l[n*m];
     for(i=0;i<n;i++)
     {
      for(j=0;j<m;j++)
      {
       scanf("%d",&a[i][j]);
       if(j==0)
       f[i][j]=a[i][j];
       else
       f[i][j]+=a[i][j];
      }
     }
     for(i=0;i<n;i++)
     {
      for(j=m-1;j>0;j--)
      {
       if(j==m-1)
       r[i][j]=a[i][j];
       else
       r[i][j]+=a[i][j];
       //printf("%d ",f[i][j]);
      }
      //printf("\n");
     }
     for(i=0,k1=0;i<n;i++)
     {
      for(j=0;j<m;j++,k1++)
       {
         if(f[i][j]<r[i][j])
         {
           l[k1]=f[i][j];
         }
         else
         {
           l[k1]=r[i][j];
         }
       comp[l[k1]]=a[i][j];
       }
     }
     sort(l,l+k1);
     for(i=0;i<k;i++)
     {
      sum+=comp[l[i]];
     }
     cout<<sum<<endl;
    }
    return 0;
}
