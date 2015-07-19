#include<iostream>
using namespace std;
int max(int i, int j)
{
    if(i >= j)
         return i;
         return j;
}
int main()
{
    int t,n,m,i,j,l;
    cin>>t;
    while(t--)
    {
      cin>>n>>m;
      l=1;
      int a[n][m];
      for(i=0;i<n;i++)
        for(j=0;j<m;j++)
          cin>>a[i][j];
      
      for(i=1;i<n;i++)
         a[i][0]+=a[i-1][0];
      for(j=1;j<m;j++)
         a[0][j]+=a[0][j-1];
      
      for(i=1;i<n;i++)
      {
        for(j=1;j<m;j++)
        {
           a[i][j] += max(a[i-1][j], a[i][j-1]);
        }
      }
      for(i=n-1;i>0;)
      {
        for(j=m-1;j>0;)
        {
         if(i > 0 && j > 0)
         {
         if(a[i-1][j] > a[i][j-1])
         {
                      l++;
                      i--;
         }
         else
         {
                      l++;
                      j--;
         }     
         }
         else if(i == 0)
         {
              l += j;
              goto 
         }
         else
         {
             l += i;
         }   
        }
      }
      cout<<l<<endl;
    }
    return 0;
}
