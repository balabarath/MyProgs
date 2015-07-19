#include<iostream>
using namespace std;
long long sum=0,n,a[100][100];
int call(int x,int y)
{
 if(x==n-1&&y==n-1)
 sum++;
 if(x<n-1&&a[x+1][y]!=1)
 call(x+1,y);
 if(y<n-1&&a[x][y+1]!=1)
 call(x,y+1);
 return 0;
}
int main()
{
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    call(0,0);
    cout<<sum<<endl;
    return 0;
}
    
