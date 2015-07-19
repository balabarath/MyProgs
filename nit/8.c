#include<stdio.h>
char a[102][102];
int n;
int call(int i,int j)
{
    a[i][j]='.';
    if((a[i+1][j]=='S')&&((i+1)<n))
    call(i+1,j);
    if((a[i-1][j]=='S')&&((i-1)>=0))
    call(i-1,j);
    if((a[i][j+1]=='S')&&((j+1)<n))
    call(i,j+1);
    if((a[i][j-1]=='S')&&((j-1)>=0))
    call(i,j-1);
    if((a[i+1][j+1]=='S')&&((i+1<n)&&(j+1)<n))
    call(i+1,j+1);
    if((a[i+1][j-1]=='S')&&((i+1<n)&&(j-1)>=0))
    call(i+1,j-1);
    if((a[i-1][j+1]=='S')&&((i-1>=0)&&(j+1)<n))
    call(i-1,j+1);
    if((a[i-1][j-1]=='S')&&((i-1>=0)&&(j-1)>=0))
    call(i-1,j-1);
    return 0;
}
int main()
{   
    int t,i,j,c;
    scanf("%d",&t);
    while(t--)
    {
     c=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%s",a[i]);
     for(i=0;i<n;i++)
     {
      for(j=0;j<n;j++)
      {
       if(a[i][j]=='S')
       {
        c++;
        call(i,j);
       }
      }
     }
     if(c%2==1)
     printf("Alice\n");
     else
     printf("Bob\n");
    }
    return 0;
}
