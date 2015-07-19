#include<stdio.h>
short int a[1000][1000];
int n;
int call1(int i,int j)
{
   a[i][j]==0;
   if(i+1==n)
   return 1;
   
   if((i+1<n)&&(a[i+1][j]==1))
   return call1(i+1,j);
   if((j+1<n)&&(a[i][j+1]==1))
   return call1(i,j+1);
   if((i+1<n)&&(j+1<n)&&(a[i+1][j+1]==1))
   return call1(i+1,j+1);
   if((i-1>=0)&&(a[i-1][j]==1))
   return call1(i-1,j);
   if((j-1>=0)&&(a[i][j-1]==1))
   return call1(i,j-1);
   if((i-1>=0)&&(j-1>=0)&&(a[i-1][j-1]==1))
   return call1(i-1,j-1);
   if((i-1>=0)&&(j+1<n)&&(a[i-1][j+1]==1))
   return call1(i-1,j+1);
   if((i+1<n)&&(j-1>=0)&&(a[i+1][j-1]==1))
   return call1(i+1,j-1);
   
   
    return 0;
}

int call2(int i,int j)
{
   a[i][j]==0;
   if(j+1==n)
   return 1;
   
   if((i+1<n)&&(a[i+1][j]==2))
   return call2(i+1,j);
   if((j+1<n)&&(a[i][j+1]==2))
   return call2(i,j+1);
   if((i-1>=0)&&(a[i-1][j]==2))
   return call2(i-1,j);
   if((j-1>=0)&&(a[i][j-1]==2))
   return call2(i,j-1);
   if((i+1<n)&&(j+1<n)&&(a[i+1][j+1]==2))
   return call2(i+1,j+1);
   if((i-1>=0)&&(j-1>=0)&&(a[i-1][j-1]==2))
   return call2(i-1,j-1);
   if((i-1>=0)&&(j+1<n)&&(a[i-1][j+1]==2))
   return call2(i-1,j+1);
   if((i+1<n)&&(j-1>=0)&&(a[i+1][j-1]==2))
   return call2(i+1,j-1);
   
   
    return 0;
}

int main()
{
    int i,j,f1=0,f2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    for(j=0;j<n;j++)
    {
     if(a[0][j]==1)
      if(call1(0,j)==1)
      {
       f1=1;
       break;
      }
    }
   
     for(j=0;j<n;j++)
    {              
     if(a[j][0]==2)
      if(call2(j,0)==1)
      {
       f2=1;
       break;
      }
    }
    if(f1==1)
    {
     if(f2==1)
     printf("AMBIGUOUS");
     else
     printf("1");
     return 0;
    }
    else
    {
     if(f2==1)
     printf("2");
     else
     printf("0");
    }
  //  scanf("%s");
    return 0;
}
